
// Generated from e:/Compiler/grammer/Expr.g4 by ANTLR 4.13.1



#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr_generated;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "program", "block", "definitions_part", "constants_definition", "constant_def", 
      "types_definition", "type_def", "variables_definition", "variable_def", 
      "procedures_definition", "procedure_def", "composite_type", "list_type", 
      "record_type", "fields_list", "field_def", "variables_group", "procedure_header", 
      "procedure_block", "formal_params_list", "param_def", "data_type", 
      "instructions_list", "instruction", "assignment_statement", "input_statement", 
      "output_statement", "call_statement", "print_list", "print_item", 
      "actual_params_list", "actual_param", "conditional_statement", "condition", 
      "loop_statement", "for_loop_statement", "iteration_range", "while_loop_statement", 
      "repeat_until_statement", "expression", "simple_expression", "term", 
      "factor", "variable_access", "selector", "indexed_selector", "field_selector", 
      "constant_value", "numeric_value", "literal_value", "logical_value", 
      "relational_op", "sign", "add_op", "mul_op"
    },
    std::vector<std::string>{
      "", "'\\u0628\\u0631\\u0646\\u0627\\u0645\\u062C'", "'\\u062B\\u0627\\u0628\\u062A'", 
      "'\\u0646\\u0648\\u0639'", "'\\u0645\\u062A\\u063A\\u064A\\u0631'", 
      "'\\u0627\\u062C\\u0631\\u0627\\u0621'", "'\\u0642\\u0627\\u0626\\u0645\\u0629'", 
      "'\\u0645\\u0646'", "'\\u0633\\u062C\\u0644'", "'\\u0628\\u0627\\u0644\\u0642\\u064A\\u0645\\u0629'", 
      "'\\u0628\\u0627\\u0644\\u0645\\u0631\\u062C\\u0639'", "'\\u0627\\u0630\\u0627'", 
      "'\\u0641\\u0627\\u0646'", "'\\u0648\\u0627\\u0644\\u0627'", "'\\u0643\\u0631\\u0631'", 
      "'\\u0627\\u0644\\u0649'", "'\\u0627\\u0636\\u0641'", "'\\u0637\\u0627\\u0644\\u0645\\u0627'", 
      "'\\u0627\\u0633\\u062A\\u0645\\u0631'", "'\\u0627\\u0639\\u062F'", 
      "'\\u062D\\u062A\\u0649'", "'\\u0627\\u0642\\u0631\\u0627'", "'\\u0627\\u0637\\u0628\\u0639'", 
      "'\\u0635\\u062D'", "'\\u062E\\u0637\\u0623'", "'\\u0635\\u062D\\u064A\\u062D'", 
      "'\\u062D\\u0642\\u064A\\u0642\\u064A'", "'\\u0645\\u0646\\u0637\\u0642\\u064A'", 
      "'\\u062D\\u0631\\u0641\\u064A'", "'\\u062E\\u064A\\u0637_\\u0631\\u0645\\u0632\\u064A'", 
      "'('", "')'", "'['", "']'", "'{'", "'}'", "'\\u060C'", "'\\u061B'", 
      "':'", "'.'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\'", "'%'", "'^'", 
      "'&&'", "'||'", "'!'", "'=='", "'=!'", "'>='", "'<='", "'>'", "'<'"
    },
    std::vector<std::string>{
      "", "PROGRAM", "CONST", "TYPE", "VARIABLE", "PROCEDURE", "LIST", "FROM", 
      "RECORD", "BY_VALUE", "BY_REFERENCE", "IF", "THEN", "ELSE", "FOR", 
      "TO", "STEP", "WHILE", "CONTINUE", "REPEAT", "UNTIL", "READ", "PRINT", 
      "TRUE", "FALSE", "DT_INTEGER", "DT_REAL", "DT_LOGICAL", "DT_CHAR", 
      "DT_STRING", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", 
      "L_CURLY_BRACE", "R_CURLY_BRACE", "COMMA", "SEMICOLON", "COLON", "DOT", 
      "EQUALS", "PLUS", "MINUS", "MULT", "DIV", "INT_DIV", "MOD", "POWER", 
      "AND", "OR", "NOT", "EQUALS_OP", "NOT_EQUALS_OP", "GTE", "LTE", "GT", 
      "LT", "ID", "REAL_NUMBER", "INTEGER", "STRING_LITERAL", "CHAR_LITERAL", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,62,443,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,1,3,1,118,8,1,1,1,1,1,1,2,3,2,123,8,2,1,2,3,2,126,8,2,1,2,3,
  	2,129,8,2,1,2,3,2,132,8,2,1,3,1,3,4,3,136,8,3,11,3,12,3,137,1,4,1,4,1,
  	4,1,4,1,4,1,5,1,5,4,5,147,8,5,11,5,12,5,148,1,6,1,6,1,6,1,6,1,6,1,7,1,
  	7,4,7,158,8,7,11,7,12,7,159,1,8,1,8,1,8,1,9,4,9,166,8,9,11,9,12,9,167,
  	1,10,1,10,1,10,1,10,1,11,1,11,3,11,176,8,11,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,5,14,193,8,14,10,14,
  	12,14,196,9,14,1,15,1,15,1,15,5,15,201,8,15,10,15,12,15,204,9,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,5,16,212,8,16,10,16,12,16,215,9,16,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,17,3,17,224,8,17,1,17,1,17,1,17,1,18,1,18,1,19,
  	1,19,1,19,5,19,234,8,19,10,19,12,19,237,9,19,1,20,3,20,240,8,20,1,20,
  	1,20,1,21,1,21,1,22,1,22,1,22,1,22,5,22,250,8,22,10,22,12,22,253,9,22,
  	1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,265,8,23,1,24,
  	1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,
  	1,27,1,27,3,27,284,8,27,1,27,1,27,1,28,1,28,1,28,5,28,291,8,28,10,28,
  	12,28,294,9,28,1,29,1,29,3,29,298,8,29,1,30,1,30,1,30,5,30,303,8,30,10,
  	30,12,30,306,9,30,1,31,1,31,3,31,310,8,31,1,32,1,32,1,32,1,32,1,32,1,
  	32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,5,32,326,8,32,10,32,12,32,
  	329,9,32,1,32,1,32,3,32,333,8,32,1,33,1,33,1,34,1,34,1,34,3,34,340,8,
  	34,1,35,1,35,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,36,1,36,3,
  	36,355,8,36,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,39,1,39,1,39,1,39,3,39,375,8,39,1,40,3,40,378,8,40,1,40,
  	1,40,1,40,1,40,5,40,384,8,40,10,40,12,40,387,9,40,1,41,1,41,1,41,1,41,
  	5,41,393,8,41,10,41,12,41,396,9,41,1,42,1,42,1,42,1,42,1,42,1,42,1,42,
  	1,42,3,42,406,8,42,1,43,1,43,3,43,410,8,43,1,44,1,44,3,44,414,8,44,1,
  	45,1,45,1,45,1,45,1,46,1,46,1,46,1,47,1,47,1,47,1,47,3,47,427,8,47,1,
  	48,1,48,1,49,1,49,1,50,1,50,1,51,1,51,1,52,1,52,1,53,1,53,1,54,1,54,1,
  	54,0,0,55,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,
  	90,92,94,96,98,100,102,104,106,108,0,9,1,0,9,10,2,0,25,29,57,57,1,0,58,
  	59,1,0,60,61,1,0,23,24,1,0,51,56,1,0,41,42,2,0,41,42,49,49,2,0,43,46,
  	48,48,433,0,110,1,0,0,0,2,117,1,0,0,0,4,122,1,0,0,0,6,133,1,0,0,0,8,139,
  	1,0,0,0,10,144,1,0,0,0,12,150,1,0,0,0,14,155,1,0,0,0,16,161,1,0,0,0,18,
  	165,1,0,0,0,20,169,1,0,0,0,22,175,1,0,0,0,24,177,1,0,0,0,26,184,1,0,0,
  	0,28,189,1,0,0,0,30,197,1,0,0,0,32,208,1,0,0,0,34,219,1,0,0,0,36,228,
  	1,0,0,0,38,230,1,0,0,0,40,239,1,0,0,0,42,243,1,0,0,0,44,245,1,0,0,0,46,
  	264,1,0,0,0,48,266,1,0,0,0,50,270,1,0,0,0,52,275,1,0,0,0,54,280,1,0,0,
  	0,56,287,1,0,0,0,58,297,1,0,0,0,60,299,1,0,0,0,62,309,1,0,0,0,64,311,
  	1,0,0,0,66,334,1,0,0,0,68,339,1,0,0,0,70,341,1,0,0,0,72,347,1,0,0,0,74,
  	356,1,0,0,0,76,363,1,0,0,0,78,370,1,0,0,0,80,377,1,0,0,0,82,388,1,0,0,
  	0,84,405,1,0,0,0,86,407,1,0,0,0,88,413,1,0,0,0,90,415,1,0,0,0,92,419,
  	1,0,0,0,94,426,1,0,0,0,96,428,1,0,0,0,98,430,1,0,0,0,100,432,1,0,0,0,
  	102,434,1,0,0,0,104,436,1,0,0,0,106,438,1,0,0,0,108,440,1,0,0,0,110,111,
  	5,1,0,0,111,112,5,57,0,0,112,113,5,37,0,0,113,114,3,2,1,0,114,115,5,39,
  	0,0,115,1,1,0,0,0,116,118,3,4,2,0,117,116,1,0,0,0,117,118,1,0,0,0,118,
  	119,1,0,0,0,119,120,3,44,22,0,120,3,1,0,0,0,121,123,3,6,3,0,122,121,1,
  	0,0,0,122,123,1,0,0,0,123,125,1,0,0,0,124,126,3,10,5,0,125,124,1,0,0,
  	0,125,126,1,0,0,0,126,128,1,0,0,0,127,129,3,14,7,0,128,127,1,0,0,0,128,
  	129,1,0,0,0,129,131,1,0,0,0,130,132,3,18,9,0,131,130,1,0,0,0,131,132,
  	1,0,0,0,132,5,1,0,0,0,133,135,5,2,0,0,134,136,3,8,4,0,135,134,1,0,0,0,
  	136,137,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,7,1,0,0,0,139,140,
  	5,57,0,0,140,141,5,40,0,0,141,142,3,94,47,0,142,143,5,37,0,0,143,9,1,
  	0,0,0,144,146,5,3,0,0,145,147,3,12,6,0,146,145,1,0,0,0,147,148,1,0,0,
  	0,148,146,1,0,0,0,148,149,1,0,0,0,149,11,1,0,0,0,150,151,5,57,0,0,151,
  	152,5,40,0,0,152,153,3,22,11,0,153,154,5,37,0,0,154,13,1,0,0,0,155,157,
  	5,4,0,0,156,158,3,16,8,0,157,156,1,0,0,0,158,159,1,0,0,0,159,157,1,0,
  	0,0,159,160,1,0,0,0,160,15,1,0,0,0,161,162,3,32,16,0,162,163,5,37,0,0,
  	163,17,1,0,0,0,164,166,3,20,10,0,165,164,1,0,0,0,166,167,1,0,0,0,167,
  	165,1,0,0,0,167,168,1,0,0,0,168,19,1,0,0,0,169,170,3,34,17,0,170,171,
  	3,36,18,0,171,172,5,37,0,0,172,21,1,0,0,0,173,176,3,24,12,0,174,176,3,
  	26,13,0,175,173,1,0,0,0,175,174,1,0,0,0,176,23,1,0,0,0,177,178,5,6,0,
  	0,178,179,5,32,0,0,179,180,5,59,0,0,180,181,5,33,0,0,181,182,5,7,0,0,
  	182,183,3,42,21,0,183,25,1,0,0,0,184,185,5,8,0,0,185,186,5,34,0,0,186,
  	187,3,28,14,0,187,188,5,35,0,0,188,27,1,0,0,0,189,194,3,30,15,0,190,191,
  	5,37,0,0,191,193,3,30,15,0,192,190,1,0,0,0,193,196,1,0,0,0,194,192,1,
  	0,0,0,194,195,1,0,0,0,195,29,1,0,0,0,196,194,1,0,0,0,197,202,5,57,0,0,
  	198,199,5,36,0,0,199,201,5,57,0,0,200,198,1,0,0,0,201,204,1,0,0,0,202,
  	200,1,0,0,0,202,203,1,0,0,0,203,205,1,0,0,0,204,202,1,0,0,0,205,206,5,
  	38,0,0,206,207,3,42,21,0,207,31,1,0,0,0,208,213,5,57,0,0,209,210,5,36,
  	0,0,210,212,5,57,0,0,211,209,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,
  	213,214,1,0,0,0,214,216,1,0,0,0,215,213,1,0,0,0,216,217,5,38,0,0,217,
  	218,3,42,21,0,218,33,1,0,0,0,219,220,5,5,0,0,220,221,5,57,0,0,221,223,
  	5,30,0,0,222,224,3,38,19,0,223,222,1,0,0,0,223,224,1,0,0,0,224,225,1,
  	0,0,0,225,226,5,31,0,0,226,227,5,37,0,0,227,35,1,0,0,0,228,229,3,2,1,
  	0,229,37,1,0,0,0,230,235,3,40,20,0,231,232,5,37,0,0,232,234,3,40,20,0,
  	233,231,1,0,0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,39,
  	1,0,0,0,237,235,1,0,0,0,238,240,7,0,0,0,239,238,1,0,0,0,239,240,1,0,0,
  	0,240,241,1,0,0,0,241,242,3,32,16,0,242,41,1,0,0,0,243,244,7,1,0,0,244,
  	43,1,0,0,0,245,246,5,34,0,0,246,251,3,46,23,0,247,248,5,37,0,0,248,250,
  	3,46,23,0,249,247,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,
  	0,0,252,254,1,0,0,0,253,251,1,0,0,0,254,255,5,35,0,0,255,45,1,0,0,0,256,
  	265,3,48,24,0,257,265,3,50,25,0,258,265,3,52,26,0,259,265,3,54,27,0,260,
  	265,3,64,32,0,261,265,3,68,34,0,262,265,3,44,22,0,263,265,1,0,0,0,264,
  	256,1,0,0,0,264,257,1,0,0,0,264,258,1,0,0,0,264,259,1,0,0,0,264,260,1,
  	0,0,0,264,261,1,0,0,0,264,262,1,0,0,0,264,263,1,0,0,0,265,47,1,0,0,0,
  	266,267,3,86,43,0,267,268,5,40,0,0,268,269,3,78,39,0,269,49,1,0,0,0,270,
  	271,5,21,0,0,271,272,5,30,0,0,272,273,3,86,43,0,273,274,5,31,0,0,274,
  	51,1,0,0,0,275,276,5,22,0,0,276,277,5,30,0,0,277,278,3,56,28,0,278,279,
  	5,31,0,0,279,53,1,0,0,0,280,281,5,57,0,0,281,283,5,30,0,0,282,284,3,60,
  	30,0,283,282,1,0,0,0,283,284,1,0,0,0,284,285,1,0,0,0,285,286,5,31,0,0,
  	286,55,1,0,0,0,287,292,3,58,29,0,288,289,5,36,0,0,289,291,3,58,29,0,290,
  	288,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,293,57,1,
  	0,0,0,294,292,1,0,0,0,295,298,3,86,43,0,296,298,3,98,49,0,297,295,1,0,
  	0,0,297,296,1,0,0,0,298,59,1,0,0,0,299,304,3,62,31,0,300,301,5,36,0,0,
  	301,303,3,62,31,0,302,300,1,0,0,0,303,306,1,0,0,0,304,302,1,0,0,0,304,
  	305,1,0,0,0,305,61,1,0,0,0,306,304,1,0,0,0,307,310,3,78,39,0,308,310,
  	3,86,43,0,309,307,1,0,0,0,309,308,1,0,0,0,310,63,1,0,0,0,311,312,5,11,
  	0,0,312,313,5,30,0,0,313,314,3,66,33,0,314,315,5,31,0,0,315,316,5,12,
  	0,0,316,327,3,46,23,0,317,318,5,13,0,0,318,319,5,11,0,0,319,320,5,30,
  	0,0,320,321,3,66,33,0,321,322,5,31,0,0,322,323,5,12,0,0,323,324,3,46,
  	23,0,324,326,1,0,0,0,325,317,1,0,0,0,326,329,1,0,0,0,327,325,1,0,0,0,
  	327,328,1,0,0,0,328,332,1,0,0,0,329,327,1,0,0,0,330,331,5,13,0,0,331,
  	333,3,46,23,0,332,330,1,0,0,0,332,333,1,0,0,0,333,65,1,0,0,0,334,335,
  	3,78,39,0,335,67,1,0,0,0,336,340,3,70,35,0,337,340,3,74,37,0,338,340,
  	3,76,38,0,339,336,1,0,0,0,339,337,1,0,0,0,339,338,1,0,0,0,340,69,1,0,
  	0,0,341,342,5,14,0,0,342,343,5,30,0,0,343,344,3,72,36,0,344,345,5,31,
  	0,0,345,346,3,46,23,0,346,71,1,0,0,0,347,348,5,57,0,0,348,349,5,40,0,
  	0,349,350,3,78,39,0,350,351,5,15,0,0,351,354,3,78,39,0,352,353,5,16,0,
  	0,353,355,3,78,39,0,354,352,1,0,0,0,354,355,1,0,0,0,355,73,1,0,0,0,356,
  	357,5,17,0,0,357,358,5,30,0,0,358,359,3,66,33,0,359,360,5,31,0,0,360,
  	361,5,18,0,0,361,362,3,46,23,0,362,75,1,0,0,0,363,364,5,19,0,0,364,365,
  	3,46,23,0,365,366,5,20,0,0,366,367,5,30,0,0,367,368,3,66,33,0,368,369,
  	5,31,0,0,369,77,1,0,0,0,370,374,3,80,40,0,371,372,3,102,51,0,372,373,
  	3,80,40,0,373,375,1,0,0,0,374,371,1,0,0,0,374,375,1,0,0,0,375,79,1,0,
  	0,0,376,378,3,104,52,0,377,376,1,0,0,0,377,378,1,0,0,0,378,379,1,0,0,
  	0,379,385,3,82,41,0,380,381,3,106,53,0,381,382,3,82,41,0,382,384,1,0,
  	0,0,383,380,1,0,0,0,384,387,1,0,0,0,385,383,1,0,0,0,385,386,1,0,0,0,386,
  	81,1,0,0,0,387,385,1,0,0,0,388,394,3,84,42,0,389,390,3,108,54,0,390,391,
  	3,84,42,0,391,393,1,0,0,0,392,389,1,0,0,0,393,396,1,0,0,0,394,392,1,0,
  	0,0,394,395,1,0,0,0,395,83,1,0,0,0,396,394,1,0,0,0,397,406,3,94,47,0,
  	398,406,3,86,43,0,399,400,5,30,0,0,400,401,3,78,39,0,401,402,5,31,0,0,
  	402,406,1,0,0,0,403,404,5,50,0,0,404,406,3,84,42,0,405,397,1,0,0,0,405,
  	398,1,0,0,0,405,399,1,0,0,0,405,403,1,0,0,0,406,85,1,0,0,0,407,409,5,
  	57,0,0,408,410,3,88,44,0,409,408,1,0,0,0,409,410,1,0,0,0,410,87,1,0,0,
  	0,411,414,3,90,45,0,412,414,3,92,46,0,413,411,1,0,0,0,413,412,1,0,0,0,
  	414,89,1,0,0,0,415,416,5,32,0,0,416,417,3,78,39,0,417,418,5,33,0,0,418,
  	91,1,0,0,0,419,420,5,39,0,0,420,421,5,57,0,0,421,93,1,0,0,0,422,427,3,
  	96,48,0,423,427,3,98,49,0,424,427,3,100,50,0,425,427,5,57,0,0,426,422,
  	1,0,0,0,426,423,1,0,0,0,426,424,1,0,0,0,426,425,1,0,0,0,427,95,1,0,0,
  	0,428,429,7,2,0,0,429,97,1,0,0,0,430,431,7,3,0,0,431,99,1,0,0,0,432,433,
  	7,4,0,0,433,101,1,0,0,0,434,435,7,5,0,0,435,103,1,0,0,0,436,437,7,6,0,
  	0,437,105,1,0,0,0,438,439,7,7,0,0,439,107,1,0,0,0,440,441,7,8,0,0,441,
  	109,1,0,0,0,35,117,122,125,128,131,137,148,159,167,175,194,202,213,223,
  	235,239,251,264,283,292,297,304,309,327,332,339,354,374,377,385,394,405,
  	409,413,426
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ExprParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgramContext::PROGRAM() {
  return getToken(ExprParser::PROGRAM, 0);
}

tree::TerminalNode* ExprParser::ProgramContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::ProgramContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::BlockContext* ExprParser::ProgramContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}

tree::TerminalNode* ExprParser::ProgramContext::DOT() {
  return getToken(ExprParser::DOT, 0);
}


size_t ExprParser::ProgramContext::getRuleIndex() const {
  return ExprParser::RuleProgram;
}


ExprParser::ProgramContext* ExprParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(ExprParser::PROGRAM);
    setState(111);
    match(ExprParser::ID);
    setState(112);
    match(ExprParser::SEMICOLON);
    setState(113);
    block();
    setState(114);
    match(ExprParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ExprParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Instructions_listContext* ExprParser::BlockContext::instructions_list() {
  return getRuleContext<ExprParser::Instructions_listContext>(0);
}

ExprParser::Definitions_partContext* ExprParser::BlockContext::definitions_part() {
  return getRuleContext<ExprParser::Definitions_partContext>(0);
}


size_t ExprParser::BlockContext::getRuleIndex() const {
  return ExprParser::RuleBlock;
}


ExprParser::BlockContext* ExprParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(116);
      definitions_part();
      break;
    }

    default:
      break;
    }
    setState(119);
    instructions_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definitions_partContext ------------------------------------------------------------------

ExprParser::Definitions_partContext::Definitions_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Constants_definitionContext* ExprParser::Definitions_partContext::constants_definition() {
  return getRuleContext<ExprParser::Constants_definitionContext>(0);
}

ExprParser::Types_definitionContext* ExprParser::Definitions_partContext::types_definition() {
  return getRuleContext<ExprParser::Types_definitionContext>(0);
}

ExprParser::Variables_definitionContext* ExprParser::Definitions_partContext::variables_definition() {
  return getRuleContext<ExprParser::Variables_definitionContext>(0);
}

ExprParser::Procedures_definitionContext* ExprParser::Definitions_partContext::procedures_definition() {
  return getRuleContext<ExprParser::Procedures_definitionContext>(0);
}


size_t ExprParser::Definitions_partContext::getRuleIndex() const {
  return ExprParser::RuleDefinitions_part;
}


ExprParser::Definitions_partContext* ExprParser::definitions_part() {
  Definitions_partContext *_localctx = _tracker.createInstance<Definitions_partContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleDefinitions_part);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::CONST) {
      setState(121);
      constants_definition();
    }
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::TYPE) {
      setState(124);
      types_definition();
    }
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VARIABLE) {
      setState(127);
      variables_definition();
    }
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PROCEDURE) {
      setState(130);
      procedures_definition();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constants_definitionContext ------------------------------------------------------------------

ExprParser::Constants_definitionContext::Constants_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Constants_definitionContext::CONST() {
  return getToken(ExprParser::CONST, 0);
}

std::vector<ExprParser::Constant_defContext *> ExprParser::Constants_definitionContext::constant_def() {
  return getRuleContexts<ExprParser::Constant_defContext>();
}

ExprParser::Constant_defContext* ExprParser::Constants_definitionContext::constant_def(size_t i) {
  return getRuleContext<ExprParser::Constant_defContext>(i);
}


size_t ExprParser::Constants_definitionContext::getRuleIndex() const {
  return ExprParser::RuleConstants_definition;
}


ExprParser::Constants_definitionContext* ExprParser::constants_definition() {
  Constants_definitionContext *_localctx = _tracker.createInstance<Constants_definitionContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleConstants_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(ExprParser::CONST);
    setState(135); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(134);
      constant_def();
      setState(137); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_defContext ------------------------------------------------------------------

ExprParser::Constant_defContext::Constant_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Constant_defContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::Constant_defContext::EQUALS() {
  return getToken(ExprParser::EQUALS, 0);
}

ExprParser::Constant_valueContext* ExprParser::Constant_defContext::constant_value() {
  return getRuleContext<ExprParser::Constant_valueContext>(0);
}

tree::TerminalNode* ExprParser::Constant_defContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::Constant_defContext::getRuleIndex() const {
  return ExprParser::RuleConstant_def;
}


ExprParser::Constant_defContext* ExprParser::constant_def() {
  Constant_defContext *_localctx = _tracker.createInstance<Constant_defContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleConstant_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(ExprParser::ID);
    setState(140);
    match(ExprParser::EQUALS);
    setState(141);
    constant_value();
    setState(142);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Types_definitionContext ------------------------------------------------------------------

ExprParser::Types_definitionContext::Types_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Types_definitionContext::TYPE() {
  return getToken(ExprParser::TYPE, 0);
}

std::vector<ExprParser::Type_defContext *> ExprParser::Types_definitionContext::type_def() {
  return getRuleContexts<ExprParser::Type_defContext>();
}

ExprParser::Type_defContext* ExprParser::Types_definitionContext::type_def(size_t i) {
  return getRuleContext<ExprParser::Type_defContext>(i);
}


size_t ExprParser::Types_definitionContext::getRuleIndex() const {
  return ExprParser::RuleTypes_definition;
}


ExprParser::Types_definitionContext* ExprParser::types_definition() {
  Types_definitionContext *_localctx = _tracker.createInstance<Types_definitionContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleTypes_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(ExprParser::TYPE);
    setState(146); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(145);
      type_def();
      setState(148); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_defContext ------------------------------------------------------------------

ExprParser::Type_defContext::Type_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Type_defContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::Type_defContext::EQUALS() {
  return getToken(ExprParser::EQUALS, 0);
}

ExprParser::Composite_typeContext* ExprParser::Type_defContext::composite_type() {
  return getRuleContext<ExprParser::Composite_typeContext>(0);
}

tree::TerminalNode* ExprParser::Type_defContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::Type_defContext::getRuleIndex() const {
  return ExprParser::RuleType_def;
}


ExprParser::Type_defContext* ExprParser::type_def() {
  Type_defContext *_localctx = _tracker.createInstance<Type_defContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleType_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(ExprParser::ID);
    setState(151);
    match(ExprParser::EQUALS);
    setState(152);
    composite_type();
    setState(153);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variables_definitionContext ------------------------------------------------------------------

ExprParser::Variables_definitionContext::Variables_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Variables_definitionContext::VARIABLE() {
  return getToken(ExprParser::VARIABLE, 0);
}

std::vector<ExprParser::Variable_defContext *> ExprParser::Variables_definitionContext::variable_def() {
  return getRuleContexts<ExprParser::Variable_defContext>();
}

ExprParser::Variable_defContext* ExprParser::Variables_definitionContext::variable_def(size_t i) {
  return getRuleContext<ExprParser::Variable_defContext>(i);
}


size_t ExprParser::Variables_definitionContext::getRuleIndex() const {
  return ExprParser::RuleVariables_definition;
}


ExprParser::Variables_definitionContext* ExprParser::variables_definition() {
  Variables_definitionContext *_localctx = _tracker.createInstance<Variables_definitionContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleVariables_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(ExprParser::VARIABLE);
    setState(157); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(156);
      variable_def();
      setState(159); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_defContext ------------------------------------------------------------------

ExprParser::Variable_defContext::Variable_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Variables_groupContext* ExprParser::Variable_defContext::variables_group() {
  return getRuleContext<ExprParser::Variables_groupContext>(0);
}

tree::TerminalNode* ExprParser::Variable_defContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::Variable_defContext::getRuleIndex() const {
  return ExprParser::RuleVariable_def;
}


ExprParser::Variable_defContext* ExprParser::variable_def() {
  Variable_defContext *_localctx = _tracker.createInstance<Variable_defContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleVariable_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    variables_group();
    setState(162);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedures_definitionContext ------------------------------------------------------------------

ExprParser::Procedures_definitionContext::Procedures_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Procedure_defContext *> ExprParser::Procedures_definitionContext::procedure_def() {
  return getRuleContexts<ExprParser::Procedure_defContext>();
}

ExprParser::Procedure_defContext* ExprParser::Procedures_definitionContext::procedure_def(size_t i) {
  return getRuleContext<ExprParser::Procedure_defContext>(i);
}


size_t ExprParser::Procedures_definitionContext::getRuleIndex() const {
  return ExprParser::RuleProcedures_definition;
}


ExprParser::Procedures_definitionContext* ExprParser::procedures_definition() {
  Procedures_definitionContext *_localctx = _tracker.createInstance<Procedures_definitionContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleProcedures_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(164);
      procedure_def();
      setState(167); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::PROCEDURE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_defContext ------------------------------------------------------------------

ExprParser::Procedure_defContext::Procedure_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Procedure_headerContext* ExprParser::Procedure_defContext::procedure_header() {
  return getRuleContext<ExprParser::Procedure_headerContext>(0);
}

ExprParser::Procedure_blockContext* ExprParser::Procedure_defContext::procedure_block() {
  return getRuleContext<ExprParser::Procedure_blockContext>(0);
}

tree::TerminalNode* ExprParser::Procedure_defContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::Procedure_defContext::getRuleIndex() const {
  return ExprParser::RuleProcedure_def;
}


ExprParser::Procedure_defContext* ExprParser::procedure_def() {
  Procedure_defContext *_localctx = _tracker.createInstance<Procedure_defContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleProcedure_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    procedure_header();
    setState(170);
    procedure_block();
    setState(171);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Composite_typeContext ------------------------------------------------------------------

ExprParser::Composite_typeContext::Composite_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::List_typeContext* ExprParser::Composite_typeContext::list_type() {
  return getRuleContext<ExprParser::List_typeContext>(0);
}

ExprParser::Record_typeContext* ExprParser::Composite_typeContext::record_type() {
  return getRuleContext<ExprParser::Record_typeContext>(0);
}


size_t ExprParser::Composite_typeContext::getRuleIndex() const {
  return ExprParser::RuleComposite_type;
}


ExprParser::Composite_typeContext* ExprParser::composite_type() {
  Composite_typeContext *_localctx = _tracker.createInstance<Composite_typeContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleComposite_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::LIST: {
        enterOuterAlt(_localctx, 1);
        setState(173);
        list_type();
        break;
      }

      case ExprParser::RECORD: {
        enterOuterAlt(_localctx, 2);
        setState(174);
        record_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_typeContext ------------------------------------------------------------------

ExprParser::List_typeContext::List_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::List_typeContext::LIST() {
  return getToken(ExprParser::LIST, 0);
}

tree::TerminalNode* ExprParser::List_typeContext::L_SQUARE_BRACKET() {
  return getToken(ExprParser::L_SQUARE_BRACKET, 0);
}

tree::TerminalNode* ExprParser::List_typeContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::List_typeContext::R_SQUARE_BRACKET() {
  return getToken(ExprParser::R_SQUARE_BRACKET, 0);
}

tree::TerminalNode* ExprParser::List_typeContext::FROM() {
  return getToken(ExprParser::FROM, 0);
}

ExprParser::Data_typeContext* ExprParser::List_typeContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}


size_t ExprParser::List_typeContext::getRuleIndex() const {
  return ExprParser::RuleList_type;
}


ExprParser::List_typeContext* ExprParser::list_type() {
  List_typeContext *_localctx = _tracker.createInstance<List_typeContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleList_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(ExprParser::LIST);
    setState(178);
    match(ExprParser::L_SQUARE_BRACKET);
    setState(179);
    match(ExprParser::INTEGER);
    setState(180);
    match(ExprParser::R_SQUARE_BRACKET);
    setState(181);
    match(ExprParser::FROM);
    setState(182);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Record_typeContext ------------------------------------------------------------------

ExprParser::Record_typeContext::Record_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Record_typeContext::RECORD() {
  return getToken(ExprParser::RECORD, 0);
}

tree::TerminalNode* ExprParser::Record_typeContext::L_CURLY_BRACE() {
  return getToken(ExprParser::L_CURLY_BRACE, 0);
}

ExprParser::Fields_listContext* ExprParser::Record_typeContext::fields_list() {
  return getRuleContext<ExprParser::Fields_listContext>(0);
}

tree::TerminalNode* ExprParser::Record_typeContext::R_CURLY_BRACE() {
  return getToken(ExprParser::R_CURLY_BRACE, 0);
}


size_t ExprParser::Record_typeContext::getRuleIndex() const {
  return ExprParser::RuleRecord_type;
}


ExprParser::Record_typeContext* ExprParser::record_type() {
  Record_typeContext *_localctx = _tracker.createInstance<Record_typeContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleRecord_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(ExprParser::RECORD);
    setState(185);
    match(ExprParser::L_CURLY_BRACE);
    setState(186);
    fields_list();
    setState(187);
    match(ExprParser::R_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fields_listContext ------------------------------------------------------------------

ExprParser::Fields_listContext::Fields_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Field_defContext *> ExprParser::Fields_listContext::field_def() {
  return getRuleContexts<ExprParser::Field_defContext>();
}

ExprParser::Field_defContext* ExprParser::Fields_listContext::field_def(size_t i) {
  return getRuleContext<ExprParser::Field_defContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Fields_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Fields_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Fields_listContext::getRuleIndex() const {
  return ExprParser::RuleFields_list;
}


ExprParser::Fields_listContext* ExprParser::fields_list() {
  Fields_listContext *_localctx = _tracker.createInstance<Fields_listContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleFields_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    field_def();
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(190);
      match(ExprParser::SEMICOLON);
      setState(191);
      field_def();
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_defContext ------------------------------------------------------------------

ExprParser::Field_defContext::Field_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::Field_defContext::ID() {
  return getTokens(ExprParser::ID);
}

tree::TerminalNode* ExprParser::Field_defContext::ID(size_t i) {
  return getToken(ExprParser::ID, i);
}

tree::TerminalNode* ExprParser::Field_defContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::Data_typeContext* ExprParser::Field_defContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::Field_defContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Field_defContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Field_defContext::getRuleIndex() const {
  return ExprParser::RuleField_def;
}


ExprParser::Field_defContext* ExprParser::field_def() {
  Field_defContext *_localctx = _tracker.createInstance<Field_defContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleField_def);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(ExprParser::ID);
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(198);
      match(ExprParser::COMMA);
      setState(199);
      match(ExprParser::ID);
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    match(ExprParser::COLON);
    setState(206);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variables_groupContext ------------------------------------------------------------------

ExprParser::Variables_groupContext::Variables_groupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::Variables_groupContext::ID() {
  return getTokens(ExprParser::ID);
}

tree::TerminalNode* ExprParser::Variables_groupContext::ID(size_t i) {
  return getToken(ExprParser::ID, i);
}

tree::TerminalNode* ExprParser::Variables_groupContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::Data_typeContext* ExprParser::Variables_groupContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::Variables_groupContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Variables_groupContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Variables_groupContext::getRuleIndex() const {
  return ExprParser::RuleVariables_group;
}


ExprParser::Variables_groupContext* ExprParser::variables_group() {
  Variables_groupContext *_localctx = _tracker.createInstance<Variables_groupContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleVariables_group);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(ExprParser::ID);
    setState(213);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(209);
      match(ExprParser::COMMA);
      setState(210);
      match(ExprParser::ID);
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(216);
    match(ExprParser::COLON);
    setState(217);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_headerContext ------------------------------------------------------------------

ExprParser::Procedure_headerContext::Procedure_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Procedure_headerContext::PROCEDURE() {
  return getToken(ExprParser::PROCEDURE, 0);
}

tree::TerminalNode* ExprParser::Procedure_headerContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::Procedure_headerContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

tree::TerminalNode* ExprParser::Procedure_headerContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}

tree::TerminalNode* ExprParser::Procedure_headerContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::Formal_params_listContext* ExprParser::Procedure_headerContext::formal_params_list() {
  return getRuleContext<ExprParser::Formal_params_listContext>(0);
}


size_t ExprParser::Procedure_headerContext::getRuleIndex() const {
  return ExprParser::RuleProcedure_header;
}


ExprParser::Procedure_headerContext* ExprParser::procedure_header() {
  Procedure_headerContext *_localctx = _tracker.createInstance<Procedure_headerContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleProcedure_header);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(ExprParser::PROCEDURE);
    setState(220);
    match(ExprParser::ID);
    setState(221);
    match(ExprParser::L_PAREN);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 144115188075857408) != 0)) {
      setState(222);
      formal_params_list();
    }
    setState(225);
    match(ExprParser::R_PAREN);
    setState(226);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_blockContext ------------------------------------------------------------------

ExprParser::Procedure_blockContext::Procedure_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::BlockContext* ExprParser::Procedure_blockContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}


size_t ExprParser::Procedure_blockContext::getRuleIndex() const {
  return ExprParser::RuleProcedure_block;
}


ExprParser::Procedure_blockContext* ExprParser::procedure_block() {
  Procedure_blockContext *_localctx = _tracker.createInstance<Procedure_blockContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleProcedure_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Formal_params_listContext ------------------------------------------------------------------

ExprParser::Formal_params_listContext::Formal_params_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Param_defContext *> ExprParser::Formal_params_listContext::param_def() {
  return getRuleContexts<ExprParser::Param_defContext>();
}

ExprParser::Param_defContext* ExprParser::Formal_params_listContext::param_def(size_t i) {
  return getRuleContext<ExprParser::Param_defContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Formal_params_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Formal_params_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Formal_params_listContext::getRuleIndex() const {
  return ExprParser::RuleFormal_params_list;
}


ExprParser::Formal_params_listContext* ExprParser::formal_params_list() {
  Formal_params_listContext *_localctx = _tracker.createInstance<Formal_params_listContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleFormal_params_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    param_def();
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(231);
      match(ExprParser::SEMICOLON);
      setState(232);
      param_def();
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_defContext ------------------------------------------------------------------

ExprParser::Param_defContext::Param_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Variables_groupContext* ExprParser::Param_defContext::variables_group() {
  return getRuleContext<ExprParser::Variables_groupContext>(0);
}

tree::TerminalNode* ExprParser::Param_defContext::BY_VALUE() {
  return getToken(ExprParser::BY_VALUE, 0);
}

tree::TerminalNode* ExprParser::Param_defContext::BY_REFERENCE() {
  return getToken(ExprParser::BY_REFERENCE, 0);
}


size_t ExprParser::Param_defContext::getRuleIndex() const {
  return ExprParser::RuleParam_def;
}


ExprParser::Param_defContext* ExprParser::param_def() {
  Param_defContext *_localctx = _tracker.createInstance<Param_defContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleParam_def);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::BY_VALUE

    || _la == ExprParser::BY_REFERENCE) {
      setState(238);
      _la = _input->LA(1);
      if (!(_la == ExprParser::BY_VALUE

      || _la == ExprParser::BY_REFERENCE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(241);
    variables_group();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_typeContext ------------------------------------------------------------------

ExprParser::Data_typeContext::Data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Data_typeContext::DT_INTEGER() {
  return getToken(ExprParser::DT_INTEGER, 0);
}

tree::TerminalNode* ExprParser::Data_typeContext::DT_REAL() {
  return getToken(ExprParser::DT_REAL, 0);
}

tree::TerminalNode* ExprParser::Data_typeContext::DT_LOGICAL() {
  return getToken(ExprParser::DT_LOGICAL, 0);
}

tree::TerminalNode* ExprParser::Data_typeContext::DT_CHAR() {
  return getToken(ExprParser::DT_CHAR, 0);
}

tree::TerminalNode* ExprParser::Data_typeContext::DT_STRING() {
  return getToken(ExprParser::DT_STRING, 0);
}

tree::TerminalNode* ExprParser::Data_typeContext::ID() {
  return getToken(ExprParser::ID, 0);
}


size_t ExprParser::Data_typeContext::getRuleIndex() const {
  return ExprParser::RuleData_type;
}


ExprParser::Data_typeContext* ExprParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleData_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 144115189116043264) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Instructions_listContext ------------------------------------------------------------------

ExprParser::Instructions_listContext::Instructions_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Instructions_listContext::L_CURLY_BRACE() {
  return getToken(ExprParser::L_CURLY_BRACE, 0);
}

std::vector<ExprParser::InstructionContext *> ExprParser::Instructions_listContext::instruction() {
  return getRuleContexts<ExprParser::InstructionContext>();
}

ExprParser::InstructionContext* ExprParser::Instructions_listContext::instruction(size_t i) {
  return getRuleContext<ExprParser::InstructionContext>(i);
}

tree::TerminalNode* ExprParser::Instructions_listContext::R_CURLY_BRACE() {
  return getToken(ExprParser::R_CURLY_BRACE, 0);
}

std::vector<tree::TerminalNode *> ExprParser::Instructions_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Instructions_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Instructions_listContext::getRuleIndex() const {
  return ExprParser::RuleInstructions_list;
}


ExprParser::Instructions_listContext* ExprParser::instructions_list() {
  Instructions_listContext *_localctx = _tracker.createInstance<Instructions_listContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RuleInstructions_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(ExprParser::L_CURLY_BRACE);
    setState(246);
    instruction();
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(247);
      match(ExprParser::SEMICOLON);
      setState(248);
      instruction();
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(254);
    match(ExprParser::R_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ExprParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Assignment_statementContext* ExprParser::InstructionContext::assignment_statement() {
  return getRuleContext<ExprParser::Assignment_statementContext>(0);
}

ExprParser::Input_statementContext* ExprParser::InstructionContext::input_statement() {
  return getRuleContext<ExprParser::Input_statementContext>(0);
}

ExprParser::Output_statementContext* ExprParser::InstructionContext::output_statement() {
  return getRuleContext<ExprParser::Output_statementContext>(0);
}

ExprParser::Call_statementContext* ExprParser::InstructionContext::call_statement() {
  return getRuleContext<ExprParser::Call_statementContext>(0);
}

ExprParser::Conditional_statementContext* ExprParser::InstructionContext::conditional_statement() {
  return getRuleContext<ExprParser::Conditional_statementContext>(0);
}

ExprParser::Loop_statementContext* ExprParser::InstructionContext::loop_statement() {
  return getRuleContext<ExprParser::Loop_statementContext>(0);
}

ExprParser::Instructions_listContext* ExprParser::InstructionContext::instructions_list() {
  return getRuleContext<ExprParser::Instructions_listContext>(0);
}


size_t ExprParser::InstructionContext::getRuleIndex() const {
  return ExprParser::RuleInstruction;
}


ExprParser::InstructionContext* ExprParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 46, ExprParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(256);
      assignment_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(257);
      input_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(258);
      output_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(259);
      call_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(260);
      conditional_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(261);
      loop_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(262);
      instructions_list();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_statementContext ------------------------------------------------------------------

ExprParser::Assignment_statementContext::Assignment_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Variable_accessContext* ExprParser::Assignment_statementContext::variable_access() {
  return getRuleContext<ExprParser::Variable_accessContext>(0);
}

tree::TerminalNode* ExprParser::Assignment_statementContext::EQUALS() {
  return getToken(ExprParser::EQUALS, 0);
}

ExprParser::ExpressionContext* ExprParser::Assignment_statementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::Assignment_statementContext::getRuleIndex() const {
  return ExprParser::RuleAssignment_statement;
}


ExprParser::Assignment_statementContext* ExprParser::assignment_statement() {
  Assignment_statementContext *_localctx = _tracker.createInstance<Assignment_statementContext>(_ctx, getState());
  enterRule(_localctx, 48, ExprParser::RuleAssignment_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    variable_access();
    setState(267);
    match(ExprParser::EQUALS);
    setState(268);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Input_statementContext ------------------------------------------------------------------

ExprParser::Input_statementContext::Input_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Input_statementContext::READ() {
  return getToken(ExprParser::READ, 0);
}

tree::TerminalNode* ExprParser::Input_statementContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

ExprParser::Variable_accessContext* ExprParser::Input_statementContext::variable_access() {
  return getRuleContext<ExprParser::Variable_accessContext>(0);
}

tree::TerminalNode* ExprParser::Input_statementContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}


size_t ExprParser::Input_statementContext::getRuleIndex() const {
  return ExprParser::RuleInput_statement;
}


ExprParser::Input_statementContext* ExprParser::input_statement() {
  Input_statementContext *_localctx = _tracker.createInstance<Input_statementContext>(_ctx, getState());
  enterRule(_localctx, 50, ExprParser::RuleInput_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(ExprParser::READ);
    setState(271);
    match(ExprParser::L_PAREN);
    setState(272);
    variable_access();
    setState(273);
    match(ExprParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Output_statementContext ------------------------------------------------------------------

ExprParser::Output_statementContext::Output_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Output_statementContext::PRINT() {
  return getToken(ExprParser::PRINT, 0);
}

tree::TerminalNode* ExprParser::Output_statementContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

ExprParser::Print_listContext* ExprParser::Output_statementContext::print_list() {
  return getRuleContext<ExprParser::Print_listContext>(0);
}

tree::TerminalNode* ExprParser::Output_statementContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}


size_t ExprParser::Output_statementContext::getRuleIndex() const {
  return ExprParser::RuleOutput_statement;
}


ExprParser::Output_statementContext* ExprParser::output_statement() {
  Output_statementContext *_localctx = _tracker.createInstance<Output_statementContext>(_ctx, getState());
  enterRule(_localctx, 52, ExprParser::RuleOutput_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(ExprParser::PRINT);
    setState(276);
    match(ExprParser::L_PAREN);
    setState(277);
    print_list();
    setState(278);
    match(ExprParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_statementContext ------------------------------------------------------------------

ExprParser::Call_statementContext::Call_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Call_statementContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::Call_statementContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

tree::TerminalNode* ExprParser::Call_statementContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}

ExprParser::Actual_params_listContext* ExprParser::Call_statementContext::actual_params_list() {
  return getRuleContext<ExprParser::Actual_params_listContext>(0);
}


size_t ExprParser::Call_statementContext::getRuleIndex() const {
  return ExprParser::RuleCall_statement;
}


ExprParser::Call_statementContext* ExprParser::call_statement() {
  Call_statementContext *_localctx = _tracker.createInstance<Call_statementContext>(_ctx, getState());
  enterRule(_localctx, 54, ExprParser::RuleCall_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(ExprParser::ID);
    setState(281);
    match(ExprParser::L_PAREN);
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4468703328427048960) != 0)) {
      setState(282);
      actual_params_list();
    }
    setState(285);
    match(ExprParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_listContext ------------------------------------------------------------------

ExprParser::Print_listContext::Print_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Print_itemContext *> ExprParser::Print_listContext::print_item() {
  return getRuleContexts<ExprParser::Print_itemContext>();
}

ExprParser::Print_itemContext* ExprParser::Print_listContext::print_item(size_t i) {
  return getRuleContext<ExprParser::Print_itemContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Print_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Print_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Print_listContext::getRuleIndex() const {
  return ExprParser::RulePrint_list;
}


ExprParser::Print_listContext* ExprParser::print_list() {
  Print_listContext *_localctx = _tracker.createInstance<Print_listContext>(_ctx, getState());
  enterRule(_localctx, 56, ExprParser::RulePrint_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    print_item();
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(288);
      match(ExprParser::COMMA);
      setState(289);
      print_item();
      setState(294);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_itemContext ------------------------------------------------------------------

ExprParser::Print_itemContext::Print_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Variable_accessContext* ExprParser::Print_itemContext::variable_access() {
  return getRuleContext<ExprParser::Variable_accessContext>(0);
}

ExprParser::Literal_valueContext* ExprParser::Print_itemContext::literal_value() {
  return getRuleContext<ExprParser::Literal_valueContext>(0);
}


size_t ExprParser::Print_itemContext::getRuleIndex() const {
  return ExprParser::RulePrint_item;
}


ExprParser::Print_itemContext* ExprParser::print_item() {
  Print_itemContext *_localctx = _tracker.createInstance<Print_itemContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RulePrint_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(295);
        variable_access();
        break;
      }

      case ExprParser::STRING_LITERAL:
      case ExprParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(296);
        literal_value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Actual_params_listContext ------------------------------------------------------------------

ExprParser::Actual_params_listContext::Actual_params_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Actual_paramContext *> ExprParser::Actual_params_listContext::actual_param() {
  return getRuleContexts<ExprParser::Actual_paramContext>();
}

ExprParser::Actual_paramContext* ExprParser::Actual_params_listContext::actual_param(size_t i) {
  return getRuleContext<ExprParser::Actual_paramContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Actual_params_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Actual_params_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Actual_params_listContext::getRuleIndex() const {
  return ExprParser::RuleActual_params_list;
}


ExprParser::Actual_params_listContext* ExprParser::actual_params_list() {
  Actual_params_listContext *_localctx = _tracker.createInstance<Actual_params_listContext>(_ctx, getState());
  enterRule(_localctx, 60, ExprParser::RuleActual_params_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    actual_param();
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(300);
      match(ExprParser::COMMA);
      setState(301);
      actual_param();
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Actual_paramContext ------------------------------------------------------------------

ExprParser::Actual_paramContext::Actual_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::Actual_paramContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Variable_accessContext* ExprParser::Actual_paramContext::variable_access() {
  return getRuleContext<ExprParser::Variable_accessContext>(0);
}


size_t ExprParser::Actual_paramContext::getRuleIndex() const {
  return ExprParser::RuleActual_param;
}


ExprParser::Actual_paramContext* ExprParser::actual_param() {
  Actual_paramContext *_localctx = _tracker.createInstance<Actual_paramContext>(_ctx, getState());
  enterRule(_localctx, 62, ExprParser::RuleActual_param);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(309);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(307);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(308);
      variable_access();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_statementContext ------------------------------------------------------------------

ExprParser::Conditional_statementContext::Conditional_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::Conditional_statementContext::IF() {
  return getTokens(ExprParser::IF);
}

tree::TerminalNode* ExprParser::Conditional_statementContext::IF(size_t i) {
  return getToken(ExprParser::IF, i);
}

std::vector<tree::TerminalNode *> ExprParser::Conditional_statementContext::L_PAREN() {
  return getTokens(ExprParser::L_PAREN);
}

tree::TerminalNode* ExprParser::Conditional_statementContext::L_PAREN(size_t i) {
  return getToken(ExprParser::L_PAREN, i);
}

std::vector<ExprParser::ConditionContext *> ExprParser::Conditional_statementContext::condition() {
  return getRuleContexts<ExprParser::ConditionContext>();
}

ExprParser::ConditionContext* ExprParser::Conditional_statementContext::condition(size_t i) {
  return getRuleContext<ExprParser::ConditionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Conditional_statementContext::R_PAREN() {
  return getTokens(ExprParser::R_PAREN);
}

tree::TerminalNode* ExprParser::Conditional_statementContext::R_PAREN(size_t i) {
  return getToken(ExprParser::R_PAREN, i);
}

std::vector<tree::TerminalNode *> ExprParser::Conditional_statementContext::THEN() {
  return getTokens(ExprParser::THEN);
}

tree::TerminalNode* ExprParser::Conditional_statementContext::THEN(size_t i) {
  return getToken(ExprParser::THEN, i);
}

std::vector<ExprParser::InstructionContext *> ExprParser::Conditional_statementContext::instruction() {
  return getRuleContexts<ExprParser::InstructionContext>();
}

ExprParser::InstructionContext* ExprParser::Conditional_statementContext::instruction(size_t i) {
  return getRuleContext<ExprParser::InstructionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Conditional_statementContext::ELSE() {
  return getTokens(ExprParser::ELSE);
}

tree::TerminalNode* ExprParser::Conditional_statementContext::ELSE(size_t i) {
  return getToken(ExprParser::ELSE, i);
}


size_t ExprParser::Conditional_statementContext::getRuleIndex() const {
  return ExprParser::RuleConditional_statement;
}


ExprParser::Conditional_statementContext* ExprParser::conditional_statement() {
  Conditional_statementContext *_localctx = _tracker.createInstance<Conditional_statementContext>(_ctx, getState());
  enterRule(_localctx, 64, ExprParser::RuleConditional_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(ExprParser::IF);
    setState(312);
    match(ExprParser::L_PAREN);
    setState(313);
    condition();
    setState(314);
    match(ExprParser::R_PAREN);
    setState(315);
    match(ExprParser::THEN);
    setState(316);
    instruction();
    setState(327);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(317);
        match(ExprParser::ELSE);
        setState(318);
        match(ExprParser::IF);
        setState(319);
        match(ExprParser::L_PAREN);
        setState(320);
        condition();
        setState(321);
        match(ExprParser::R_PAREN);
        setState(322);
        match(ExprParser::THEN);
        setState(323);
        instruction(); 
      }
      setState(329);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
    setState(332);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(330);
      match(ExprParser::ELSE);
      setState(331);
      instruction();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

ExprParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::ConditionContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::ConditionContext::getRuleIndex() const {
  return ExprParser::RuleCondition;
}


ExprParser::ConditionContext* ExprParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 66, ExprParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_statementContext ------------------------------------------------------------------

ExprParser::Loop_statementContext::Loop_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::For_loop_statementContext* ExprParser::Loop_statementContext::for_loop_statement() {
  return getRuleContext<ExprParser::For_loop_statementContext>(0);
}

ExprParser::While_loop_statementContext* ExprParser::Loop_statementContext::while_loop_statement() {
  return getRuleContext<ExprParser::While_loop_statementContext>(0);
}

ExprParser::Repeat_until_statementContext* ExprParser::Loop_statementContext::repeat_until_statement() {
  return getRuleContext<ExprParser::Repeat_until_statementContext>(0);
}


size_t ExprParser::Loop_statementContext::getRuleIndex() const {
  return ExprParser::RuleLoop_statement;
}


ExprParser::Loop_statementContext* ExprParser::loop_statement() {
  Loop_statementContext *_localctx = _tracker.createInstance<Loop_statementContext>(_ctx, getState());
  enterRule(_localctx, 68, ExprParser::RuleLoop_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(336);
        for_loop_statement();
        break;
      }

      case ExprParser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        while_loop_statement();
        break;
      }

      case ExprParser::REPEAT: {
        enterOuterAlt(_localctx, 3);
        setState(338);
        repeat_until_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_loop_statementContext ------------------------------------------------------------------

ExprParser::For_loop_statementContext::For_loop_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::For_loop_statementContext::FOR() {
  return getToken(ExprParser::FOR, 0);
}

tree::TerminalNode* ExprParser::For_loop_statementContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

ExprParser::Iteration_rangeContext* ExprParser::For_loop_statementContext::iteration_range() {
  return getRuleContext<ExprParser::Iteration_rangeContext>(0);
}

tree::TerminalNode* ExprParser::For_loop_statementContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}

ExprParser::InstructionContext* ExprParser::For_loop_statementContext::instruction() {
  return getRuleContext<ExprParser::InstructionContext>(0);
}


size_t ExprParser::For_loop_statementContext::getRuleIndex() const {
  return ExprParser::RuleFor_loop_statement;
}


ExprParser::For_loop_statementContext* ExprParser::for_loop_statement() {
  For_loop_statementContext *_localctx = _tracker.createInstance<For_loop_statementContext>(_ctx, getState());
  enterRule(_localctx, 70, ExprParser::RuleFor_loop_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(ExprParser::FOR);
    setState(342);
    match(ExprParser::L_PAREN);
    setState(343);
    iteration_range();
    setState(344);
    match(ExprParser::R_PAREN);
    setState(345);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Iteration_rangeContext ------------------------------------------------------------------

ExprParser::Iteration_rangeContext::Iteration_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Iteration_rangeContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::Iteration_rangeContext::EQUALS() {
  return getToken(ExprParser::EQUALS, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::Iteration_rangeContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Iteration_rangeContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::Iteration_rangeContext::TO() {
  return getToken(ExprParser::TO, 0);
}

tree::TerminalNode* ExprParser::Iteration_rangeContext::STEP() {
  return getToken(ExprParser::STEP, 0);
}


size_t ExprParser::Iteration_rangeContext::getRuleIndex() const {
  return ExprParser::RuleIteration_range;
}


ExprParser::Iteration_rangeContext* ExprParser::iteration_range() {
  Iteration_rangeContext *_localctx = _tracker.createInstance<Iteration_rangeContext>(_ctx, getState());
  enterRule(_localctx, 72, ExprParser::RuleIteration_range);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(ExprParser::ID);
    setState(348);
    match(ExprParser::EQUALS);
    setState(349);
    expression();
    setState(350);
    match(ExprParser::TO);
    setState(351);
    expression();
    setState(354);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::STEP) {
      setState(352);
      match(ExprParser::STEP);
      setState(353);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loop_statementContext ------------------------------------------------------------------

ExprParser::While_loop_statementContext::While_loop_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::While_loop_statementContext::WHILE() {
  return getToken(ExprParser::WHILE, 0);
}

tree::TerminalNode* ExprParser::While_loop_statementContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

ExprParser::ConditionContext* ExprParser::While_loop_statementContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

tree::TerminalNode* ExprParser::While_loop_statementContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}

tree::TerminalNode* ExprParser::While_loop_statementContext::CONTINUE() {
  return getToken(ExprParser::CONTINUE, 0);
}

ExprParser::InstructionContext* ExprParser::While_loop_statementContext::instruction() {
  return getRuleContext<ExprParser::InstructionContext>(0);
}


size_t ExprParser::While_loop_statementContext::getRuleIndex() const {
  return ExprParser::RuleWhile_loop_statement;
}


ExprParser::While_loop_statementContext* ExprParser::while_loop_statement() {
  While_loop_statementContext *_localctx = _tracker.createInstance<While_loop_statementContext>(_ctx, getState());
  enterRule(_localctx, 74, ExprParser::RuleWhile_loop_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(ExprParser::WHILE);
    setState(357);
    match(ExprParser::L_PAREN);
    setState(358);
    condition();
    setState(359);
    match(ExprParser::R_PAREN);
    setState(360);
    match(ExprParser::CONTINUE);
    setState(361);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_until_statementContext ------------------------------------------------------------------

ExprParser::Repeat_until_statementContext::Repeat_until_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Repeat_until_statementContext::REPEAT() {
  return getToken(ExprParser::REPEAT, 0);
}

ExprParser::InstructionContext* ExprParser::Repeat_until_statementContext::instruction() {
  return getRuleContext<ExprParser::InstructionContext>(0);
}

tree::TerminalNode* ExprParser::Repeat_until_statementContext::UNTIL() {
  return getToken(ExprParser::UNTIL, 0);
}

tree::TerminalNode* ExprParser::Repeat_until_statementContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

ExprParser::ConditionContext* ExprParser::Repeat_until_statementContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

tree::TerminalNode* ExprParser::Repeat_until_statementContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}


size_t ExprParser::Repeat_until_statementContext::getRuleIndex() const {
  return ExprParser::RuleRepeat_until_statement;
}


ExprParser::Repeat_until_statementContext* ExprParser::repeat_until_statement() {
  Repeat_until_statementContext *_localctx = _tracker.createInstance<Repeat_until_statementContext>(_ctx, getState());
  enterRule(_localctx, 76, ExprParser::RuleRepeat_until_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(ExprParser::REPEAT);
    setState(364);
    instruction();
    setState(365);
    match(ExprParser::UNTIL);
    setState(366);
    match(ExprParser::L_PAREN);
    setState(367);
    condition();
    setState(368);
    match(ExprParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Simple_expressionContext *> ExprParser::ExpressionContext::simple_expression() {
  return getRuleContexts<ExprParser::Simple_expressionContext>();
}

ExprParser::Simple_expressionContext* ExprParser::ExpressionContext::simple_expression(size_t i) {
  return getRuleContext<ExprParser::Simple_expressionContext>(i);
}

ExprParser::Relational_opContext* ExprParser::ExpressionContext::relational_op() {
  return getRuleContext<ExprParser::Relational_opContext>(0);
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}


ExprParser::ExpressionContext* ExprParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 78, ExprParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    simple_expression();
    setState(374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 141863388262170624) != 0)) {
      setState(371);
      relational_op();
      setState(372);
      simple_expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_expressionContext ------------------------------------------------------------------

ExprParser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::TermContext *> ExprParser::Simple_expressionContext::term() {
  return getRuleContexts<ExprParser::TermContext>();
}

ExprParser::TermContext* ExprParser::Simple_expressionContext::term(size_t i) {
  return getRuleContext<ExprParser::TermContext>(i);
}

ExprParser::SignContext* ExprParser::Simple_expressionContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
}

std::vector<ExprParser::Add_opContext *> ExprParser::Simple_expressionContext::add_op() {
  return getRuleContexts<ExprParser::Add_opContext>();
}

ExprParser::Add_opContext* ExprParser::Simple_expressionContext::add_op(size_t i) {
  return getRuleContext<ExprParser::Add_opContext>(i);
}


size_t ExprParser::Simple_expressionContext::getRuleIndex() const {
  return ExprParser::RuleSimple_expression;
}


ExprParser::Simple_expressionContext* ExprParser::simple_expression() {
  Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, getState());
  enterRule(_localctx, 80, ExprParser::RuleSimple_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PLUS

    || _la == ExprParser::MINUS) {
      setState(376);
      sign();
    }
    setState(379);
    term();
    setState(385);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 569547023187968) != 0)) {
      setState(380);
      add_op();
      setState(381);
      term();
      setState(387);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

ExprParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::FactorContext *> ExprParser::TermContext::factor() {
  return getRuleContexts<ExprParser::FactorContext>();
}

ExprParser::FactorContext* ExprParser::TermContext::factor(size_t i) {
  return getRuleContext<ExprParser::FactorContext>(i);
}

std::vector<ExprParser::Mul_opContext *> ExprParser::TermContext::mul_op() {
  return getRuleContexts<ExprParser::Mul_opContext>();
}

ExprParser::Mul_opContext* ExprParser::TermContext::mul_op(size_t i) {
  return getRuleContext<ExprParser::Mul_opContext>(i);
}


size_t ExprParser::TermContext::getRuleIndex() const {
  return ExprParser::RuleTerm;
}


ExprParser::TermContext* ExprParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 82, ExprParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    factor();
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 413416372043776) != 0)) {
      setState(389);
      mul_op();
      setState(390);
      factor();
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

ExprParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Constant_valueContext* ExprParser::FactorContext::constant_value() {
  return getRuleContext<ExprParser::Constant_valueContext>(0);
}

ExprParser::Variable_accessContext* ExprParser::FactorContext::variable_access() {
  return getRuleContext<ExprParser::Variable_accessContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::L_PAREN() {
  return getToken(ExprParser::L_PAREN, 0);
}

ExprParser::ExpressionContext* ExprParser::FactorContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::R_PAREN() {
  return getToken(ExprParser::R_PAREN, 0);
}

tree::TerminalNode* ExprParser::FactorContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::FactorContext* ExprParser::FactorContext::factor() {
  return getRuleContext<ExprParser::FactorContext>(0);
}


size_t ExprParser::FactorContext::getRuleIndex() const {
  return ExprParser::RuleFactor;
}


ExprParser::FactorContext* ExprParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 84, ExprParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(397);
      constant_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(398);
      variable_access();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(399);
      match(ExprParser::L_PAREN);
      setState(400);
      expression();
      setState(401);
      match(ExprParser::R_PAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(403);
      match(ExprParser::NOT);
      setState(404);
      factor();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_accessContext ------------------------------------------------------------------

ExprParser::Variable_accessContext::Variable_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Variable_accessContext::ID() {
  return getToken(ExprParser::ID, 0);
}

ExprParser::SelectorContext* ExprParser::Variable_accessContext::selector() {
  return getRuleContext<ExprParser::SelectorContext>(0);
}


size_t ExprParser::Variable_accessContext::getRuleIndex() const {
  return ExprParser::RuleVariable_access;
}


ExprParser::Variable_accessContext* ExprParser::variable_access() {
  Variable_accessContext *_localctx = _tracker.createInstance<Variable_accessContext>(_ctx, getState());
  enterRule(_localctx, 86, ExprParser::RuleVariable_access);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    match(ExprParser::ID);
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::L_SQUARE_BRACKET

    || _la == ExprParser::DOT) {
      setState(408);
      selector();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorContext ------------------------------------------------------------------

ExprParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Indexed_selectorContext* ExprParser::SelectorContext::indexed_selector() {
  return getRuleContext<ExprParser::Indexed_selectorContext>(0);
}

ExprParser::Field_selectorContext* ExprParser::SelectorContext::field_selector() {
  return getRuleContext<ExprParser::Field_selectorContext>(0);
}


size_t ExprParser::SelectorContext::getRuleIndex() const {
  return ExprParser::RuleSelector;
}


ExprParser::SelectorContext* ExprParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 88, ExprParser::RuleSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::L_SQUARE_BRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(411);
        indexed_selector();
        break;
      }

      case ExprParser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(412);
        field_selector();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Indexed_selectorContext ------------------------------------------------------------------

ExprParser::Indexed_selectorContext::Indexed_selectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Indexed_selectorContext::L_SQUARE_BRACKET() {
  return getToken(ExprParser::L_SQUARE_BRACKET, 0);
}

ExprParser::ExpressionContext* ExprParser::Indexed_selectorContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::Indexed_selectorContext::R_SQUARE_BRACKET() {
  return getToken(ExprParser::R_SQUARE_BRACKET, 0);
}


size_t ExprParser::Indexed_selectorContext::getRuleIndex() const {
  return ExprParser::RuleIndexed_selector;
}


ExprParser::Indexed_selectorContext* ExprParser::indexed_selector() {
  Indexed_selectorContext *_localctx = _tracker.createInstance<Indexed_selectorContext>(_ctx, getState());
  enterRule(_localctx, 90, ExprParser::RuleIndexed_selector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    match(ExprParser::L_SQUARE_BRACKET);
    setState(416);
    expression();
    setState(417);
    match(ExprParser::R_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_selectorContext ------------------------------------------------------------------

ExprParser::Field_selectorContext::Field_selectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Field_selectorContext::DOT() {
  return getToken(ExprParser::DOT, 0);
}

tree::TerminalNode* ExprParser::Field_selectorContext::ID() {
  return getToken(ExprParser::ID, 0);
}


size_t ExprParser::Field_selectorContext::getRuleIndex() const {
  return ExprParser::RuleField_selector;
}


ExprParser::Field_selectorContext* ExprParser::field_selector() {
  Field_selectorContext *_localctx = _tracker.createInstance<Field_selectorContext>(_ctx, getState());
  enterRule(_localctx, 92, ExprParser::RuleField_selector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(ExprParser::DOT);
    setState(420);
    match(ExprParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_valueContext ------------------------------------------------------------------

ExprParser::Constant_valueContext::Constant_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Numeric_valueContext* ExprParser::Constant_valueContext::numeric_value() {
  return getRuleContext<ExprParser::Numeric_valueContext>(0);
}

ExprParser::Literal_valueContext* ExprParser::Constant_valueContext::literal_value() {
  return getRuleContext<ExprParser::Literal_valueContext>(0);
}

ExprParser::Logical_valueContext* ExprParser::Constant_valueContext::logical_value() {
  return getRuleContext<ExprParser::Logical_valueContext>(0);
}

tree::TerminalNode* ExprParser::Constant_valueContext::ID() {
  return getToken(ExprParser::ID, 0);
}


size_t ExprParser::Constant_valueContext::getRuleIndex() const {
  return ExprParser::RuleConstant_value;
}


ExprParser::Constant_valueContext* ExprParser::constant_value() {
  Constant_valueContext *_localctx = _tracker.createInstance<Constant_valueContext>(_ctx, getState());
  enterRule(_localctx, 94, ExprParser::RuleConstant_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(426);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::REAL_NUMBER:
      case ExprParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(422);
        numeric_value();
        break;
      }

      case ExprParser::STRING_LITERAL:
      case ExprParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(423);
        literal_value();
        break;
      }

      case ExprParser::TRUE:
      case ExprParser::FALSE: {
        enterOuterAlt(_localctx, 3);
        setState(424);
        logical_value();
        break;
      }

      case ExprParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(425);
        match(ExprParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Numeric_valueContext ------------------------------------------------------------------

ExprParser::Numeric_valueContext::Numeric_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Numeric_valueContext::REAL_NUMBER() {
  return getToken(ExprParser::REAL_NUMBER, 0);
}

tree::TerminalNode* ExprParser::Numeric_valueContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}


size_t ExprParser::Numeric_valueContext::getRuleIndex() const {
  return ExprParser::RuleNumeric_value;
}


ExprParser::Numeric_valueContext* ExprParser::numeric_value() {
  Numeric_valueContext *_localctx = _tracker.createInstance<Numeric_valueContext>(_ctx, getState());
  enterRule(_localctx, 96, ExprParser::RuleNumeric_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    _la = _input->LA(1);
    if (!(_la == ExprParser::REAL_NUMBER

    || _la == ExprParser::INTEGER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_valueContext ------------------------------------------------------------------

ExprParser::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Literal_valueContext::STRING_LITERAL() {
  return getToken(ExprParser::STRING_LITERAL, 0);
}

tree::TerminalNode* ExprParser::Literal_valueContext::CHAR_LITERAL() {
  return getToken(ExprParser::CHAR_LITERAL, 0);
}


size_t ExprParser::Literal_valueContext::getRuleIndex() const {
  return ExprParser::RuleLiteral_value;
}


ExprParser::Literal_valueContext* ExprParser::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 98, ExprParser::RuleLiteral_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    _la = _input->LA(1);
    if (!(_la == ExprParser::STRING_LITERAL

    || _la == ExprParser::CHAR_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_valueContext ------------------------------------------------------------------

ExprParser::Logical_valueContext::Logical_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Logical_valueContext::TRUE() {
  return getToken(ExprParser::TRUE, 0);
}

tree::TerminalNode* ExprParser::Logical_valueContext::FALSE() {
  return getToken(ExprParser::FALSE, 0);
}


size_t ExprParser::Logical_valueContext::getRuleIndex() const {
  return ExprParser::RuleLogical_value;
}


ExprParser::Logical_valueContext* ExprParser::logical_value() {
  Logical_valueContext *_localctx = _tracker.createInstance<Logical_valueContext>(_ctx, getState());
  enterRule(_localctx, 100, ExprParser::RuleLogical_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    _la = _input->LA(1);
    if (!(_la == ExprParser::TRUE

    || _la == ExprParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_opContext ------------------------------------------------------------------

ExprParser::Relational_opContext::Relational_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Relational_opContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::Relational_opContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::Relational_opContext::GTE() {
  return getToken(ExprParser::GTE, 0);
}

tree::TerminalNode* ExprParser::Relational_opContext::LTE() {
  return getToken(ExprParser::LTE, 0);
}

tree::TerminalNode* ExprParser::Relational_opContext::EQUALS_OP() {
  return getToken(ExprParser::EQUALS_OP, 0);
}

tree::TerminalNode* ExprParser::Relational_opContext::NOT_EQUALS_OP() {
  return getToken(ExprParser::NOT_EQUALS_OP, 0);
}


size_t ExprParser::Relational_opContext::getRuleIndex() const {
  return ExprParser::RuleRelational_op;
}


ExprParser::Relational_opContext* ExprParser::relational_op() {
  Relational_opContext *_localctx = _tracker.createInstance<Relational_opContext>(_ctx, getState());
  enterRule(_localctx, 102, ExprParser::RuleRelational_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 141863388262170624) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

ExprParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SignContext::PLUS() {
  return getToken(ExprParser::PLUS, 0);
}

tree::TerminalNode* ExprParser::SignContext::MINUS() {
  return getToken(ExprParser::MINUS, 0);
}


size_t ExprParser::SignContext::getRuleIndex() const {
  return ExprParser::RuleSign;
}


ExprParser::SignContext* ExprParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 104, ExprParser::RuleSign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    _la = _input->LA(1);
    if (!(_la == ExprParser::PLUS

    || _la == ExprParser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_opContext ------------------------------------------------------------------

ExprParser::Add_opContext::Add_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Add_opContext::PLUS() {
  return getToken(ExprParser::PLUS, 0);
}

tree::TerminalNode* ExprParser::Add_opContext::MINUS() {
  return getToken(ExprParser::MINUS, 0);
}

tree::TerminalNode* ExprParser::Add_opContext::OR() {
  return getToken(ExprParser::OR, 0);
}


size_t ExprParser::Add_opContext::getRuleIndex() const {
  return ExprParser::RuleAdd_op;
}


ExprParser::Add_opContext* ExprParser::add_op() {
  Add_opContext *_localctx = _tracker.createInstance<Add_opContext>(_ctx, getState());
  enterRule(_localctx, 106, ExprParser::RuleAdd_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 569547023187968) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_opContext ------------------------------------------------------------------

ExprParser::Mul_opContext::Mul_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Mul_opContext::MULT() {
  return getToken(ExprParser::MULT, 0);
}

tree::TerminalNode* ExprParser::Mul_opContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

tree::TerminalNode* ExprParser::Mul_opContext::INT_DIV() {
  return getToken(ExprParser::INT_DIV, 0);
}

tree::TerminalNode* ExprParser::Mul_opContext::MOD() {
  return getToken(ExprParser::MOD, 0);
}

tree::TerminalNode* ExprParser::Mul_opContext::AND() {
  return getToken(ExprParser::AND, 0);
}


size_t ExprParser::Mul_opContext::getRuleIndex() const {
  return ExprParser::RuleMul_op;
}


ExprParser::Mul_opContext* ExprParser::mul_op() {
  Mul_opContext *_localctx = _tracker.createInstance<Mul_opContext>(_ctx, getState());
  enterRule(_localctx, 108, ExprParser::RuleMul_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 413416372043776) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprParserInitialize();
#else
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
#endif
}
