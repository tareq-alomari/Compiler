
// Generated from d:/compilersLectures/lect4/grammer/Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


namespace antlr_generated {

/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterProg(ExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterStat(ExprParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(ExprParser::StatContext * /*ctx*/) override { }

  virtual void enterDeclaration(ExprParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(ExprParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(ExprParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ExprParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterType(ExprParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(ExprParser::TypeContext * /*ctx*/) override { }

  virtual void enterExpr(ExprParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ExprParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlr_generated
