# WpfArabicIDE - بيئة تطوير عربية

## المتطلبات
- Windows + Visual Studio 2022
- .NET 8 SDK
- تنفيذ `my_compiler` مبنيًا من هذا المستودع

## التثبيت والتشغيل
1) افتح المجلد `ide/WpfArabicIDE` في Visual Studio.
2) استرجع الحزم NuGet (يحمل AvalonEdit).
3) شغّل التطبيق (F5).
4) من قائمة "إعدادات" اختر مسار المترجم.

## الميزات
- محرر نصوص AvalonEdit: أرقام أسطر، RTL، التفاف، تلوين عربي.
- تشغيل المترجم عبر stdin واستعراض JSON بالكامل.
- تبويبات لعرض: الأخطاء، التوكنز، الرموز، شجرة التحليل، JSON.
- نقرة مزدوجة على الخطأ تنقلك للسطر.
- قالب ملف جديد جاهز.

## ملاحظات
- ملف تلوين النحو: `Utils/ArabicSyntaxHighlighting.xshd`.
- قالب البداية: `Utils/ProjectTemplate.al`.
