using WpfArabicIDE.Contracts;

public sealed class HelloPlugin : IPlugin
{
    public string Name => "Hello Plugin";
    public string Description => "Adds a hello command to the IDE";
    public string Version => "1.0.0";

    public void Initialize(IPluginContext context)
    {
        context.RegisterCommand("مرحبًا من الملحق", () => context.AddStatusMessage("مرحبًا! تم تشغيل الملحق."));
    }
}
