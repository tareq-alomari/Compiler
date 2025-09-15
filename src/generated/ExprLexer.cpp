
// Generated from d:/compilersLectures/lect4/grammer/Expr.g4 by ANTLR 4.13.1


#include "ExprLexer.h"


using namespace antlr4;

using namespace antlr_generated;


using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "TYPE_INT", 
      "ID", "INT", "COMMENT", "NEWLINE", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'*'", "'/'", "'+'", "'-'", "'('", "')'", "'int'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "TYPE_INT", "ID", "INT", "COMMENT", 
      "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,14,88,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,9,1,9,5,9,52,8,9,10,9,12,9,55,9,9,1,10,4,10,58,8,10,11,10,12,
  	10,59,1,11,1,11,1,11,1,11,5,11,66,8,11,10,11,12,11,69,9,11,1,11,1,11,
  	1,11,1,11,1,12,4,12,76,8,12,11,12,12,12,77,1,12,1,12,1,13,4,13,83,8,13,
  	11,13,12,13,84,1,13,1,13,1,67,0,14,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,1,0,5,3,0,65,90,95,95,97,122,4,0,48,
  	57,65,90,95,95,97,122,1,0,48,57,2,0,10,10,13,13,2,0,9,9,32,32,92,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,31,1,0,0,0,5,33,1,0,
  	0,0,7,35,1,0,0,0,9,37,1,0,0,0,11,39,1,0,0,0,13,41,1,0,0,0,15,43,1,0,0,
  	0,17,45,1,0,0,0,19,49,1,0,0,0,21,57,1,0,0,0,23,61,1,0,0,0,25,75,1,0,0,
  	0,27,82,1,0,0,0,29,30,5,59,0,0,30,2,1,0,0,0,31,32,5,61,0,0,32,4,1,0,0,
  	0,33,34,5,42,0,0,34,6,1,0,0,0,35,36,5,47,0,0,36,8,1,0,0,0,37,38,5,43,
  	0,0,38,10,1,0,0,0,39,40,5,45,0,0,40,12,1,0,0,0,41,42,5,40,0,0,42,14,1,
  	0,0,0,43,44,5,41,0,0,44,16,1,0,0,0,45,46,5,105,0,0,46,47,5,110,0,0,47,
  	48,5,116,0,0,48,18,1,0,0,0,49,53,7,0,0,0,50,52,7,1,0,0,51,50,1,0,0,0,
  	52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,20,1,0,0,0,55,53,1,0,0,0,
  	56,58,7,2,0,0,57,56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,
  	60,22,1,0,0,0,61,62,5,47,0,0,62,63,5,47,0,0,63,67,1,0,0,0,64,66,9,0,0,
  	0,65,64,1,0,0,0,66,69,1,0,0,0,67,68,1,0,0,0,67,65,1,0,0,0,68,70,1,0,0,
  	0,69,67,1,0,0,0,70,71,7,3,0,0,71,72,1,0,0,0,72,73,6,11,0,0,73,24,1,0,
  	0,0,74,76,7,3,0,0,75,74,1,0,0,0,76,77,1,0,0,0,77,75,1,0,0,0,77,78,1,0,
  	0,0,78,79,1,0,0,0,79,80,6,12,0,0,80,26,1,0,0,0,81,83,7,4,0,0,82,81,1,
  	0,0,0,83,84,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,0,85,86,1,0,0,0,86,87,6,
  	13,0,0,87,28,1,0,0,0,6,0,53,59,67,77,84,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
#endif
}
