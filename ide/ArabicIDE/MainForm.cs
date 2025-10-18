using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using ArabicIDE.CompilerIntegration;
using System.Text.RegularExpressions;

namespace ArabicIDE
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
            // Localization to Arabic RTL
            this.RightToLeft = RightToLeft.Yes;
            this.RightToLeftLayout = true;
            this.Text = "بيئة تطوير المترجم العربي";
            btnRun.Text = "تشغيل (F5)";
            lblCompiler.Text = "مسار المترجم:";
            tabs.RightToLeftLayout = true;
            tabTokens.Text = "التوكنز";
            tabSymbols.Text = "الرموز";
            tabParseTree.Text = "شجرة التحليل";
            tabErrors.Text = "الأخطاء";
            tabRawJson.Text = "JSON";
        }

        private void MainForm_Load(object? sender, EventArgs e)
        {
            txtCompilerPath.Text = CompilerRunner.DefaultCompilerPath();
        }

        private async void btnRun_Click(object? sender, EventArgs e)
        {
            await RunCompilationAsync();
        }

        private async Task RunCompilationAsync()
        {
            var exePath = txtCompilerPath.Text.Trim();
            if (string.IsNullOrWhiteSpace(exePath) || !File.Exists(exePath))
            {
                MessageBox.Show(this, "Compiler executable not found. Please set a valid path.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            btnRun.Enabled = false;
            statusLabel.Text = "Running...";
            try
            {
                var report = await CompilerRunner.RunAsync(exePath, txtSource.Text, CancellationToken.None);
                PopulateUI(report);
                statusLabel.Text = report.CompilationStatus;
                // Basic syntax highlighting for Arabic keywords
                ApplySyntaxHighlighting();
            }
            catch (Exception ex)
            {
                statusLabel.Text = "Failed";
                MessageBox.Show(this, ex.Message, "Run failed", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            finally
            {
                btnRun.Enabled = true;
            }
        }

        private void ApplySyntaxHighlighting()
        {
            // Simple keyword highlighting (client-side); replace with a proper control if needed
            var keywords = new[] {
                "برنامج","متغير","نوع","ثابت","اطبع","اقرا","اذا","والا","فان",
                "كرر","الى","اضف","طالما","استمر","اعد","حتى","صحيح","حقيقي","منطقي","حرفي","خيط_رمزي"
            };
            if (txtSource is RichTextBox rtb)
            {
                var selStart = rtb.SelectionStart;
                var selLen = rtb.SelectionLength;
                rtb.SuspendLayout();
                rtb.SelectAll();
                rtb.SelectionColor = System.Drawing.Color.Black;
                foreach (var kw in keywords)
                {
                    int index = 0;
                    while ((index = rtb.Text.IndexOf(kw, index, StringComparison.Ordinal)) >= 0)
                    {
                        rtb.Select(index, kw.Length);
                        rtb.SelectionColor = System.Drawing.Color.DarkBlue;
                        index += kw.Length;
                    }
                }
                rtb.Select(selStart, selLen);
                rtb.ResumeLayout();
            }
        }

        private void PopulateUI(CompilerReport report)
        {
            // Tokens
            gridTokens.Rows.Clear();
            foreach (var t in report.Tokens)
            {
                gridTokens.Rows.Add(t.Type, t.Lexeme, t.Line, t.Column, t.StartIndex, t.StopIndex);
            }
            // Symbols
            gridSymbols.Rows.Clear();
            foreach (var s in report.Symbols)
            {
                gridSymbols.Rows.Add(s.Name, s.Type, s.LineDefined);
            }
            // Parse tree
            txtParseTree.Text = report.ParseTree ?? string.Empty;
            // Errors
            listErrors.Items.Clear();
            foreach (var e in report.Errors)
            {
                listErrors.Items.Add(e);
            }
            // Raw JSON
            txtRawJson.Text = report.RawJson ?? string.Empty;
        }

        private void btnBrowseCompiler_Click(object? sender, EventArgs e)
        {
            using var ofd = new OpenFileDialog
            {
                Filter = "Executable|*.exe|All files|*.*",
                Title = "Select Compiler Executable"
            };
            if (ofd.ShowDialog(this) == DialogResult.OK)
            {
                txtCompilerPath.Text = ofd.FileName;
            }
        }
    }
}
