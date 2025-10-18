
// Generated from /workspace/grammer/Expr.g4 by ANTLR 4.13.2

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
    virtual std::any visitProgram(ExprParser::ProgramContext *context) = 0;

    virtual std::any visitBlock(ExprParser::BlockContext *context) = 0;

    virtual std::any visitDefinitions_part(ExprParser::Definitions_partContext *context) = 0;

    virtual std::any visitConstants_definition(ExprParser::Constants_definitionContext *context) = 0;

    virtual std::any visitConstant_def(ExprParser::Constant_defContext *context) = 0;

    virtual std::any visitTypes_definition(ExprParser::Types_definitionContext *context) = 0;

    virtual std::any visitType_def(ExprParser::Type_defContext *context) = 0;

    virtual std::any visitVariables_definition(ExprParser::Variables_definitionContext *context) = 0;

    virtual std::any visitVariable_def(ExprParser::Variable_defContext *context) = 0;

    virtual std::any visitProcedures_definition(ExprParser::Procedures_definitionContext *context) = 0;

    virtual std::any visitProcedure_def(ExprParser::Procedure_defContext *context) = 0;

    virtual std::any visitComposite_type(ExprParser::Composite_typeContext *context) = 0;

    virtual std::any visitList_type(ExprParser::List_typeContext *context) = 0;

    virtual std::any visitRecord_type(ExprParser::Record_typeContext *context) = 0;

    virtual std::any visitFields_list(ExprParser::Fields_listContext *context) = 0;

    virtual std::any visitField_def(ExprParser::Field_defContext *context) = 0;

    virtual std::any visitVariables_group(ExprParser::Variables_groupContext *context) = 0;

    virtual std::any visitProcedure_header(ExprParser::Procedure_headerContext *context) = 0;

    virtual std::any visitProcedure_block(ExprParser::Procedure_blockContext *context) = 0;

    virtual std::any visitFormal_params_list(ExprParser::Formal_params_listContext *context) = 0;

    virtual std::any visitParam_def(ExprParser::Param_defContext *context) = 0;

    virtual std::any visitData_type(ExprParser::Data_typeContext *context) = 0;

    virtual std::any visitInstructions_list(ExprParser::Instructions_listContext *context) = 0;

    virtual std::any visitInstruction(ExprParser::InstructionContext *context) = 0;

    virtual std::any visitAssignment_statement(ExprParser::Assignment_statementContext *context) = 0;

    virtual std::any visitInput_statement(ExprParser::Input_statementContext *context) = 0;

    virtual std::any visitOutput_statement(ExprParser::Output_statementContext *context) = 0;

    virtual std::any visitCall_statement(ExprParser::Call_statementContext *context) = 0;

    virtual std::any visitPrint_list(ExprParser::Print_listContext *context) = 0;

    virtual std::any visitPrint_item(ExprParser::Print_itemContext *context) = 0;

    virtual std::any visitActual_params_list(ExprParser::Actual_params_listContext *context) = 0;

    virtual std::any visitActual_param(ExprParser::Actual_paramContext *context) = 0;

    virtual std::any visitConditional_statement(ExprParser::Conditional_statementContext *context) = 0;

    virtual std::any visitCondition(ExprParser::ConditionContext *context) = 0;

    virtual std::any visitLoop_statement(ExprParser::Loop_statementContext *context) = 0;

    virtual std::any visitFor_loop_statement(ExprParser::For_loop_statementContext *context) = 0;

    virtual std::any visitIteration_range(ExprParser::Iteration_rangeContext *context) = 0;

    virtual std::any visitWhile_loop_statement(ExprParser::While_loop_statementContext *context) = 0;

    virtual std::any visitRepeat_until_statement(ExprParser::Repeat_until_statementContext *context) = 0;

    virtual std::any visitExpression(ExprParser::ExpressionContext *context) = 0;

    virtual std::any visitSimple_expression(ExprParser::Simple_expressionContext *context) = 0;

    virtual std::any visitTerm(ExprParser::TermContext *context) = 0;

    virtual std::any visitFactor(ExprParser::FactorContext *context) = 0;

    virtual std::any visitVariable_access(ExprParser::Variable_accessContext *context) = 0;

    virtual std::any visitSelector(ExprParser::SelectorContext *context) = 0;

    virtual std::any visitIndexed_selector(ExprParser::Indexed_selectorContext *context) = 0;

    virtual std::any visitField_selector(ExprParser::Field_selectorContext *context) = 0;

    virtual std::any visitConstant_value(ExprParser::Constant_valueContext *context) = 0;

    virtual std::any visitNumeric_value(ExprParser::Numeric_valueContext *context) = 0;

    virtual std::any visitLiteral_value(ExprParser::Literal_valueContext *context) = 0;

    virtual std::any visitLogical_value(ExprParser::Logical_valueContext *context) = 0;

    virtual std::any visitRelational_op(ExprParser::Relational_opContext *context) = 0;

    virtual std::any visitSign(ExprParser::SignContext *context) = 0;

    virtual std::any visitAdd_op(ExprParser::Add_opContext *context) = 0;

    virtual std::any visitMul_op(ExprParser::Mul_opContext *context) = 0;


};

}  // namespace antlr_generated
