using System;
using System.IO;
using System.Threading.Tasks;
using FluentAssertions;
using WpfArabicIDE.Services;
using Xunit;

public class CompilerRunnerTests
{
    [Fact(Skip = "Requires compiled my_compiler on developer machine")] 
    public async Task Run_compiler_returns_json()
    {
        var compiler = Environment.GetEnvironmentVariable("ARABIC_COMPILER_PATH");
        if (string.IsNullOrWhiteSpace(compiler) || !File.Exists(compiler))
            return; // skip
        var runner = new CompilerRunner();
        var (result, raw) = await runner.RunAsync(compiler!, "برنامج س؛{ اطبع(\"مرحبا\") ؛ } .");
        result.CompilationStatus.Should().NotBeNull();
        raw.Should().Contain("compilationStatus");
    }
}
