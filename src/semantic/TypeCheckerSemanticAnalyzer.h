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

    Any visitDeclaration(ExprParser::DeclarationContext *ctx) override {
        string varName = ctx->ID()->getText();
        string varType = ctx->type()->getText();
        size_t line = ctx->start->getLine();

        if (symbolTable.count(varName)) {
            string errMsg = "Semantic Error (Line " + to_string(line) + "): Variable '" + varName + "' has already been defined.";
            CompilerResultsHandler::getInstance().addError(errMsg);
        } else {
            symbolTable[varName] = {varType, line};
            // أبلغ المدير المركزي بالرمز الجديد
            CompilerResultsHandler::getInstance().addSymbol(varName, varType, line);
        }

        if (ctx->expr()) {
            visit(ctx->expr());
        }
        return nullptr;
    }

    Any visitAssignment(ExprParser::AssignmentContext *ctx) override {
        string varName = ctx->ID()->getText();
        if (!symbolTable.count(varName)) {
            string errMsg = "Semantic Error (Line " + to_string(ctx->start->getLine()) + "): Variable '" + varName + "' is not defined.";
            CompilerResultsHandler::getInstance().addError(errMsg);
        }
        return visit(ctx->expr());
    }

   
};