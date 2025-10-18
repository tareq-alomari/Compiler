
// Generated from /workspace/grammer/Expr.g4 by ANTLR 4.13.2

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

  virtual std::any visitProgram(ExprParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ExprParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinitions_part(ExprParser::Definitions_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstants_definition(ExprParser::Constants_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_def(ExprParser::Constant_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypes_definition(ExprParser::Types_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_def(ExprParser::Type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariables_definition(ExprParser::Variables_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_def(ExprParser::Variable_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedures_definition(ExprParser::Procedures_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_def(ExprParser::Procedure_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComposite_type(ExprParser::Composite_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_type(ExprParser::List_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecord_type(ExprParser::Record_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFields_list(ExprParser::Fields_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_def(ExprParser::Field_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariables_group(ExprParser::Variables_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_header(ExprParser::Procedure_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_block(ExprParser::Procedure_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormal_params_list(ExprParser::Formal_params_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_def(ExprParser::Param_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type(ExprParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstructions_list(ExprParser::Instructions_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruction(ExprParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_statement(ExprParser::Assignment_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput_statement(ExprParser::Input_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput_statement(ExprParser::Output_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_statement(ExprParser::Call_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_list(ExprParser::Print_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_item(ExprParser::Print_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActual_params_list(ExprParser::Actual_params_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActual_param(ExprParser::Actual_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_statement(ExprParser::Conditional_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(ExprParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop_statement(ExprParser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_loop_statement(ExprParser::For_loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIteration_range(ExprParser::Iteration_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_loop_statement(ExprParser::While_loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeat_until_statement(ExprParser::Repeat_until_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ExprParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_expression(ExprParser::Simple_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(ExprParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(ExprParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_access(ExprParser::Variable_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelector(ExprParser::SelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexed_selector(ExprParser::Indexed_selectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_selector(ExprParser::Field_selectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_value(ExprParser::Constant_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumeric_value(ExprParser::Numeric_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral_value(ExprParser::Literal_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogical_value(ExprParser::Logical_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational_op(ExprParser::Relational_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSign(ExprParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_op(ExprParser::Add_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMul_op(ExprParser::Mul_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlr_generated
