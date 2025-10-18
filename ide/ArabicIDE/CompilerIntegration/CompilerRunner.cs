using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Text.Json;
using System.Threading;
using System.Threading.Tasks;

namespace ArabicIDE.CompilerIntegration
{
    public sealed class CompilerReport
    {
        public string CompilationStatus { get; set; } = string.Empty;
        public string ParseTree { get; set; } = string.Empty;
        public List<string> Errors { get; } = new();
        public List<TokenInfo> Tokens { get; } = new();
        public List<SymbolInfo> Symbols { get; } = new();
        public string RawJson { get; set; } = string.Empty;
    }

    public sealed class TokenInfo
    {
        public string Type { get; set; } = string.Empty;
        public string Lexeme { get; set; } = string.Empty;
        public int Line { get; set; }
        public int Column { get; set; }
        public int StartIndex { get; set; }
        public int StopIndex { get; set; }
    }

    public sealed class SymbolInfo
    {
        public string Name { get; set; } = string.Empty;
        public string Type { get; set; } = string.Empty;
        public int LineDefined { get; set; }
    }

    public static class CompilerRunner
    {
        public static string DefaultCompilerPath()
        {
            // 1) Environment variable override
            var env = Environment.GetEnvironmentVariable("ARABIC_COMPILER_EXE");
            if (!string.IsNullOrWhiteSpace(env) && File.Exists(env))
                return env;

            // 2) Relative to solution typical layout
            var candidates = new[]
            {
                // VS or local run where C++ is built in build/ under repo root
                Path.Combine(AppContext.BaseDirectory, "..", "..", "..", "..", "build", "my_compiler.exe"),
                Path.Combine(AppContext.BaseDirectory, "..", "..", "build", "my_compiler.exe"),
                Path.Combine(AppContext.BaseDirectory, "build", "my_compiler.exe"),
            };
            foreach (var c in candidates)
            {
                var full = Path.GetFullPath(c);
                if (File.Exists(full)) return full;
            }
            return string.Empty;
        }

        public static Task<CompilerReport> RunAsync(string exePath, string sourceCode, CancellationToken cancellationToken)
        {
            return Task.Run(() => Run(exePath, sourceCode, cancellationToken), cancellationToken);
        }

        public static CompilerReport Run(string exePath, string sourceCode, CancellationToken cancellationToken)
        {
            if (!File.Exists(exePath)) throw new FileNotFoundException("Compiler executable not found", exePath);

            var psi = new ProcessStartInfo
            {
                FileName = exePath,
                Arguments = string.Empty,
                UseShellExecute = false,
                RedirectStandardInput = true,
                RedirectStandardOutput = true,
                RedirectStandardError = true,
                CreateNoWindow = true,
                StandardOutputEncoding = Encoding.UTF8,
                StandardErrorEncoding = Encoding.UTF8,
                WorkingDirectory = Path.GetDirectoryName(exePath) ?? Environment.CurrentDirectory
            };

            using var proc = new Process { StartInfo = psi, EnableRaisingEvents = false };
            proc.Start();

            using (var sw = proc.StandardInput)
            {
                sw.NewLine = "\n";
                sw.Write(sourceCode);
            }

            var stdout = proc.StandardOutput.ReadToEnd();
            var stderr = proc.StandardError.ReadToEnd();
            proc.WaitForExit();

            if (proc.ExitCode != 0 && string.IsNullOrWhiteSpace(stdout))
            {
                throw new InvalidOperationException($"Compiler failed: {stderr}");
            }

            var report = ParseJson(stdout);
            report.RawJson = stdout;
            return report;
        }

        private static CompilerReport ParseJson(string json)
        {
            var report = new CompilerReport();
            using var doc = JsonDocument.Parse(json);
            var root = doc.RootElement;

            if (root.TryGetProperty("compilationStatus", out var status))
                report.CompilationStatus = status.GetString() ?? string.Empty;

            if (root.TryGetProperty("parseTree", out var tree))
                report.ParseTree = tree.GetString() ?? string.Empty;

            if (root.TryGetProperty("errors", out var errors) && errors.ValueKind == JsonValueKind.Array)
            {
                foreach (var e in errors.EnumerateArray())
                {
                    if (e.ValueKind == JsonValueKind.String)
                        report.Errors.Add(e.GetString() ?? string.Empty);
                }
            }

            if (root.TryGetProperty("tokens", out var tokens) && tokens.ValueKind == JsonValueKind.Array)
            {
                foreach (var t in tokens.EnumerateArray())
                {
                    var tok = new TokenInfo
                    {
                        Type = t.TryGetProperty("type", out var tp) ? tp.GetString() ?? string.Empty : string.Empty,
                        Lexeme = t.TryGetProperty("lexeme", out var lx) ? lx.GetString() ?? string.Empty : string.Empty,
                        Line = t.TryGetProperty("line", out var ln) && ln.TryGetInt32(out var lnv) ? lnv : 0,
                        Column = t.TryGetProperty("column", out var cn) && cn.TryGetInt32(out var cnv) ? cnv : 0,
                        StartIndex = t.TryGetProperty("startIndex", out var si) && si.TryGetInt32(out var siv) ? siv : 0,
                        StopIndex = t.TryGetProperty("stopIndex", out var ei) && ei.TryGetInt32(out var eiv) ? eiv : 0,
                    };
                    report.Tokens.Add(tok);
                }
            }

            if (root.TryGetProperty("symbols", out var symbols) && symbols.ValueKind == JsonValueKind.Array)
            {
                foreach (var s in symbols.EnumerateArray())
                {
                    var sym = new SymbolInfo
                    {
                        Name = s.TryGetProperty("name", out var nm) ? nm.GetString() ?? string.Empty : string.Empty,
                        Type = s.TryGetProperty("type", out var tp) ? tp.GetString() ?? string.Empty : string.Empty,
                        LineDefined = s.TryGetProperty("lineDefined", out var ld) && ld.TryGetInt32(out var ldv) ? ldv : 0
                    };
                    report.Symbols.Add(sym);
                }
            }

            return report;
        }
    }
}
