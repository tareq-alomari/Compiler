#pragma once
#include "include/json.hpp" // استخدام مباشر لمكتبة JSON
#include <string>
#include <vector>
using namespace std;
// استخدام namespace لتسهيل الكتابة
using json = nlohmann::json;

class CompilerResultsHandler {
private:
    // كائن JSON الرئيسي الذي سيحتوي على كل شيء
    json results;
    vector<string> errors_vector; // لتسهيل التحقق من وجود أخطاء
    json warnings_array = json::array();

    CompilerResultsHandler() {
        // تهيئة البنية الأساسية للـ JSON
        results["errors"] = json::array();
        results["tokens"] = json::array();
        results["symbols"] = json::array();
        results["parseTree"] = "";
        results["compilationStatus"] = "In Progress";
    }

public:
    // حذف copy constructor و assignment operator لمنع النسخ
    CompilerResultsHandler(const CompilerResultsHandler&) = delete;
    CompilerResultsHandler& operator=(const CompilerResultsHandler&) = delete;


    // الدالة الثابتة للحصول على النسخة الوحيدة من الكلاس
    static CompilerResultsHandler& getInstance() {
        static CompilerResultsHandler instance; // يتم إنشاؤها مرة واحدة فقط
        return instance;
    }


    // --- دوال لإضافة البيانات من أي مكان في المترجم ---
    void addError(const string& message) {
        results["errors"].push_back(message);
        errors_vector.push_back(message); // أضفها هنا أيضًا
    }

    void addWarning(const string& message) {
        warnings_array.push_back(message);
        results["warnings"] = warnings_array;
    }

    // إعادة تهيئة جميع النتائج لتشغيل جديد (مفيد للاختبارات وتشغيلات متعددة)
    void reset() {
        results.clear();
        errors_vector.clear();
        results["errors"] = json::array();
        warnings_array = json::array();
        results["warnings"] = warnings_array;
        results["tokens"] = json::array();
        results["symbols"] = json::array();
        results["parseTree"] = "";
        results["compilationStatus"] = "In Progress";
    }

    // ملخص موجز للأعداد
    void finalizeSummary() {
        results["summary"] = {
            {"errorCount", errors_vector.size()},
            {"warningCount", warnings_array.size()},
            {"tokenCount", results["tokens"].size()},
            {"symbolCount", results["symbols"].size()}
        };
    }

    void addToken(size_t line, size_t column, std::string_view type, 
                  std::string_view lexeme, size_t startIndex, size_t stopIndex) {
        results["tokens"].push_back({
            {"type", type},
            {"lexeme", lexeme},
            {"line", line},
            {"column", column},
            {"startIndex", startIndex},
            {"stopIndex", stopIndex}
        });
    }

    void addSymbol(const string& name, const string& type, size_t lineDefined) {
        results["symbols"].push_back({
            {"name", name},
            {"type", type},
            {"lineDefined", lineDefined}
        });
    }

    void setParseTree(const string& treeString) {
        results["parseTree"] = treeString;
    }
    
    

    //هل نجح البرنامج او لا 
    void setCompilationStatus() {
        results["compilationStatus"] = errors_vector.empty() ? "Succeeded" : "Failed";
    }

    //هل هناك اخطأ
    bool hasErrors() const {
        return !errors_vector.empty();
    }

    // --- دالة للحصول على التقرير النهائي ---
    string getFinalReport() const {
        return results.dump(4);//وظيفتها: تحويل الكائن JSON في الذاكرة إلى نص (string) بصيغة JSON.
    }
};