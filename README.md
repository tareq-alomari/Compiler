# المترجم العربي الصغير (ANTLR4 + C++)

هذا المشروع يقدّم مترجمًا تعليميًا بلغة ++C يعتمد على ANTLR4، مع نحو عربي كامل، ومخرجات JSON مفصّلة تتضمن: التوكنز، شجرة التحليل، الرموز، الأخطاء، وحالة التجميع. كما يحتوي على IDE Windows Forms مُعرب (RTL).

## نظرة عامة
- النحو: `grammer/Expr.g4` (عربي)
- التوليد: `src/generated/` (مُولّد عبر ANTLR 4.13.2)
- نقطة الدخول: `src/main.cpp` (الهدف التنفيذي: `my_compiler`)
- مراحل التنفيذ: Lexer → Parser → Semantic → JSON
- IDE: `ide/ArabicIDE` (C# WinForms)

## المتطلبات
- CMake ≥ 3.12، مٌصرّف C++17
- Java JRE (لتوليد ANTLR عند الحاجة)
- مضمّن: ANTLR4 Runtime (مجلد `antlr_runtime`)

## البناء (لينكس)
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
ctest --test-dir build --output-on-failure
```

## التشغيل (أمثلة)
- برنامج عربي بسيط:
```bash
echo -e "برنامج س؛ متغير س: صحيح؛ { س = 7؛ }." | ./build/my_compiler
```
- قراءة من ملف:
```bash
./build/my_compiler path/to/source.txt
```

## المخرجات
- JSON يتضمن المفاتيح: `errors`, `tokens`, `symbols`, `parseTree`, `compilationStatus`, `summary`.

## الحزم
- إنشاء الحزم (لينكس):
```bash
./scripts/package_linux.sh
```
- سيُنتج: `.tar.gz` ودعم `.deb`/`.rpm` إن توفرت الأدوات.

## IDE (ويندوز)
- المشروع: `ide/ArabicIDE/ArabicIDE.csproj`
- التشغيل: افتح في Visual Studio 2022.
- سكربت حزمة Zip: `ide/windows_package.ps1`
- سكربت MSI (WiX): `ide/windows_msi.ps1` (يتطلب WiX على PATH)

## التجارب والاختبارات
- اختبارات GoogleTest مضافة وتعمل (Lexer/Parser/Semantic).
- مثال جاهز في الـ IDE بنص عربي.

## تجديد التوليد (اختياري)
- تحديث `grammer/Expr.g4` ثم:
```bash
java -Xmx500M -cp grammer/antlr-4.13.2-complete.jar org.antlr.v4.Tool \
  -Dlanguage=Cpp -listener -visitor -package antlr_generated \
  -o src/generated grammer/Expr.g4
```

## بنية الشفرة
- `src/start.h`: ينسّق المراحل ويجمع التوكنز والشجرة.
- `src/semantic/TypeCheckerSemanticAnalyzer.h`: فحص دلالي بسيط (تعريف/إسناد/أنواع).
- `src/CompilerResultsHandler.h`: تجميع النتائج وإخراج JSON.

## ترخيص
- Runtime لـ ANTLR وفق ترخيصه، وباقي الشفرة MIT.
