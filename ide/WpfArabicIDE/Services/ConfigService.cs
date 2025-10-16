using System.IO;
using System.Text.Json;

namespace WpfArabicIDE.Services;

public sealed class ConfigService
{
    private const string FileName = "config.json";
    private readonly string _baseDirectory;

    public ConfigService(string? baseDirectory = null)
    {
        _baseDirectory = string.IsNullOrWhiteSpace(baseDirectory)
            ? Directory.GetCurrentDirectory()
            : baseDirectory!;
    }

    public AppConfig Load()
    {
        var path = Path.Combine(_baseDirectory, FileName);
        if (!File.Exists(path)) return new AppConfig();
        var json = File.ReadAllText(path);
        return JsonSerializer.Deserialize<AppConfig>(json) ?? new AppConfig();
    }

    public void Save(AppConfig config)
    {
        Directory.CreateDirectory(_baseDirectory);
        var json = JsonSerializer.Serialize(config, new JsonSerializerOptions { WriteIndented = true });
        var path = Path.Combine(_baseDirectory, FileName);
        File.WriteAllText(path, json);
    }
}

public sealed class AppConfig
{
    public string? CompilerPath { get; set; }
}
