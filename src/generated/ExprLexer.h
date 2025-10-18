
// Generated from /workspace/grammer/Expr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace antlr_generated {


class  ExprLexer : public antlr4::Lexer {
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

  explicit ExprLexer(antlr4::CharStream *input);

  ~ExprLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlr_generated
