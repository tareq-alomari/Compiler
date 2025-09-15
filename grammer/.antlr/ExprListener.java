// Generated from e:/lect4/grammer/Expr.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ExprParser}.
 */
public interface ExprListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ExprParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(ExprParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(ExprParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(ExprParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(ExprParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#definitions_part}.
	 * @param ctx the parse tree
	 */
	void enterDefinitions_part(ExprParser.Definitions_partContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#definitions_part}.
	 * @param ctx the parse tree
	 */
	void exitDefinitions_part(ExprParser.Definitions_partContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#constants_definition}.
	 * @param ctx the parse tree
	 */
	void enterConstants_definition(ExprParser.Constants_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#constants_definition}.
	 * @param ctx the parse tree
	 */
	void exitConstants_definition(ExprParser.Constants_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#constant_def}.
	 * @param ctx the parse tree
	 */
	void enterConstant_def(ExprParser.Constant_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#constant_def}.
	 * @param ctx the parse tree
	 */
	void exitConstant_def(ExprParser.Constant_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#types_definition}.
	 * @param ctx the parse tree
	 */
	void enterTypes_definition(ExprParser.Types_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#types_definition}.
	 * @param ctx the parse tree
	 */
	void exitTypes_definition(ExprParser.Types_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#type_def}.
	 * @param ctx the parse tree
	 */
	void enterType_def(ExprParser.Type_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#type_def}.
	 * @param ctx the parse tree
	 */
	void exitType_def(ExprParser.Type_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#variables_definition}.
	 * @param ctx the parse tree
	 */
	void enterVariables_definition(ExprParser.Variables_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#variables_definition}.
	 * @param ctx the parse tree
	 */
	void exitVariables_definition(ExprParser.Variables_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#variable_def}.
	 * @param ctx the parse tree
	 */
	void enterVariable_def(ExprParser.Variable_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#variable_def}.
	 * @param ctx the parse tree
	 */
	void exitVariable_def(ExprParser.Variable_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#procedures_definition}.
	 * @param ctx the parse tree
	 */
	void enterProcedures_definition(ExprParser.Procedures_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#procedures_definition}.
	 * @param ctx the parse tree
	 */
	void exitProcedures_definition(ExprParser.Procedures_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#procedure_def}.
	 * @param ctx the parse tree
	 */
	void enterProcedure_def(ExprParser.Procedure_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#procedure_def}.
	 * @param ctx the parse tree
	 */
	void exitProcedure_def(ExprParser.Procedure_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#composite_type}.
	 * @param ctx the parse tree
	 */
	void enterComposite_type(ExprParser.Composite_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#composite_type}.
	 * @param ctx the parse tree
	 */
	void exitComposite_type(ExprParser.Composite_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#list_type}.
	 * @param ctx the parse tree
	 */
	void enterList_type(ExprParser.List_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#list_type}.
	 * @param ctx the parse tree
	 */
	void exitList_type(ExprParser.List_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#record_type}.
	 * @param ctx the parse tree
	 */
	void enterRecord_type(ExprParser.Record_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#record_type}.
	 * @param ctx the parse tree
	 */
	void exitRecord_type(ExprParser.Record_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#fields_list}.
	 * @param ctx the parse tree
	 */
	void enterFields_list(ExprParser.Fields_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#fields_list}.
	 * @param ctx the parse tree
	 */
	void exitFields_list(ExprParser.Fields_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#field_def}.
	 * @param ctx the parse tree
	 */
	void enterField_def(ExprParser.Field_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#field_def}.
	 * @param ctx the parse tree
	 */
	void exitField_def(ExprParser.Field_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#variables_group}.
	 * @param ctx the parse tree
	 */
	void enterVariables_group(ExprParser.Variables_groupContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#variables_group}.
	 * @param ctx the parse tree
	 */
	void exitVariables_group(ExprParser.Variables_groupContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#procedure_header}.
	 * @param ctx the parse tree
	 */
	void enterProcedure_header(ExprParser.Procedure_headerContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#procedure_header}.
	 * @param ctx the parse tree
	 */
	void exitProcedure_header(ExprParser.Procedure_headerContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#procedure_block}.
	 * @param ctx the parse tree
	 */
	void enterProcedure_block(ExprParser.Procedure_blockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#procedure_block}.
	 * @param ctx the parse tree
	 */
	void exitProcedure_block(ExprParser.Procedure_blockContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#formal_params_list}.
	 * @param ctx the parse tree
	 */
	void enterFormal_params_list(ExprParser.Formal_params_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#formal_params_list}.
	 * @param ctx the parse tree
	 */
	void exitFormal_params_list(ExprParser.Formal_params_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#param_def}.
	 * @param ctx the parse tree
	 */
	void enterParam_def(ExprParser.Param_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#param_def}.
	 * @param ctx the parse tree
	 */
	void exitParam_def(ExprParser.Param_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#data_type}.
	 * @param ctx the parse tree
	 */
	void enterData_type(ExprParser.Data_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#data_type}.
	 * @param ctx the parse tree
	 */
	void exitData_type(ExprParser.Data_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#instructions_list}.
	 * @param ctx the parse tree
	 */
	void enterInstructions_list(ExprParser.Instructions_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#instructions_list}.
	 * @param ctx the parse tree
	 */
	void exitInstructions_list(ExprParser.Instructions_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterInstruction(ExprParser.InstructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitInstruction(ExprParser.InstructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#assignment_statement}.
	 * @param ctx the parse tree
	 */
	void enterAssignment_statement(ExprParser.Assignment_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#assignment_statement}.
	 * @param ctx the parse tree
	 */
	void exitAssignment_statement(ExprParser.Assignment_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#input_statement}.
	 * @param ctx the parse tree
	 */
	void enterInput_statement(ExprParser.Input_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#input_statement}.
	 * @param ctx the parse tree
	 */
	void exitInput_statement(ExprParser.Input_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#output_statement}.
	 * @param ctx the parse tree
	 */
	void enterOutput_statement(ExprParser.Output_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#output_statement}.
	 * @param ctx the parse tree
	 */
	void exitOutput_statement(ExprParser.Output_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#call_statement}.
	 * @param ctx the parse tree
	 */
	void enterCall_statement(ExprParser.Call_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#call_statement}.
	 * @param ctx the parse tree
	 */
	void exitCall_statement(ExprParser.Call_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#print_list}.
	 * @param ctx the parse tree
	 */
	void enterPrint_list(ExprParser.Print_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#print_list}.
	 * @param ctx the parse tree
	 */
	void exitPrint_list(ExprParser.Print_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#print_item}.
	 * @param ctx the parse tree
	 */
	void enterPrint_item(ExprParser.Print_itemContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#print_item}.
	 * @param ctx the parse tree
	 */
	void exitPrint_item(ExprParser.Print_itemContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#actual_params_list}.
	 * @param ctx the parse tree
	 */
	void enterActual_params_list(ExprParser.Actual_params_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#actual_params_list}.
	 * @param ctx the parse tree
	 */
	void exitActual_params_list(ExprParser.Actual_params_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#actual_param}.
	 * @param ctx the parse tree
	 */
	void enterActual_param(ExprParser.Actual_paramContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#actual_param}.
	 * @param ctx the parse tree
	 */
	void exitActual_param(ExprParser.Actual_paramContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#conditional_statement}.
	 * @param ctx the parse tree
	 */
	void enterConditional_statement(ExprParser.Conditional_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#conditional_statement}.
	 * @param ctx the parse tree
	 */
	void exitConditional_statement(ExprParser.Conditional_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(ExprParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(ExprParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterLoop_statement(ExprParser.Loop_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitLoop_statement(ExprParser.Loop_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#for_loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterFor_loop_statement(ExprParser.For_loop_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#for_loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitFor_loop_statement(ExprParser.For_loop_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#iteration_range}.
	 * @param ctx the parse tree
	 */
	void enterIteration_range(ExprParser.Iteration_rangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#iteration_range}.
	 * @param ctx the parse tree
	 */
	void exitIteration_range(ExprParser.Iteration_rangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#while_loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterWhile_loop_statement(ExprParser.While_loop_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#while_loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitWhile_loop_statement(ExprParser.While_loop_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#repeat_until_statement}.
	 * @param ctx the parse tree
	 */
	void enterRepeat_until_statement(ExprParser.Repeat_until_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#repeat_until_statement}.
	 * @param ctx the parse tree
	 */
	void exitRepeat_until_statement(ExprParser.Repeat_until_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(ExprParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(ExprParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void enterSimple_expression(ExprParser.Simple_expressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void exitSimple_expression(ExprParser.Simple_expressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(ExprParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(ExprParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(ExprParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(ExprParser.FactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#variable_access}.
	 * @param ctx the parse tree
	 */
	void enterVariable_access(ExprParser.Variable_accessContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#variable_access}.
	 * @param ctx the parse tree
	 */
	void exitVariable_access(ExprParser.Variable_accessContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#selector}.
	 * @param ctx the parse tree
	 */
	void enterSelector(ExprParser.SelectorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#selector}.
	 * @param ctx the parse tree
	 */
	void exitSelector(ExprParser.SelectorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#indexed_selector}.
	 * @param ctx the parse tree
	 */
	void enterIndexed_selector(ExprParser.Indexed_selectorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#indexed_selector}.
	 * @param ctx the parse tree
	 */
	void exitIndexed_selector(ExprParser.Indexed_selectorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#field_selector}.
	 * @param ctx the parse tree
	 */
	void enterField_selector(ExprParser.Field_selectorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#field_selector}.
	 * @param ctx the parse tree
	 */
	void exitField_selector(ExprParser.Field_selectorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#constant_value}.
	 * @param ctx the parse tree
	 */
	void enterConstant_value(ExprParser.Constant_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#constant_value}.
	 * @param ctx the parse tree
	 */
	void exitConstant_value(ExprParser.Constant_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#numeric_value}.
	 * @param ctx the parse tree
	 */
	void enterNumeric_value(ExprParser.Numeric_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#numeric_value}.
	 * @param ctx the parse tree
	 */
	void exitNumeric_value(ExprParser.Numeric_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#literal_value}.
	 * @param ctx the parse tree
	 */
	void enterLiteral_value(ExprParser.Literal_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#literal_value}.
	 * @param ctx the parse tree
	 */
	void exitLiteral_value(ExprParser.Literal_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#logical_value}.
	 * @param ctx the parse tree
	 */
	void enterLogical_value(ExprParser.Logical_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#logical_value}.
	 * @param ctx the parse tree
	 */
	void exitLogical_value(ExprParser.Logical_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#relational_op}.
	 * @param ctx the parse tree
	 */
	void enterRelational_op(ExprParser.Relational_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#relational_op}.
	 * @param ctx the parse tree
	 */
	void exitRelational_op(ExprParser.Relational_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#sign}.
	 * @param ctx the parse tree
	 */
	void enterSign(ExprParser.SignContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#sign}.
	 * @param ctx the parse tree
	 */
	void exitSign(ExprParser.SignContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#add_op}.
	 * @param ctx the parse tree
	 */
	void enterAdd_op(ExprParser.Add_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#add_op}.
	 * @param ctx the parse tree
	 */
	void exitAdd_op(ExprParser.Add_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#mul_op}.
	 * @param ctx the parse tree
	 */
	void enterMul_op(ExprParser.Mul_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#mul_op}.
	 * @param ctx the parse tree
	 */
	void exitMul_op(ExprParser.Mul_opContext ctx);
}