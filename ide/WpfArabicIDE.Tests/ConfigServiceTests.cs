using System;
using System.IO;
using FluentAssertions;
using WpfArabicIDE.Services;
using Xunit;

public class ConfigServiceTests
{
    [Fact]
    public void Save_and_Load_roundtrip()
    {
        var temp = Path.Combine(Path.GetTempPath(), Guid.NewGuid().ToString());
        var svc = new ConfigService(temp);
        var cfg = new AppConfig { CompilerPath = "C:/tools/my_compiler.exe" };
        svc.Save(cfg);

        var loaded = svc.Load();
        loaded.CompilerPath.Should().Be(cfg.CompilerPath);
    }
}
