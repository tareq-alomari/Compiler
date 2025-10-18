namespace ArabicIDE
{
    partial class MainForm
    {
        private System.ComponentModel.IContainer components = null;
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        private void InitializeComponent()
        {
            this.toolStrip = new System.Windows.Forms.ToolStrip();
            this.btnRun = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.lblCompiler = new System.Windows.Forms.ToolStripLabel();
            this.txtCompilerPath = new System.Windows.Forms.ToolStripTextBox();
            this.btnBrowseCompiler = new System.Windows.Forms.ToolStripButton();
            this.statusStrip = new System.Windows.Forms.StatusStrip();
            this.statusLabel = new System.Windows.Forms.ToolStripStatusLabel();
            this.splitContainer = new System.Windows.Forms.SplitContainer();
            this.txtSource = new System.Windows.Forms.RichTextBox();
            this.tabs = new System.Windows.Forms.TabControl();
            this.tabTokens = new System.Windows.Forms.TabPage();
            this.gridTokens = new System.Windows.Forms.DataGridView();
            this.colTokType = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colTokLexeme = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colTokLine = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colTokColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colTokStart = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colTokStop = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.tabSymbols = new System.Windows.Forms.TabPage();
            this.gridSymbols = new System.Windows.Forms.DataGridView();
            this.colSymName = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colSymType = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colSymLine = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.tabParseTree = new System.Windows.Forms.TabPage();
            this.txtParseTree = new System.Windows.Forms.TextBox();
            this.tabErrors = new System.Windows.Forms.TabPage();
            this.listErrors = new System.Windows.Forms.ListBox();
            this.tabRawJson = new System.Windows.Forms.TabPage();
            this.txtRawJson = new System.Windows.Forms.TextBox();
            this.toolStrip.SuspendLayout();
            this.statusStrip.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer)).BeginInit();
            this.splitContainer.Panel1.SuspendLayout();
            this.splitContainer.Panel2.SuspendLayout();
            this.splitContainer.SuspendLayout();
            this.tabs.SuspendLayout();
            this.tabTokens.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.gridTokens)).BeginInit();
            this.tabSymbols.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.gridSymbols)).BeginInit();
            this.tabParseTree.SuspendLayout();
            this.tabErrors.SuspendLayout();
            this.tabRawJson.SuspendLayout();
            this.SuspendLayout();
            // 
            // toolStrip
            // 
            this.toolStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.btnRun,
            this.toolStripSeparator1,
            this.lblCompiler,
            this.txtCompilerPath,
            this.btnBrowseCompiler});
            this.toolStrip.Location = new System.Drawing.Point(0, 0);
            this.toolStrip.Name = "toolStrip";
            this.toolStrip.Size = new System.Drawing.Size(1200, 27);
            this.toolStrip.TabIndex = 0;
            this.toolStrip.Text = "toolStrip1";
            // 
            // btnRun
            // 
            this.btnRun.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.btnRun.Name = "btnRun";
            this.btnRun.Size = new System.Drawing.Size(64, 24);
            this.btnRun.Text = "تشغيل (F5)";
            this.btnRun.Click += new System.EventHandler(this.btnRun_Click);
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(6, 27);
            // 
            // lblCompiler
            // 
            this.lblCompiler.Name = "lblCompiler";
            this.lblCompiler.Size = new System.Drawing.Size(102, 24);
            this.lblCompiler.Text = "مسار المترجم:";
            // 
            // txtCompilerPath
            // 
            this.txtCompilerPath.AutoSize = false;
            this.txtCompilerPath.Name = "txtCompilerPath";
            this.txtCompilerPath.Size = new System.Drawing.Size(600, 27);
            // 
            // btnBrowseCompiler
            // 
            this.btnBrowseCompiler.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.btnBrowseCompiler.Name = "btnBrowseCompiler";
            this.btnBrowseCompiler.Size = new System.Drawing.Size(61, 24);
            this.btnBrowseCompiler.Text = "استعراض";
            this.btnBrowseCompiler.Click += new System.EventHandler(this.btnBrowseCompiler_Click);
            // 
            // statusStrip
            // 
            this.statusStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.statusLabel});
            this.statusStrip.Location = new System.Drawing.Point(0, 773);
            this.statusStrip.Name = "statusStrip";
            this.statusStrip.Size = new System.Drawing.Size(1200, 22);
            this.statusStrip.TabIndex = 1;
            this.statusStrip.Text = "statusStrip1";
            // 
            // statusLabel
            // 
            this.statusLabel.Name = "statusLabel";
            this.statusLabel.Size = new System.Drawing.Size(0, 17);
            // 
            // splitContainer
            // 
            this.splitContainer.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer.Location = new System.Drawing.Point(0, 27);
            this.splitContainer.Name = "splitContainer";
            // 
            // splitContainer.Panel1
            // 
            this.splitContainer.Panel1.Controls.Add(this.txtSource);
            // 
            // splitContainer.Panel2
            // 
            this.splitContainer.Panel2.Controls.Add(this.tabs);
            this.splitContainer.Size = new System.Drawing.Size(1200, 746);
            this.splitContainer.SplitterDistance = 600;
            this.splitContainer.TabIndex = 2;
            // 
            // txtSource
            // 
            this.txtSource.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtSource.Font = new System.Drawing.Font("Consolas", 11F);
            this.txtSource.Location = new System.Drawing.Point(0, 0);
            this.txtSource.Name = "txtSource";
            this.txtSource.Size = new System.Drawing.Size(600, 746);
            this.txtSource.TabIndex = 0;
            this.txtSource.Text = "برنامج س؛ متغير س: صحيح؛ { س = 7؛ }.";
            // 
            // tabs
            // 
            this.tabs.Controls.Add(this.tabTokens);
            this.tabs.Controls.Add(this.tabSymbols);
            this.tabs.Controls.Add(this.tabParseTree);
            this.tabs.Controls.Add(this.tabErrors);
            this.tabs.Controls.Add(this.tabRawJson);
            this.tabs.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabs.Location = new System.Drawing.Point(0, 0);
            this.tabs.Name = "tabs";
            this.tabs.SelectedIndex = 0;
            this.tabs.Size = new System.Drawing.Size(596, 746);
            this.tabs.TabIndex = 0;
            // 
            // tabTokens
            // 
            this.tabTokens.Controls.Add(this.gridTokens);
            this.tabTokens.Location = new System.Drawing.Point(4, 29);
            this.tabTokens.Name = "tabTokens";
            this.tabTokens.Padding = new System.Windows.Forms.Padding(3);
            this.tabTokens.Size = new System.Drawing.Size(588, 713);
            this.tabTokens.TabIndex = 0;
            this.tabTokens.Text = "التوكنز";
            this.tabTokens.UseVisualStyleBackColor = true;
            // 
            // gridTokens
            // 
            this.gridTokens.AllowUserToAddRows = false;
            this.gridTokens.AllowUserToDeleteRows = false;
            this.gridTokens.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.gridTokens.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.gridTokens.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.colTokType,
            this.colTokLexeme,
            this.colTokLine,
            this.colTokColumn,
            this.colTokStart,
            this.colTokStop});
            this.gridTokens.Dock = System.Windows.Forms.DockStyle.Fill;
            this.gridTokens.Location = new System.Drawing.Point(3, 3);
            this.gridTokens.MultiSelect = false;
            this.gridTokens.Name = "gridTokens";
            this.gridTokens.ReadOnly = true;
            this.gridTokens.RowHeadersVisible = false;
            this.gridTokens.RowTemplate.Height = 29;
            this.gridTokens.Size = new System.Drawing.Size(582, 707);
            this.gridTokens.TabIndex = 0;
            // 
            // colTokType
            // 
            this.colTokType.HeaderText = "Type";
            this.colTokType.MinimumWidth = 6;
            this.colTokType.Name = "colTokType";
            this.colTokType.ReadOnly = true;
            // 
            // colTokLexeme
            // 
            this.colTokLexeme.HeaderText = "Lexeme";
            this.colTokLexeme.MinimumWidth = 6;
            this.colTokLexeme.Name = "colTokLexeme";
            this.colTokLexeme.ReadOnly = true;
            // 
            // colTokLine
            // 
            this.colTokLine.HeaderText = "Line";
            this.colTokLine.MinimumWidth = 6;
            this.colTokLine.Name = "colTokLine";
            this.colTokLine.ReadOnly = true;
            // 
            // colTokColumn
            // 
            this.colTokColumn.HeaderText = "Column";
            this.colTokColumn.MinimumWidth = 6;
            this.colTokColumn.Name = "colTokColumn";
            this.colTokColumn.ReadOnly = true;
            // 
            // colTokStart
            // 
            this.colTokStart.HeaderText = "Start";
            this.colTokStart.MinimumWidth = 6;
            this.colTokStart.Name = "colTokStart";
            this.colTokStart.ReadOnly = true;
            // 
            // colTokStop
            // 
            this.colTokStop.HeaderText = "Stop";
            this.colTokStop.MinimumWidth = 6;
            this.colTokStop.Name = "colTokStop";
            this.colTokStop.ReadOnly = true;
            // 
            // tabSymbols
            // 
            this.tabSymbols.Controls.Add(this.gridSymbols);
            this.tabSymbols.Location = new System.Drawing.Point(4, 29);
            this.tabSymbols.Name = "tabSymbols";
            this.tabSymbols.Padding = new System.Windows.Forms.Padding(3);
            this.tabSymbols.Size = new System.Drawing.Size(588, 713);
            this.tabSymbols.TabIndex = 1;
            this.tabSymbols.Text = "الرموز";
            this.tabSymbols.UseVisualStyleBackColor = true;
            // 
            // gridSymbols
            // 
            this.gridSymbols.AllowUserToAddRows = false;
            this.gridSymbols.AllowUserToDeleteRows = false;
            this.gridSymbols.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.gridSymbols.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.gridSymbols.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.colSymName,
            this.colSymType,
            this.colSymLine});
            this.gridSymbols.Dock = System.Windows.Forms.DockStyle.Fill;
            this.gridSymbols.Location = new System.Drawing.Point(3, 3);
            this.gridSymbols.MultiSelect = false;
            this.gridSymbols.Name = "gridSymbols";
            this.gridSymbols.ReadOnly = true;
            this.gridSymbols.RowHeadersVisible = false;
            this.gridSymbols.RowTemplate.Height = 29;
            this.gridSymbols.Size = new System.Drawing.Size(582, 707);
            this.gridSymbols.TabIndex = 0;
            // 
            // colSymName
            // 
            this.colSymName.HeaderText = "Name";
            this.colSymName.MinimumWidth = 6;
            this.colSymName.Name = "colSymName";
            this.colSymName.ReadOnly = true;
            // 
            // colSymType
            // 
            this.colSymType.HeaderText = "Type";
            this.colSymType.MinimumWidth = 6;
            this.colSymType.Name = "colSymType";
            this.colSymType.ReadOnly = true;
            // 
            // colSymLine
            // 
            this.colSymLine.HeaderText = "Line";
            this.colSymLine.MinimumWidth = 6;
            this.colSymLine.Name = "colSymLine";
            this.colSymLine.ReadOnly = true;
            // 
            // tabParseTree
            // 
            this.tabParseTree.Controls.Add(this.txtParseTree);
            this.tabParseTree.Location = new System.Drawing.Point(4, 29);
            this.tabParseTree.Name = "tabParseTree";
            this.tabParseTree.Size = new System.Drawing.Size(588, 713);
            this.tabParseTree.TabIndex = 2;
            this.tabParseTree.Text = "شجرة التحليل";
            this.tabParseTree.UseVisualStyleBackColor = true;
            // 
            // txtParseTree
            // 
            this.txtParseTree.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtParseTree.Font = new System.Drawing.Font("Consolas", 10F);
            this.txtParseTree.Location = new System.Drawing.Point(0, 0);
            this.txtParseTree.Multiline = true;
            this.txtParseTree.Name = "txtParseTree";
            this.txtParseTree.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.txtParseTree.Size = new System.Drawing.Size(588, 713);
            this.txtParseTree.TabIndex = 0;
            // 
            // tabErrors
            // 
            this.tabErrors.Controls.Add(this.listErrors);
            this.tabErrors.Location = new System.Drawing.Point(4, 29);
            this.tabErrors.Name = "tabErrors";
            this.tabErrors.Size = new System.Drawing.Size(588, 713);
            this.tabErrors.TabIndex = 3;
            this.tabErrors.Text = "الأخطاء";
            this.tabErrors.UseVisualStyleBackColor = true;
            // 
            // listErrors
            // 
            this.listErrors.Dock = System.Windows.Forms.DockStyle.Fill;
            this.listErrors.Font = new System.Drawing.Font("Consolas", 10F);
            this.listErrors.ItemHeight = 20;
            this.listErrors.Location = new System.Drawing.Point(0, 0);
            this.listErrors.Name = "listErrors";
            this.listErrors.Size = new System.Drawing.Size(588, 713);
            this.listErrors.TabIndex = 0;
            // 
            // tabRawJson
            // 
            this.tabRawJson.Controls.Add(this.txtRawJson);
            this.tabRawJson.Location = new System.Drawing.Point(4, 29);
            this.tabRawJson.Name = "tabRawJson";
            this.tabRawJson.Size = new System.Drawing.Size(588, 713);
            this.tabRawJson.TabIndex = 4;
            this.tabRawJson.Text = "JSON";
            this.tabRawJson.UseVisualStyleBackColor = true;
            // 
            // txtRawJson
            // 
            this.txtRawJson.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtRawJson.Font = new System.Drawing.Font("Consolas", 10F);
            this.txtRawJson.Location = new System.Drawing.Point(0, 0);
            this.txtRawJson.Multiline = true;
            this.txtRawJson.Name = "txtRawJson";
            this.txtRawJson.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.txtRawJson.Size = new System.Drawing.Size(588, 713);
            this.txtRawJson.TabIndex = 0;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1200, 795);
            this.Controls.Add(this.splitContainer);
            this.Controls.Add(this.statusStrip);
            this.Controls.Add(this.toolStrip);
            this.Name = "MainForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "بيئة تطوير المترجم العربي";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.toolStrip.ResumeLayout(false);
            this.toolStrip.PerformLayout();
            this.statusStrip.ResumeLayout(false);
            this.statusStrip.PerformLayout();
            this.splitContainer.Panel1.ResumeLayout(false);
            this.splitContainer.Panel1.PerformLayout();
            this.splitContainer.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer)).EndInit();
            this.splitContainer.ResumeLayout(false);
            this.tabs.ResumeLayout(false);
            this.tabTokens.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.gridTokens)).EndInit();
            this.tabSymbols.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.gridSymbols)).EndInit();
            this.tabParseTree.ResumeLayout(false);
            this.tabParseTree.PerformLayout();
            this.tabErrors.ResumeLayout(false);
            this.tabRawJson.ResumeLayout(false);
            this.tabRawJson.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        private System.Windows.Forms.ToolStrip toolStrip;
        private System.Windows.Forms.ToolStripButton btnRun;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripLabel lblCompiler;
        private System.Windows.Forms.ToolStripTextBox txtCompilerPath;
        private System.Windows.Forms.ToolStripButton btnBrowseCompiler;
        private System.Windows.Forms.StatusStrip statusStrip;
        private System.Windows.Forms.ToolStripStatusLabel statusLabel;
        private System.Windows.Forms.SplitContainer splitContainer;
        private System.Windows.Forms.TextBox txtSource;
        private System.Windows.Forms.TabControl tabs;
        private System.Windows.Forms.TabPage tabTokens;
        private System.Windows.Forms.DataGridView gridTokens;
        private System.Windows.Forms.DataGridViewTextBoxColumn colTokType;
        private System.Windows.Forms.DataGridViewTextBoxColumn colTokLexeme;
        private System.Windows.Forms.DataGridViewTextBoxColumn colTokLine;
        private System.Windows.Forms.DataGridViewTextBoxColumn colTokColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn colTokStart;
        private System.Windows.Forms.DataGridViewTextBoxColumn colTokStop;
        private System.Windows.Forms.TabPage tabSymbols;
        private System.Windows.Forms.DataGridView gridSymbols;
        private System.Windows.Forms.DataGridViewTextBoxColumn colSymName;
        private System.Windows.Forms.DataGridViewTextBoxColumn colSymType;
        private System.Windows.Forms.DataGridViewTextBoxColumn colSymLine;
        private System.Windows.Forms.TabPage tabParseTree;
        private System.Windows.Forms.TextBox txtParseTree;
        private System.Windows.Forms.TabPage tabErrors;
        private System.Windows.Forms.ListBox listErrors;
        private System.Windows.Forms.TabPage tabRawJson;
        private System.Windows.Forms.TextBox txtRawJson;
    }
}
