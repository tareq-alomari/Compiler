
// Generated from /workspace/grammer/Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


namespace antlr_generated {

/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ExprParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ExprParser::ProgramContext *ctx) = 0;

  virtual void enterBlock(ExprParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ExprParser::BlockContext *ctx) = 0;

  virtual void enterDefinitions_part(ExprParser::Definitions_partContext *ctx) = 0;
  virtual void exitDefinitions_part(ExprParser::Definitions_partContext *ctx) = 0;

  virtual void enterConstants_definition(ExprParser::Constants_definitionContext *ctx) = 0;
  virtual void exitConstants_definition(ExprParser::Constants_definitionContext *ctx) = 0;

  virtual void enterConstant_def(ExprParser::Constant_defContext *ctx) = 0;
  virtual void exitConstant_def(ExprParser::Constant_defContext *ctx) = 0;

  virtual void enterTypes_definition(ExprParser::Types_definitionContext *ctx) = 0;
  virtual void exitTypes_definition(ExprParser::Types_definitionContext *ctx) = 0;

  virtual void enterType_def(ExprParser::Type_defContext *ctx) = 0;
  virtual void exitType_def(ExprParser::Type_defContext *ctx) = 0;

  virtual void enterVariables_definition(ExprParser::Variables_definitionContext *ctx) = 0;
  virtual void exitVariables_definition(ExprParser::Variables_definitionContext *ctx) = 0;

  virtual void enterVariable_def(ExprParser::Variable_defContext *ctx) = 0;
  virtual void exitVariable_def(ExprParser::Variable_defContext *ctx) = 0;

  virtual void enterProcedures_definition(ExprParser::Procedures_definitionContext *ctx) = 0;
  virtual void exitProcedures_definition(ExprParser::Procedures_definitionContext *ctx) = 0;

  virtual void enterProcedure_def(ExprParser::Procedure_defContext *ctx) = 0;
  virtual void exitProcedure_def(ExprParser::Procedure_defContext *ctx) = 0;

  virtual void enterComposite_type(ExprParser::Composite_typeContext *ctx) = 0;
  virtual void exitComposite_type(ExprParser::Composite_typeContext *ctx) = 0;

  virtual void enterList_type(ExprParser::List_typeContext *ctx) = 0;
  virtual void exitList_type(ExprParser::List_typeContext *ctx) = 0;

  virtual void enterRecord_type(ExprParser::Record_typeContext *ctx) = 0;
  virtual void exitRecord_type(ExprParser::Record_typeContext *ctx) = 0;

  virtual void enterFields_list(ExprParser::Fields_listContext *ctx) = 0;
  virtual void exitFields_list(ExprParser::Fields_listContext *ctx) = 0;

  virtual void enterField_def(ExprParser::Field_defContext *ctx) = 0;
  virtual void exitField_def(ExprParser::Field_defContext *ctx) = 0;

  virtual void enterVariables_group(ExprParser::Variables_groupContext *ctx) = 0;
  virtual void exitVariables_group(ExprParser::Variables_groupContext *ctx) = 0;

  virtual void enterProcedure_header(ExprParser::Procedure_headerContext *ctx) = 0;
  virtual void exitProcedure_header(ExprParser::Procedure_headerContext *ctx) = 0;

  virtual void enterProcedure_block(ExprParser::Procedure_blockContext *ctx) = 0;
  virtual void exitProcedure_block(ExprParser::Procedure_blockContext *ctx) = 0;

  virtual void enterFormal_params_list(ExprParser::Formal_params_listContext *ctx) = 0;
  virtual void exitFormal_params_list(ExprParser::Formal_params_listContext *ctx) = 0;

  virtual void enterParam_def(ExprParser::Param_defContext *ctx) = 0;
  virtual void exitParam_def(ExprParser::Param_defContext *ctx) = 0;

  virtual void enterData_type(ExprParser::Data_typeContext *ctx) = 0;
  virtual void exitData_type(ExprParser::Data_typeContext *ctx) = 0;

  virtual void enterInstructions_list(ExprParser::Instructions_listContext *ctx) = 0;
  virtual void exitInstructions_list(ExprParser::Instructions_listContext *ctx) = 0;

  virtual void enterInstruction(ExprParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(ExprParser::InstructionContext *ctx) = 0;

  virtual void enterAssignment_statement(ExprParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(ExprParser::Assignment_statementContext *ctx) = 0;

  virtual void enterInput_statement(ExprParser::Input_statementContext *ctx) = 0;
  virtual void exitInput_statement(ExprParser::Input_statementContext *ctx) = 0;

  virtual void enterOutput_statement(ExprParser::Output_statementContext *ctx) = 0;
  virtual void exitOutput_statement(ExprParser::Output_statementContext *ctx) = 0;

  virtual void enterCall_statement(ExprParser::Call_statementContext *ctx) = 0;
  virtual void exitCall_statement(ExprParser::Call_statementContext *ctx) = 0;

  virtual void enterPrint_list(ExprParser::Print_listContext *ctx) = 0;
  virtual void exitPrint_list(ExprParser::Print_listContext *ctx) = 0;

  virtual void enterPrint_item(ExprParser::Print_itemContext *ctx) = 0;
  virtual void exitPrint_item(ExprParser::Print_itemContext *ctx) = 0;

  virtual void enterActual_params_list(ExprParser::Actual_params_listContext *ctx) = 0;
  virtual void exitActual_params_list(ExprParser::Actual_params_listContext *ctx) = 0;

  virtual void enterActual_param(ExprParser::Actual_paramContext *ctx) = 0;
  virtual void exitActual_param(ExprParser::Actual_paramContext *ctx) = 0;

  virtual void enterConditional_statement(ExprParser::Conditional_statementContext *ctx) = 0;
  virtual void exitConditional_statement(ExprParser::Conditional_statementContext *ctx) = 0;

  virtual void enterCondition(ExprParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(ExprParser::ConditionContext *ctx) = 0;

  virtual void enterLoop_statement(ExprParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(ExprParser::Loop_statementContext *ctx) = 0;

  virtual void enterFor_loop_statement(ExprParser::For_loop_statementContext *ctx) = 0;
  virtual void exitFor_loop_statement(ExprParser::For_loop_statementContext *ctx) = 0;

  virtual void enterIteration_range(ExprParser::Iteration_rangeContext *ctx) = 0;
  virtual void exitIteration_range(ExprParser::Iteration_rangeContext *ctx) = 0;

  virtual void enterWhile_loop_statement(ExprParser::While_loop_statementContext *ctx) = 0;
  virtual void exitWhile_loop_statement(ExprParser::While_loop_statementContext *ctx) = 0;

  virtual void enterRepeat_until_statement(ExprParser::Repeat_until_statementContext *ctx) = 0;
  virtual void exitRepeat_until_statement(ExprParser::Repeat_until_statementContext *ctx) = 0;

  virtual void enterExpression(ExprParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ExprParser::ExpressionContext *ctx) = 0;

  virtual void enterSimple_expression(ExprParser::Simple_expressionContext *ctx) = 0;
  virtual void exitSimple_expression(ExprParser::Simple_expressionContext *ctx) = 0;

  virtual void enterTerm(ExprParser::TermContext *ctx) = 0;
  virtual void exitTerm(ExprParser::TermContext *ctx) = 0;

  virtual void enterFactor(ExprParser::FactorContext *ctx) = 0;
  virtual void exitFactor(ExprParser::FactorContext *ctx) = 0;

  virtual void enterVariable_access(ExprParser::Variable_accessContext *ctx) = 0;
  virtual void exitVariable_access(ExprParser::Variable_accessContext *ctx) = 0;

  virtual void enterSelector(ExprParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(ExprParser::SelectorContext *ctx) = 0;

  virtual void enterIndexed_selector(ExprParser::Indexed_selectorContext *ctx) = 0;
  virtual void exitIndexed_selector(ExprParser::Indexed_selectorContext *ctx) = 0;

  virtual void enterField_selector(ExprParser::Field_selectorContext *ctx) = 0;
  virtual void exitField_selector(ExprParser::Field_selectorContext *ctx) = 0;

  virtual void enterConstant_value(ExprParser::Constant_valueContext *ctx) = 0;
  virtual void exitConstant_value(ExprParser::Constant_valueContext *ctx) = 0;

  virtual void enterNumeric_value(ExprParser::Numeric_valueContext *ctx) = 0;
  virtual void exitNumeric_value(ExprParser::Numeric_valueContext *ctx) = 0;

  virtual void enterLiteral_value(ExprParser::Literal_valueContext *ctx) = 0;
  virtual void exitLiteral_value(ExprParser::Literal_valueContext *ctx) = 0;

  virtual void enterLogical_value(ExprParser::Logical_valueContext *ctx) = 0;
  virtual void exitLogical_value(ExprParser::Logical_valueContext *ctx) = 0;

  virtual void enterRelational_op(ExprParser::Relational_opContext *ctx) = 0;
  virtual void exitRelational_op(ExprParser::Relational_opContext *ctx) = 0;

  virtual void enterSign(ExprParser::SignContext *ctx) = 0;
  virtual void exitSign(ExprParser::SignContext *ctx) = 0;

  virtual void enterAdd_op(ExprParser::Add_opContext *ctx) = 0;
  virtual void exitAdd_op(ExprParser::Add_opContext *ctx) = 0;

  virtual void enterMul_op(ExprParser::Mul_opContext *ctx) = 0;
  virtual void exitMul_op(ExprParser::Mul_opContext *ctx) = 0;


};

}  // namespace antlr_generated
