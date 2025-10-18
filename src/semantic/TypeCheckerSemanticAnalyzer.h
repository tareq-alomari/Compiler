#pragma once

#include "ExprBaseVisitor.h"
#include "ExprParser.h"
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

    // استنتاج نوع التعبير بشكل مبسط (حاليًا يدعم int فقط)
    string inferExprType(ExprParser::ExpressionContext* ctx) {
        if (ctx == nullptr) return "unknown";
        // مرّ على الأبناء بحثًا عن عدد صحيح أو مُعرّف
        for (auto *child : ctx->children) {
            if (auto *t = dynamic_cast<antlr4::tree::TerminalNode*>(child)) {
                const int tt = t->getSymbol()->getType();
                if (tt == ExprParser::INTEGER) return string("int");
                if (tt == ExprParser::ID) {
                    string name = t->getText();
                    if (symbolTable.count(name)) return symbolTable[name].type;
                }
            }
        }
        return "unknown";
    }

public:
    TypeCheckerSemanticAnalyzer() = default;

    // variables_definition: VARIABLE (variable_def)+;
    // variable_def: variables_group SEMICOLON;
    // variables_group: ID (COMMA ID)* COLON data_type;
    Any visitVariable_def(ExprParser::Variable_defContext *ctx) override {
        if (ctx == nullptr) return nullptr;
        auto *group = ctx->variables_group();
        if (group == nullptr) return nullptr;

        string type = group->data_type() ? group->data_type()->getText() : string("unknown");
        size_t line = ctx->start ? ctx->start->getLine() : 0;
        auto ids = group->ID();
        for (auto *idNode : ids) {
            string name = idNode->getText();
            if (symbolTable.count(name)) {
                CompilerResultsHandler::getInstance().addError(
                    "Semantic Error (Line " + to_string(line) + "): Variable '" + name + "' has already been defined.");
            } else {
                symbolTable[name] = {type, line};
                CompilerResultsHandler::getInstance().addSymbol(name, type, line);
            }
        }
        return nullptr;
    }

    // assignment_statement: variable_access EQUALS expression;
    Any visitAssignment_statement(ExprParser::Assignment_statementContext *ctx) override {
        if (ctx == nullptr) return nullptr;
        auto *va = ctx->variable_access();
        if (va == nullptr) return nullptr;
        auto *idNode = va->ID();
        if (idNode == nullptr) return nullptr;

        string varName = idNode->getText();
        size_t line = ctx->start ? ctx->start->getLine() : 0;
        if (!symbolTable.count(varName)) {
            CompilerResultsHandler::getInstance().addError(
                "Semantic Error (Line " + to_string(line) + "): Variable '" + varName + "' is not defined.");
        }

        if (ctx->expression()) {
            string rhsType = inferExprType(ctx->expression());
            string lhsType = symbolTable.count(varName) ? symbolTable[varName].type : string("unknown");
            if (lhsType != "unknown" && rhsType != "unknown" && lhsType != rhsType) {
                CompilerResultsHandler::getInstance().addError(
                    "Semantic Error (Line " + to_string(line) + "): Type mismatch: cannot assign '" + rhsType + "' to '" + lhsType + "'.");
            }
        }
        return nullptr;
    }
};
