using System.Diagnostics;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using WpfArabicIDE.Models;

namespace WpfArabicIDE.Services;

public sealed class CompilerRunner
{
    public async Task<(CompilerResult Result, string RawJson)> RunAsync(string compilerPath, string sourceCode)
    {
        var psi = new ProcessStartInfo
        {
            FileName = compilerPath,
            RedirectStandardInput = true,
            RedirectStandardOutput = true,
            RedirectStandardError = true,
            UseShellExecute = false,
            CreateNoWindow = true,
        };

        using var proc = new Process { StartInfo = psi };
        proc.Start();

        await using (var sw = proc.StandardInput)
        {
            await sw.WriteAsync(sourceCode);
        }

        var output = await proc.StandardOutput.ReadToEndAsync();
        var err = await proc.StandardError.ReadToEndAsync();
        await proc.WaitForExitAsync();

        if (proc.ExitCode != 0 && string.IsNullOrWhiteSpace(output))
        {
            throw new InvalidOperationException($"فشل تشغيل المترجم: {err}");
        }

        var result = JsonSerializer.Deserialize<CompilerResult>(output, new JsonSerializerOptions
        {
            PropertyNameCaseInsensitive = true
        }) ?? new CompilerResult();

        return (result, output);
    }
}
