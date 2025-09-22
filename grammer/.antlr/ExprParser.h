
// Generated from e:/Compiler/grammer/Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlr_generated {


class  ExprParser : public antlr4::Parser {
public:
  enum {
    PROGRAM = 1, CONST = 2, TYPE = 3, VARIABLE = 4, PROCEDURE = 5, LIST = 6, 
    FROM = 7, RECORD = 8, BY_VALUE = 9, BY_REFERENCE = 10, IF = 11, THEN = 12, 
    ELSE = 13, FOR = 14, TO = 15, STEP = 16, WHILE = 17, CONTINUE = 18, 
    REPEAT = 19, UNTIL = 20, READ = 21, PRINT = 22, TRUE = 23, FALSE = 24, 
    DT_INTEGER = 25, DT_REAL = 26, DT_LOGICAL = 27, DT_CHAR = 28, DT_STRING = 29, 
    L_PAREN = 30, R_PAREN = 31, L_SQUARE_BRACKET = 32, R_SQUARE_BRACKET = 33, 
    L_CURLY_BRACE = 34, R_CURLY_BRACE = 35, COMMA = 36, SEMICOLON = 37, 
    COLON = 38, DOT = 39, EQUALS = 40, PLUS = 41, MINUS = 42, MULT = 43, 
    DIV = 44, INT_DIV = 45, MOD = 46, POWER = 47, AND = 48, OR = 49, NOT = 50, 
    EQUALS_OP = 51, NOT_EQUALS_OP = 52, GTE = 53, LTE = 54, GT = 55, LT = 56, 
    ID = 57, REAL_NUMBER = 58, INTEGER = 59, STRING_LITERAL = 60, CHAR_LITERAL = 61, 
    WS = 62
  };

  enum {
    RuleProgram = 0, RuleBlock = 1, RuleDefinitions_part = 2, RuleConstants_definition = 3, 
    RuleConstant_def = 4, RuleTypes_definition = 5, RuleType_def = 6, RuleVariables_definition = 7, 
    RuleVariable_def = 8, RuleProcedures_definition = 9, RuleProcedure_def = 10, 
    RuleComposite_type = 11, RuleList_type = 12, RuleRecord_type = 13, RuleFields_list = 14, 
    RuleField_def = 15, RuleVariables_group = 16, RuleProcedure_header = 17, 
    RuleProcedure_block = 18, RuleFormal_params_list = 19, RuleParam_def = 20, 
    RuleData_type = 21, RuleInstructions_list = 22, RuleInstruction = 23, 
    RuleAssignment_statement = 24, RuleInput_statement = 25, RuleOutput_statement = 26, 
    RuleCall_statement = 27, RulePrint_list = 28, RulePrint_item = 29, RuleActual_params_list = 30, 
    RuleActual_param = 31, RuleConditional_statement = 32, RuleCondition = 33, 
    RuleLoop_statement = 34, RuleFor_loop_statement = 35, RuleIteration_range = 36, 
    RuleWhile_loop_statement = 37, RuleRepeat_until_statement = 38, RuleExpression = 39, 
    RuleSimple_expression = 40, RuleTerm = 41, RuleFactor = 42, RuleVariable_access = 43, 
    RuleSelector = 44, RuleIndexed_selector = 45, RuleField_selector = 46, 
    RuleConstant_value = 47, RuleNumeric_value = 48, RuleLiteral_value = 49, 
    RuleLogical_value = 50, RuleRelational_op = 51, RuleSign = 52, RuleAdd_op = 53, 
    RuleMul_op = 54
  };

  explicit ExprParser(antlr4::TokenStream *input);

  ExprParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExprParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class BlockContext;
  class Definitions_partContext;
  class Constants_definitionContext;
  class Constant_defContext;
  class Types_definitionContext;
  class Type_defContext;
  class Variables_definitionContext;
  class Variable_defContext;
  class Procedures_definitionContext;
  class Procedure_defContext;
  class Composite_typeContext;
  class List_typeContext;
  class Record_typeContext;
  class Fields_listContext;
  class Field_defContext;
  class Variables_groupContext;
  class Procedure_headerContext;
  class Procedure_blockContext;
  class Formal_params_listContext;
  class Param_defContext;
  class Data_typeContext;
  class Instructions_listContext;
  class InstructionContext;
  class Assignment_statementContext;
  class Input_statementContext;
  class Output_statementContext;
  class Call_statementContext;
  class Print_listContext;
  class Print_itemContext;
  class Actual_params_listContext;
  class Actual_paramContext;
  class Conditional_statementContext;
  class ConditionContext;
  class Loop_statementContext;
  class For_loop_statementContext;
  class Iteration_rangeContext;
  class While_loop_statementContext;
  class Repeat_until_statementContext;
  class ExpressionContext;
  class Simple_expressionContext;
  class TermContext;
  class FactorContext;
  class Variable_accessContext;
  class SelectorContext;
  class Indexed_selectorContext;
  class Field_selectorContext;
  class Constant_valueContext;
  class Numeric_valueContext;
  class Literal_valueContext;
  class Logical_valueContext;
  class Relational_opContext;
  class SignContext;
  class Add_opContext;
  class Mul_opContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMICOLON();
    BlockContext *block();
    antlr4::tree::TerminalNode *DOT();

   
  };

  ProgramContext* program();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Instructions_listContext *instructions_list();
    Definitions_partContext *definitions_part();

   
  };

  BlockContext* block();

  class  Definitions_partContext : public antlr4::ParserRuleContext {
  public:
    Definitions_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constants_definitionContext *constants_definition();
    Types_definitionContext *types_definition();
    Variables_definitionContext *variables_definition();
    Procedures_definitionContext *procedures_definition();

   
  };

  Definitions_partContext* definitions_part();

  class  Constants_definitionContext : public antlr4::ParserRuleContext {
  public:
    Constants_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    std::vector<Constant_defContext *> constant_def();
    Constant_defContext* constant_def(size_t i);

   
  };

  Constants_definitionContext* constants_definition();

  class  Constant_defContext : public antlr4::ParserRuleContext {
  public:
    Constant_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUALS();
    Constant_valueContext *constant_value();
    antlr4::tree::TerminalNode *SEMICOLON();

   
  };

  Constant_defContext* constant_def();

  class  Types_definitionContext : public antlr4::ParserRuleContext {
  public:
    Types_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    std::vector<Type_defContext *> type_def();
    Type_defContext* type_def(size_t i);

   
  };

  Types_definitionContext* types_definition();

  class  Type_defContext : public antlr4::ParserRuleContext {
  public:
    Type_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUALS();
    Composite_typeContext *composite_type();
    antlr4::tree::TerminalNode *SEMICOLON();

   
  };

  Type_defContext* type_def();

  class  Variables_definitionContext : public antlr4::ParserRuleContext {
  public:
    Variables_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    std::vector<Variable_defContext *> variable_def();
    Variable_defContext* variable_def(size_t i);

   
  };

  Variables_definitionContext* variables_definition();

  class  Variable_defContext : public antlr4::ParserRuleContext {
  public:
    Variable_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variables_groupContext *variables_group();
    antlr4::tree::TerminalNode *SEMICOLON();

   
  };

  Variable_defContext* variable_def();

  class  Procedures_definitionContext : public antlr4::ParserRuleContext {
  public:
    Procedures_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Procedure_defContext *> procedure_def();
    Procedure_defContext* procedure_def(size_t i);

   
  };

  Procedures_definitionContext* procedures_definition();

  class  Procedure_defContext : public antlr4::ParserRuleContext {
  public:
    Procedure_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_headerContext *procedure_header();
    Procedure_blockContext *procedure_block();
    antlr4::tree::TerminalNode *SEMICOLON();

   
  };

  Procedure_defContext* procedure_def();

  class  Composite_typeContext : public antlr4::ParserRuleContext {
  public:
    Composite_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_typeContext *list_type();
    Record_typeContext *record_type();

   
  };

  Composite_typeContext* composite_type();

  class  List_typeContext : public antlr4::ParserRuleContext {
  public:
    List_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *L_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *R_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *FROM();
    Data_typeContext *data_type();

   
  };

  List_typeContext* list_type();

  class  Record_typeContext : public antlr4::ParserRuleContext {
  public:
    Record_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *L_CURLY_BRACE();
    Fields_listContext *fields_list();
    antlr4::tree::TerminalNode *R_CURLY_BRACE();

   
  };

  Record_typeContext* record_type();

  class  Fields_listContext : public antlr4::ParserRuleContext {
  public:
    Fields_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_defContext *> field_def();
    Field_defContext* field_def(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

   
  };

  Fields_listContext* fields_list();

  class  Field_defContext : public antlr4::ParserRuleContext {
  public:
    Field_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Data_typeContext *data_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Field_defContext* field_def();

  class  Variables_groupContext : public antlr4::ParserRuleContext {
  public:
    Variables_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Data_typeContext *data_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Variables_groupContext* variables_group();

  class  Procedure_headerContext : public antlr4::ParserRuleContext {
  public:
    Procedure_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *L_PAREN();
    antlr4::tree::TerminalNode *R_PAREN();
    antlr4::tree::TerminalNode *SEMICOLON();
    Formal_params_listContext *formal_params_list();

   
  };

  Procedure_headerContext* procedure_header();

  class  Procedure_blockContext : public antlr4::ParserRuleContext {
  public:
    Procedure_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();

   
  };

  Procedure_blockContext* procedure_block();

  class  Formal_params_listContext : public antlr4::ParserRuleContext {
  public:
    Formal_params_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_defContext *> param_def();
    Param_defContext* param_def(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

   
  };

  Formal_params_listContext* formal_params_list();

  class  Param_defContext : public antlr4::ParserRuleContext {
  public:
    Param_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variables_groupContext *variables_group();
    antlr4::tree::TerminalNode *BY_VALUE();
    antlr4::tree::TerminalNode *BY_REFERENCE();

   
  };

  Param_defContext* param_def();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT_INTEGER();
    antlr4::tree::TerminalNode *DT_REAL();
    antlr4::tree::TerminalNode *DT_LOGICAL();
    antlr4::tree::TerminalNode *DT_CHAR();
    antlr4::tree::TerminalNode *DT_STRING();
    antlr4::tree::TerminalNode *ID();

   
  };

  Data_typeContext* data_type();

  class  Instructions_listContext : public antlr4::ParserRuleContext {
  public:
    Instructions_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_CURLY_BRACE();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    antlr4::tree::TerminalNode *R_CURLY_BRACE();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

   
  };

  Instructions_listContext* instructions_list();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_statementContext *assignment_statement();
    Input_statementContext *input_statement();
    Output_statementContext *output_statement();
    Call_statementContext *call_statement();
    Conditional_statementContext *conditional_statement();
    Loop_statementContext *loop_statement();
    Instructions_listContext *instructions_list();

   
  };

  InstructionContext* instruction();

  class  Assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_accessContext *variable_access();
    antlr4::tree::TerminalNode *EQUALS();
    ExpressionContext *expression();

   
  };

  Assignment_statementContext* assignment_statement();

  class  Input_statementContext : public antlr4::ParserRuleContext {
  public:
    Input_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *L_PAREN();
    Variable_accessContext *variable_access();
    antlr4::tree::TerminalNode *R_PAREN();

   
  };

  Input_statementContext* input_statement();

  class  Output_statementContext : public antlr4::ParserRuleContext {
  public:
    Output_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *L_PAREN();
    Print_listContext *print_list();
    antlr4::tree::TerminalNode *R_PAREN();

   
  };

  Output_statementContext* output_statement();

  class  Call_statementContext : public antlr4::ParserRuleContext {
  public:
    Call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *L_PAREN();
    antlr4::tree::TerminalNode *R_PAREN();
    Actual_params_listContext *actual_params_list();

   
  };

  Call_statementContext* call_statement();

  class  Print_listContext : public antlr4::ParserRuleContext {
  public:
    Print_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Print_itemContext *> print_item();
    Print_itemContext* print_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Print_listContext* print_list();

  class  Print_itemContext : public antlr4::ParserRuleContext {
  public:
    Print_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_accessContext *variable_access();
    Literal_valueContext *literal_value();

   
  };

  Print_itemContext* print_item();

  class  Actual_params_listContext : public antlr4::ParserRuleContext {
  public:
    Actual_params_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Actual_paramContext *> actual_param();
    Actual_paramContext* actual_param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Actual_params_listContext* actual_params_list();

  class  Actual_paramContext : public antlr4::ParserRuleContext {
  public:
    Actual_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Variable_accessContext *variable_access();

   
  };

  Actual_paramContext* actual_param();

  class  Conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_PAREN();
    antlr4::tree::TerminalNode* L_PAREN(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> R_PAREN();
    antlr4::tree::TerminalNode* R_PAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

   
  };

  Conditional_statementContext* conditional_statement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

   
  };

  ConditionContext* condition();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_loop_statementContext *for_loop_statement();
    While_loop_statementContext *while_loop_statement();
    Repeat_until_statementContext *repeat_until_statement();

   
  };

  Loop_statementContext* loop_statement();

  class  For_loop_statementContext : public antlr4::ParserRuleContext {
  public:
    For_loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *L_PAREN();
    Iteration_rangeContext *iteration_range();
    antlr4::tree::TerminalNode *R_PAREN();
    InstructionContext *instruction();

   
  };

  For_loop_statementContext* for_loop_statement();

  class  Iteration_rangeContext : public antlr4::ParserRuleContext {
  public:
    Iteration_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUALS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STEP();

   
  };

  Iteration_rangeContext* iteration_range();

  class  While_loop_statementContext : public antlr4::ParserRuleContext {
  public:
    While_loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *L_PAREN();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *R_PAREN();
    antlr4::tree::TerminalNode *CONTINUE();
    InstructionContext *instruction();

   
  };

  While_loop_statementContext* while_loop_statement();

  class  Repeat_until_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_until_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    InstructionContext *instruction();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *L_PAREN();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *R_PAREN();

   
  };

  Repeat_until_statementContext* repeat_until_statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    Relational_opContext *relational_op();

   
  };

  ExpressionContext* expression();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    SignContext *sign();
    std::vector<Add_opContext *> add_op();
    Add_opContext* add_op(size_t i);

   
  };

  Simple_expressionContext* simple_expression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Mul_opContext *> mul_op();
    Mul_opContext* mul_op(size_t i);

   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_valueContext *constant_value();
    Variable_accessContext *variable_access();
    antlr4::tree::TerminalNode *L_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *R_PAREN();
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

   
  };

  FactorContext* factor();

  class  Variable_accessContext : public antlr4::ParserRuleContext {
  public:
    Variable_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    SelectorContext *selector();

   
  };

  Variable_accessContext* variable_access();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Indexed_selectorContext *indexed_selector();
    Field_selectorContext *field_selector();

   
  };

  SelectorContext* selector();

  class  Indexed_selectorContext : public antlr4::ParserRuleContext {
  public:
    Indexed_selectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_SQUARE_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *R_SQUARE_BRACKET();

   
  };

  Indexed_selectorContext* indexed_selector();

  class  Field_selectorContext : public antlr4::ParserRuleContext {
  public:
    Field_selectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ID();

   
  };

  Field_selectorContext* field_selector();

  class  Constant_valueContext : public antlr4::ParserRuleContext {
  public:
    Constant_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Numeric_valueContext *numeric_value();
    Literal_valueContext *literal_value();
    Logical_valueContext *logical_value();
    antlr4::tree::TerminalNode *ID();

   
  };

  Constant_valueContext* constant_value();

  class  Numeric_valueContext : public antlr4::ParserRuleContext {
  public:
    Numeric_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL_NUMBER();
    antlr4::tree::TerminalNode *INTEGER();

   
  };

  Numeric_valueContext* numeric_value();

  class  Literal_valueContext : public antlr4::ParserRuleContext {
  public:
    Literal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHAR_LITERAL();

   
  };

  Literal_valueContext* literal_value();

  class  Logical_valueContext : public antlr4::ParserRuleContext {
  public:
    Logical_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

   
  };

  Logical_valueContext* logical_value();

  class  Relational_opContext : public antlr4::ParserRuleContext {
  public:
    Relational_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *NOT_EQUALS_OP();

   
  };

  Relational_opContext* relational_op();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

   
  };

  SignContext* sign();

  class  Add_opContext : public antlr4::ParserRuleContext {
  public:
    Add_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *OR();

   
  };

  Add_opContext* add_op();

  class  Mul_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *INT_DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *AND();

   
  };

  Mul_opContext* mul_op();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlr_generated
