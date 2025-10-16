using Microsoft.Win32;
using System.IO;
using System.Windows;
using WpfArabicIDE.Services;

namespace WpfArabicIDE.Views;

public partial class SettingsWindow : Window
{
    private readonly ConfigService _config = new();

    public SettingsWindow()
    {
        InitializeComponent();
        var cfg = _config.Load();
        CompilerPathText.Text = cfg.CompilerPath ?? string.Empty;
    }

    private void Browse_Click(object sender, RoutedEventArgs e)
    {
        var dlg = new OpenFileDialog { Filter = "Executable|*|All files|*.*" };
        if (dlg.ShowDialog() == true)
        {
            CompilerPathText.Text = dlg.FileName;
        }
    }

    private void Save_Click(object sender, RoutedEventArgs e)
    {
        var path = CompilerPathText.Text;
        if (!File.Exists(path))
        {
            MessageBox.Show("المسار غير صحيح.", "تنبيه", MessageBoxButton.OK, MessageBoxImage.Warning);
            return;
        }
        _config.Save(new AppConfig { CompilerPath = path });
        DialogResult = true;
        Close();
    }

    private void Cancel_Click(object sender, RoutedEventArgs e)
    {
        DialogResult = false;
        Close();
    }
}
