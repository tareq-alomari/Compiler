namespace WpfArabicIDE.Contracts;

public interface IPlugin
{
    string Name { get; }
    string Description { get; }
    string Version { get; }
    void Initialize(IPluginContext context);
}

public interface IPluginContext
{
    void RegisterCommand(string title, Action execute);
    void AddStatusMessage(string message);
}
