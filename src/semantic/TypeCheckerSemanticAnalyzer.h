#pragma once

#include "ExprBaseVisitor.h"
#include "CompilerResultsHandler.h"
#include <map>
#include <string>
using namespace std;
using namespace antlr_generated;
using namespace antlrcpp;

// تعريف هيكل لتمثيل معلومات الرمز
struct SymbolInfo {
    string type;
    size_t lineDefined;
};

using SymbolTable = map<string, SymbolInfo>;

class TypeCheckerSemanticAnalyzer : public ExprBaseVisitor {
private:
    SymbolTable symbolTable;

public:
    // لم نعد بحاجة لتمرير أي شيء في الـ Constructor
    TypeCheckerSemanticAnalyzer() = default;

    // تعريفات المتغيرات: variables_definition -> variable_def+ -> variables_group ':' data_type ';'
    // نقوم بالتقاط جميع المعرفات في المجموعة وإضافتها إلى جدول الرموز
    Any visitVariable_def(ExprParser::Variable_defContext *ctx) override {
        auto *group = ctx->variables_group();
        if (!group) return nullptr;

        string varType = group->data_type()->getText();
        auto ids = group->ID();
        for (auto *idNode : ids) {
            string varName = idNode->getText();
            size_t line = idNode->getSymbol()->getLine();
            if (symbolTable.count(varName)) {
                string errMsg = "Semantic Error (Line " + to_string(line) + "): Variable '" + varName + "' has already been defined.";
                CompilerResultsHandler::getInstance().addError(errMsg);
            } else {
                symbolTable[varName] = {varType, line};
                CompilerResultsHandler::getInstance().addSymbol(varName, varType, line);
            }
        }
        return nullptr;
    }

    // جملة الإسناد: assignment_statement: variable_access '=' expression
    Any visitAssignment_statement(ExprParser::Assignment_statementContext *ctx) override {
        string varName;
        if (auto *va = ctx->variable_access()) {
            if (auto *id = va->ID()) {
                varName = id->getText();
            }
        }
        if (!varName.empty() && !symbolTable.count(varName)) {
            string errMsg = "Semantic Error (Line " + to_string(ctx->start->getLine()) + "): Variable '" + varName + "' is not defined.";
            CompilerResultsHandler::getInstance().addError(errMsg);
        }
        if (ctx->expression()) {
            return visit(ctx->expression());
        }
        return nullptr;
    }

   
};