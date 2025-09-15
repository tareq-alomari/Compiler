
// Generated from d:/compilersLectures/lect4/grammer/Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


namespace antlr_generated {

/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(ExprParser::ProgContext *ctx) = 0;

  virtual void enterStat(ExprParser::StatContext *ctx) = 0;
  virtual void exitStat(ExprParser::StatContext *ctx) = 0;

  virtual void enterDeclaration(ExprParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(ExprParser::DeclarationContext *ctx) = 0;

  virtual void enterAssignment(ExprParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ExprParser::AssignmentContext *ctx) = 0;

  virtual void enterType(ExprParser::TypeContext *ctx) = 0;
  virtual void exitType(ExprParser::TypeContext *ctx) = 0;

  virtual void enterExpr(ExprParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ExprParser::ExprContext *ctx) = 0;


};

}  // namespace antlr_generated
