
// Generated from d:/compilersLectures/lect4/grammer/Expr.g4 by ANTLR 4.13.1

#pragma once



#include "antlr4-runtime.h"
#include "ExprVisitor.h"


namespace antlr_generated {

/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual std::any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(ExprParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(ExprParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ExprParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(ExprParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(ExprParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlr_generated
