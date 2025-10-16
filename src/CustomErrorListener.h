#pragma once

#include "antlr4-runtime.h"
#include "CompilerResultsHandler.h"
#include <string>
#include <utility>
using namespace antlr4;

class CustomErrorListener : public BaseErrorListener {
private:
    string prefix;//like=>parser ,lexer,semantic لتشمل الكل  برسائل واضحة

public:
    explicit CustomErrorListener(string errorPrefix) : prefix(std::move(errorPrefix)) {}


    //override this function
    void syntaxError(Recognizer *recognizer, Token *offendingSymbol,
                     size_t line, size_t charPositionInLine, const string &msg,
                     exception_ptr e) override {
        
        string fullMessage = prefix + " (Line " + to_string(line) + ":" 
                                  + to_string(charPositionInLine) + "): " + msg;
        
        // الوصول إلى النسخة الوحيدة وإضافة الخطأ
        CompilerResultsHandler::getInstance().addError(fullMessage);
    }
};