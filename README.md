# مترجم اللغة العربية + بيئة تطوير WPF

## المحتوى
- نظرة عامة
- البناء والتشغيل (C++)
- القواعد النحوية (ANTLR)
- المخرجات (JSON)
- بيئة التطوير WPF (ميزات وخطوات)
- تقرير تقني مختصر

## نظرة عامة
- مشروع C++17 يستخدم CMake وينتج التنفيذ `my_compiler`.
- يستخدم ANTLR4 لبناء Lexer/Parser من `grammer/Expr.g4` (لغة عربية).
- خط المعالجة:
  1) Lexer -> 2) Parser (program) -> 3) جمع النتائج -> 4) التحليل الدلالي.
- النتائج تُطبَع JSON: errors, tokens, symbols, parseTree, compilationStatus.

## البناء والتشغيل (C++)
```bash
rm -rf build
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
./build/my_compiler ./src/input.txt
```
أو عبر stdin:
```bash
echo "برنامج س؛ { اطبع(\"مرحبا\") ؛ } ." | ./build/my_compiler
```

## القواعد النحوية (ANTLR)
- المصدر: `grammer/Expr.g4` (عربية). يمكن إعادة التوليد:
```bash
java -jar antlr-4.13.1-complete.jar -Dlanguage=Cpp -visitor -listener -package antlr_generated -o src/generated grammer/Expr.g4
```

## المخرجات (JSON)
- مثال نجاح:
```json
{
  "compilationStatus": "Succeeded",
  "errors": [],
  "parseTree": "...",
  "symbols": [],
  "tokens": [ { "type": "PROGRAM", "lexeme": "برنامج", "line": 1, ... } ]
}
```

## بيئة التطوير WPF
- المسار: `ide/WpfArabicIDE` (يتطلب .NET 8 + Visual Studio 2022).
- الميزات:
  - محرر AvalonEdit (أرقام أسطر، RTL، التفاف، تلوين نحوي عربي).
  - تشغيل المترجم وعرض JSON/الأخطاء/التوكنز/الرموز/الشجرة.
  - نقرة مزدوجة على الخطأ تنقلك للسطر.
  - إعدادات لمسار المترجم.
  - قالب ملف جديد.
- التشغيل:
  1) فتح المشروع وتشغيل استرجاع NuGet.
  2) من "إعدادات" حدد مسار `my_compiler`.
  3) ابدأ التحرير واضغط "تشغيل".

## تقرير تقني مختصر
- بنيان: CMake + ANTLR4 runtime مضمّن، ربط ساكن `antlr4_static`.
- `start.h` ينفذ السلسلة كاملة ويجمع النتائج.
- التحليل الدلالي: تعريف/إسناد متغيرات (تم التكييف مع قواعد العربية: `variable_def`, `assignment_statement`).
- تحسينات مستقبلية: تحقق أنواع شامل، إجراءات ونطاقات، وحدات اختبار (CTest/GoogleTest)، CI.
