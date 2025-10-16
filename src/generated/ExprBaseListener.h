
// Generated from /workspace/grammer/Expr.g4 by ANTLR 4.13.1

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

  virtual void enterProgram(ExprParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ExprParser::ProgramContext * /*ctx*/) override { }

  virtual void enterBlock(ExprParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ExprParser::BlockContext * /*ctx*/) override { }

  virtual void enterDefinitions_part(ExprParser::Definitions_partContext * /*ctx*/) override { }
  virtual void exitDefinitions_part(ExprParser::Definitions_partContext * /*ctx*/) override { }

  virtual void enterConstants_definition(ExprParser::Constants_definitionContext * /*ctx*/) override { }
  virtual void exitConstants_definition(ExprParser::Constants_definitionContext * /*ctx*/) override { }

  virtual void enterConstant_def(ExprParser::Constant_defContext * /*ctx*/) override { }
  virtual void exitConstant_def(ExprParser::Constant_defContext * /*ctx*/) override { }

  virtual void enterTypes_definition(ExprParser::Types_definitionContext * /*ctx*/) override { }
  virtual void exitTypes_definition(ExprParser::Types_definitionContext * /*ctx*/) override { }

  virtual void enterType_def(ExprParser::Type_defContext * /*ctx*/) override { }
  virtual void exitType_def(ExprParser::Type_defContext * /*ctx*/) override { }

  virtual void enterVariables_definition(ExprParser::Variables_definitionContext * /*ctx*/) override { }
  virtual void exitVariables_definition(ExprParser::Variables_definitionContext * /*ctx*/) override { }

  virtual void enterVariable_def(ExprParser::Variable_defContext * /*ctx*/) override { }
  virtual void exitVariable_def(ExprParser::Variable_defContext * /*ctx*/) override { }

  virtual void enterProcedures_definition(ExprParser::Procedures_definitionContext * /*ctx*/) override { }
  virtual void exitProcedures_definition(ExprParser::Procedures_definitionContext * /*ctx*/) override { }

  virtual void enterProcedure_def(ExprParser::Procedure_defContext * /*ctx*/) override { }
  virtual void exitProcedure_def(ExprParser::Procedure_defContext * /*ctx*/) override { }

  virtual void enterComposite_type(ExprParser::Composite_typeContext * /*ctx*/) override { }
  virtual void exitComposite_type(ExprParser::Composite_typeContext * /*ctx*/) override { }

  virtual void enterList_type(ExprParser::List_typeContext * /*ctx*/) override { }
  virtual void exitList_type(ExprParser::List_typeContext * /*ctx*/) override { }

  virtual void enterRecord_type(ExprParser::Record_typeContext * /*ctx*/) override { }
  virtual void exitRecord_type(ExprParser::Record_typeContext * /*ctx*/) override { }

  virtual void enterFields_list(ExprParser::Fields_listContext * /*ctx*/) override { }
  virtual void exitFields_list(ExprParser::Fields_listContext * /*ctx*/) override { }

  virtual void enterField_def(ExprParser::Field_defContext * /*ctx*/) override { }
  virtual void exitField_def(ExprParser::Field_defContext * /*ctx*/) override { }

  virtual void enterVariables_group(ExprParser::Variables_groupContext * /*ctx*/) override { }
  virtual void exitVariables_group(ExprParser::Variables_groupContext * /*ctx*/) override { }

  virtual void enterProcedure_header(ExprParser::Procedure_headerContext * /*ctx*/) override { }
  virtual void exitProcedure_header(ExprParser::Procedure_headerContext * /*ctx*/) override { }

  virtual void enterProcedure_block(ExprParser::Procedure_blockContext * /*ctx*/) override { }
  virtual void exitProcedure_block(ExprParser::Procedure_blockContext * /*ctx*/) override { }

  virtual void enterFormal_params_list(ExprParser::Formal_params_listContext * /*ctx*/) override { }
  virtual void exitFormal_params_list(ExprParser::Formal_params_listContext * /*ctx*/) override { }

  virtual void enterParam_def(ExprParser::Param_defContext * /*ctx*/) override { }
  virtual void exitParam_def(ExprParser::Param_defContext * /*ctx*/) override { }

  virtual void enterData_type(ExprParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(ExprParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterInstructions_list(ExprParser::Instructions_listContext * /*ctx*/) override { }
  virtual void exitInstructions_list(ExprParser::Instructions_listContext * /*ctx*/) override { }

  virtual void enterInstruction(ExprParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(ExprParser::InstructionContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(ExprParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(ExprParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterInput_statement(ExprParser::Input_statementContext * /*ctx*/) override { }
  virtual void exitInput_statement(ExprParser::Input_statementContext * /*ctx*/) override { }

  virtual void enterOutput_statement(ExprParser::Output_statementContext * /*ctx*/) override { }
  virtual void exitOutput_statement(ExprParser::Output_statementContext * /*ctx*/) override { }

  virtual void enterCall_statement(ExprParser::Call_statementContext * /*ctx*/) override { }
  virtual void exitCall_statement(ExprParser::Call_statementContext * /*ctx*/) override { }

  virtual void enterPrint_list(ExprParser::Print_listContext * /*ctx*/) override { }
  virtual void exitPrint_list(ExprParser::Print_listContext * /*ctx*/) override { }

  virtual void enterPrint_item(ExprParser::Print_itemContext * /*ctx*/) override { }
  virtual void exitPrint_item(ExprParser::Print_itemContext * /*ctx*/) override { }

  virtual void enterActual_params_list(ExprParser::Actual_params_listContext * /*ctx*/) override { }
  virtual void exitActual_params_list(ExprParser::Actual_params_listContext * /*ctx*/) override { }

  virtual void enterActual_param(ExprParser::Actual_paramContext * /*ctx*/) override { }
  virtual void exitActual_param(ExprParser::Actual_paramContext * /*ctx*/) override { }

  virtual void enterConditional_statement(ExprParser::Conditional_statementContext * /*ctx*/) override { }
  virtual void exitConditional_statement(ExprParser::Conditional_statementContext * /*ctx*/) override { }

  virtual void enterCondition(ExprParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(ExprParser::ConditionContext * /*ctx*/) override { }

  virtual void enterLoop_statement(ExprParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(ExprParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterFor_loop_statement(ExprParser::For_loop_statementContext * /*ctx*/) override { }
  virtual void exitFor_loop_statement(ExprParser::For_loop_statementContext * /*ctx*/) override { }

  virtual void enterIteration_range(ExprParser::Iteration_rangeContext * /*ctx*/) override { }
  virtual void exitIteration_range(ExprParser::Iteration_rangeContext * /*ctx*/) override { }

  virtual void enterWhile_loop_statement(ExprParser::While_loop_statementContext * /*ctx*/) override { }
  virtual void exitWhile_loop_statement(ExprParser::While_loop_statementContext * /*ctx*/) override { }

  virtual void enterRepeat_until_statement(ExprParser::Repeat_until_statementContext * /*ctx*/) override { }
  virtual void exitRepeat_until_statement(ExprParser::Repeat_until_statementContext * /*ctx*/) override { }

  virtual void enterExpression(ExprParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ExprParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterSimple_expression(ExprParser::Simple_expressionContext * /*ctx*/) override { }
  virtual void exitSimple_expression(ExprParser::Simple_expressionContext * /*ctx*/) override { }

  virtual void enterTerm(ExprParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(ExprParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(ExprParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(ExprParser::FactorContext * /*ctx*/) override { }

  virtual void enterVariable_access(ExprParser::Variable_accessContext * /*ctx*/) override { }
  virtual void exitVariable_access(ExprParser::Variable_accessContext * /*ctx*/) override { }

  virtual void enterSelector(ExprParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(ExprParser::SelectorContext * /*ctx*/) override { }

  virtual void enterIndexed_selector(ExprParser::Indexed_selectorContext * /*ctx*/) override { }
  virtual void exitIndexed_selector(ExprParser::Indexed_selectorContext * /*ctx*/) override { }

  virtual void enterField_selector(ExprParser::Field_selectorContext * /*ctx*/) override { }
  virtual void exitField_selector(ExprParser::Field_selectorContext * /*ctx*/) override { }

  virtual void enterConstant_value(ExprParser::Constant_valueContext * /*ctx*/) override { }
  virtual void exitConstant_value(ExprParser::Constant_valueContext * /*ctx*/) override { }

  virtual void enterNumeric_value(ExprParser::Numeric_valueContext * /*ctx*/) override { }
  virtual void exitNumeric_value(ExprParser::Numeric_valueContext * /*ctx*/) override { }

  virtual void enterLiteral_value(ExprParser::Literal_valueContext * /*ctx*/) override { }
  virtual void exitLiteral_value(ExprParser::Literal_valueContext * /*ctx*/) override { }

  virtual void enterLogical_value(ExprParser::Logical_valueContext * /*ctx*/) override { }
  virtual void exitLogical_value(ExprParser::Logical_valueContext * /*ctx*/) override { }

  virtual void enterRelational_op(ExprParser::Relational_opContext * /*ctx*/) override { }
  virtual void exitRelational_op(ExprParser::Relational_opContext * /*ctx*/) override { }

  virtual void enterSign(ExprParser::SignContext * /*ctx*/) override { }
  virtual void exitSign(ExprParser::SignContext * /*ctx*/) override { }

  virtual void enterAdd_op(ExprParser::Add_opContext * /*ctx*/) override { }
  virtual void exitAdd_op(ExprParser::Add_opContext * /*ctx*/) override { }

  virtual void enterMul_op(ExprParser::Mul_opContext * /*ctx*/) override { }
  virtual void exitMul_op(ExprParser::Mul_opContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlr_generated
