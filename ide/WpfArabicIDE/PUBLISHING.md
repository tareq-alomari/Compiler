# نشر سريع - WpfArabicIDE

## نشر ملف واحد (win-x64)
1) افتح Terminal في مجلد `ide/WpfArabicIDE`.
2) نفّذ:
```
dotnet publish -p:PublishProfile=Properties/PublishProfiles/WinX64.pubxml
```
3) المخرجات في `bin/Publish/win-x64/` كملف واحد.

## MSIX (اختياري)
- أضف مشروع Windows Packaging (MSIX)، واربطه بمشروع WpfArabicIDE، ثم أنشئ الحزمة من Visual Studio (Create App Packages).

## تضمين المترجم
- ضَع `my_compiler.exe` في مسار معروف على جهاز المستخدم أو أضف خيارًا في إعدادات IDE لتحديد المسار.
