using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Threading.Tasks;
using System.Windows;
using System.Text.RegularExpressions;
using WpfArabicIDE.Models;
using WpfArabicIDE.Services;
using ICSharpCode.AvalonEdit.Highlighting;
using System.Windows.Media;
using System.Xml;
using System.Reflection;
using System.Windows.Controls;
using System.Windows.Forms;

namespace WpfArabicIDE;

public partial class MainWindow : Window
{
    private readonly ConfigService _configService = new(Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData), "WpfArabicIDE"));
    private readonly CompilerRunner _runner = new();
    private string? _currentFilePath;
    private string? _currentFolder;

    public MainWindow()
    {
        InitializeComponent();
        // إعداد المحرر: اتجاه RTL ودعم التفاف
        Editor.Text = "برنامج س؛\n{\nاطبع(\"مرحبا\") ؛\n}\n.";
        Editor.FlowDirection = FlowDirection.RightToLeft;
        Editor.TextArea.TextView.LinkTextForegroundBrush = Brushes.DodgerBlue;
        // تحميل تلوين نحوي مخصص
        try
        {
            using var s = File.OpenRead(System.IO.Path.Combine(AppContext.BaseDirectory, "Utils", "ArabicSyntaxHighlighting.xshd"));
            using var reader = new XmlTextReader(s);
            Editor.SyntaxHighlighting = HighlightingLoader.Load(reader, HighlightingManager.Instance);
        }
        catch { /* fallback to default */ }
        WrapCheck.Checked += (_, __) => Editor.WordWrap = true;
        WrapCheck.Unchecked += (_, __) => Editor.WordWrap = false;
        RtlCheck.Checked += (_, __) => Editor.FlowDirection = FlowDirection.RightToLeft;
        RtlCheck.Unchecked += (_, __) => Editor.FlowDirection = FlowDirection.LeftToRight;
    }

    private void Open_Click(object sender, RoutedEventArgs e)
    {
        var dlg = new OpenFileDialog { Filter = "Source files|*.txt;*.src;*.code|All files|*.*" };
        if (dlg.ShowDialog() == true)
        {
            _currentFilePath = dlg.FileName;
            EditorText.Text = File.ReadAllText(dlg.FileName);
            StatusText.Text = $"تم فتح: {dlg.FileName}";
        }
    }

    private void Save_Click(object sender, RoutedEventArgs e)
    {
        if (string.IsNullOrWhiteSpace(_currentFilePath))
        {
            SaveAs_Click(sender, e);
            return;
        }
        File.WriteAllText(_currentFilePath, EditorText.Text);
        StatusText.Text = "تم الحفظ";
    }

    private void SaveAs_Click(object sender, RoutedEventArgs e)
    {
        var dlg = new SaveFileDialog { Filter = "Source files|*.txt;*.src;*.code|All files|*.*" };
        if (dlg.ShowDialog() == true)
        {
            _currentFilePath = dlg.FileName;
            File.WriteAllText(dlg.FileName, EditorText.Text);
            StatusText.Text = $"تم الحفظ في: {dlg.FileName}";
        }
    }

    private void New_Click(object sender, RoutedEventArgs e)
    {
        try
        {
            var templatePath = System.IO.Path.Combine(AppContext.BaseDirectory, "Utils", "ProjectTemplate.al");
            if (File.Exists(templatePath))
            {
                Editor.Text = File.ReadAllText(templatePath);
            }
            else
            {
                Editor.Text = "برنامج س؛\n{\nاطبع(\"مرحبا\") ؛\n}\n.";
            }
            _currentFilePath = null;
            StatusText.Text = "تم إنشاء ملف جديد";
        }
        catch (Exception ex)
        {
            MessageBox.Show(ex.Message, "خطأ", MessageBoxButton.OK, MessageBoxImage.Error);
        }
    }

    private async void Run_Click(object sender, RoutedEventArgs e)
    {
        try
        {
            var config = _configService.Load();
            if (string.IsNullOrWhiteSpace(config.CompilerPath) || !File.Exists(config.CompilerPath))
            {
                MessageBox.Show("يرجى ضبط مسار المترجم أولاً من قائمة الإعدادات.", "تنبيه", MessageBoxButton.OK, MessageBoxImage.Information);
                Settings_Click(sender, e);
                return;
            }

            StatusText.Text = "جاري الترجمة...";
            var (result, rawJson) = await _runner.RunAsync(config.CompilerPath!, Editor.Text);

            ErrorsList.ItemsSource = result.Errors ?? new List<string>();
            TokensGrid.ItemsSource = new ObservableCollection<TokenDto>(result.Tokens ?? new());
            SymbolsGrid.ItemsSource = new ObservableCollection<SymbolDto>(result.Symbols ?? new());
            ParseTreeText.Text = result.ParseTree ?? string.Empty;
            JsonRawText.Text = rawJson;
            StatusText.Text = $"الحالة: {result.CompilationStatus}";
        }
        catch (Exception ex)
        {
            MessageBox.Show(ex.Message, "خطأ", MessageBoxButton.OK, MessageBoxImage.Error);
            StatusText.Text = "فشل التنفيذ";
        }
    }

    private void ErrorsList_MouseDoubleClick(object sender, System.Windows.Input.MouseButtonEventArgs e)
    {
        if (ErrorsList.SelectedItem is not string msg) return;
        var m = Regex.Match(msg, @"Line\s+(\d+):(\d+)");
        if (!m.Success) return;
        if (int.TryParse(m.Groups[1].Value, out int line))
        {
            // تحريك المؤشر تقريبياً إلى بداية السطر
            var lines = Editor.Text.Split('\n');
            int pos = 0;
            for (int i = 0; i < Math.Min(line - 1, lines.Length); i++) pos += lines[i].Length + 1;
            Editor.Focus();
            Editor.CaretOffset = Math.Clamp(pos, 0, Editor.Text.Length);
        }
    }

    private void Settings_Click(object sender, RoutedEventArgs e)
    {
        var win = new Views.SettingsWindow();
        win.Owner = this;
        win.ShowDialog();
    }

    private void Exit_Click(object sender, RoutedEventArgs e)
    {
        Close();
    }

    private void OpenFolder_Click(object sender, RoutedEventArgs e)
    {
        using var dlg = new FolderBrowserDialog();
        if (dlg.ShowDialog() == System.Windows.Forms.DialogResult.OK)
        {
            _currentFolder = dlg.SelectedPath;
            LoadFolderTree(_currentFolder);
            StatusText.Text = $"تم فتح المجلد: {_currentFolder}";
        }
    }

    private void LoadFolderTree(string folder)
    {
        ProjectTree.Items.Clear();
        var root = new TreeViewItem { Header = System.IO.Path.GetFileName(folder), Tag = folder };
        BuildNodes(root, folder);
        ProjectTree.Items.Add(root);
        root.IsExpanded = true;
    }

    private void BuildNodes(TreeViewItem parent, string path)
    {
        foreach (var dir in Directory.GetDirectories(path))
        {
            var dirNode = new TreeViewItem { Header = System.IO.Path.GetFileName(dir), Tag = dir };
            parent.Items.Add(dirNode);
            BuildNodes(dirNode, dir);
        }
        foreach (var file in Directory.GetFiles(path))
        {
            var fileNode = new TreeViewItem { Header = System.IO.Path.GetFileName(file), Tag = file };
            parent.Items.Add(fileNode);
        }
    }

    private void ProjectTree_SelectedItemChanged(object sender, RoutedPropertyChangedEventArgs<object> e)
    {
        if (ProjectTree.SelectedItem is TreeViewItem item && item.Tag is string path && File.Exists(path))
        {
            _currentFilePath = path;
            Editor.Text = File.ReadAllText(path);
            StatusText.Text = $"فتح الملف: {path}";
        }
    }
}
