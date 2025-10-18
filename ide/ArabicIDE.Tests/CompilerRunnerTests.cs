using System.IO;
using System.Threading;
using System.Threading.Tasks;
using ArabicIDE.CompilerIntegration;
using Xunit;

namespace ArabicIDE.Tests
{
    public class CompilerRunnerTests
    {
        [Fact]
        public async Task RunCompiler_ParsesSimpleProgram_WhenExeAvailable()
        {
            var exe = CompilerRunner.DefaultCompilerPath();
            if (string.IsNullOrWhiteSpace(exe) || !File.Exists(exe))
            {
                // Executable not present on this machine; skip test effectively.
                return;
            }

            var code = "int x;\nx = 3;\n";
            var report = await CompilerRunner.RunAsync(exe, code, CancellationToken.None);
            Assert.False(report.Errors.Count > 0);
            Assert.Equal("Succeeded", report.CompilationStatus);
        }
    }
}
