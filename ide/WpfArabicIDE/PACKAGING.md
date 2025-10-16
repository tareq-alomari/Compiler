# نشر WPF - حزم MSIX/Installer

## خيار 1: MSIX (Store/ sideload)
1) أضف مشروع حزمة Windows Packaging لتجميع MSIX.
2) عرّف القدرات والتواقيع.
3) اربط المشروع بـ WpfArabicIDE.
4) Publish من Visual Studio (Create App Packages).

## خيار 2: Installer (MSI/EXE)
- استخدم WiX Toolset أو Squirrel.Windows:
  - WiX: أنشئ مشروع Setup، أضف ملفات `WpfArabicIDE.exe` والمحتوى، أنشئ اختصار سطح المكتب.
  - Squirrel: dotnet tool، إنشاء حزم قابلة للتحديث.

## ملفات التوزيع المطلوبة
- WpfArabicIDE.exe + محتويات مجلد النشر.
- تأكد من تضمين `Utils/ArabicSyntaxHighlighting.xshd` و`Utils/ProjectTemplate.al` ضمن Content/Copy to Output.

## توصية
- لسهولة النشر الأولى: `dotnet publish -c Release -r win-x64 -p:PublishSingleFile=true --self-contained=false`
- ثم تغليف عبر MSIX أو أداة التنصيب حسب الحاجة.
