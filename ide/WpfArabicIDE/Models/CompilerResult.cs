using System.Collections.Generic;
using System.Text.Json.Serialization;

namespace WpfArabicIDE.Models;

public sealed class CompilerResult
{
    [JsonPropertyName("errors")] public List<string>? Errors { get; set; }
    [JsonPropertyName("tokens")] public List<TokenDto>? Tokens { get; set; }
    [JsonPropertyName("symbols")] public List<SymbolDto>? Symbols { get; set; }
    [JsonPropertyName("parseTree")] public string? ParseTree { get; set; }
    [JsonPropertyName("compilationStatus")] public string? CompilationStatus { get; set; }
}

public sealed class TokenDto
{
    public string? Type { get; set; }
    public string? Lexeme { get; set; }
    public int Line { get; set; }
    public int Column { get; set; }
    public int StartIndex { get; set; }
    public int StopIndex { get; set; }
}

public sealed class SymbolDto
{
    public string? Name { get; set; }
    public string? Type { get; set; }
    public int LineDefined { get; set; }
}
