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