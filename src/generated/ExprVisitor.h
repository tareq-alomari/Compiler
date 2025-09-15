
// Generated from d:/compilersLectures/lect4/grammer/Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


namespace antlr_generated {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual std::any visitProg(ExprParser::ProgContext *context) = 0;

    virtual std::any visitStat(ExprParser::StatContext *context) = 0;

    virtual std::any visitDeclaration(ExprParser::DeclarationContext *context) = 0;

    virtual std::any visitAssignment(ExprParser::AssignmentContext *context) = 0;

    virtual std::any visitType(ExprParser::TypeContext *context) = 0;

    virtual std::any visitExpr(ExprParser::ExprContext *context) = 0;


};

}  // namespace antlr_generated
