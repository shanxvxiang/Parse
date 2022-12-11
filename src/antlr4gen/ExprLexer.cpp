
// Generated from /home/raymon/CLionProjects/Parse/antlr4/Expr.g4 by ANTLR 4.11.1


#include "ExprLexer.h"


using namespace antlr4;



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
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
  assert(exprlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "ID", "INT", "NEWLINE", "WS", "MUL", "DIV", 
      "ADD", "SUB"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "", "", "", "", "'*'", "'/'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "ID", "INT", "NEWLINE", "WS", "MUL", "DIV", "ADD", 
      "SUB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,11,59,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,1,1,1,1,2,1,2,1,3,4,3,31,
  	8,3,11,3,12,3,32,1,4,4,4,36,8,4,11,4,12,4,37,1,5,3,5,41,8,5,1,5,1,5,1,
  	6,4,6,46,8,6,11,6,12,6,47,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,0,
  	0,11,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,1,0,3,2,0,65,
  	90,97,122,1,0,48,57,2,0,9,9,32,32,62,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,
  	0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,
  	17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,1,23,1,0,0,0,3,25,1,0,0,0,5,27,1,
  	0,0,0,7,30,1,0,0,0,9,35,1,0,0,0,11,40,1,0,0,0,13,45,1,0,0,0,15,51,1,0,
  	0,0,17,53,1,0,0,0,19,55,1,0,0,0,21,57,1,0,0,0,23,24,5,61,0,0,24,2,1,0,
  	0,0,25,26,5,40,0,0,26,4,1,0,0,0,27,28,5,41,0,0,28,6,1,0,0,0,29,31,7,0,
  	0,0,30,29,1,0,0,0,31,32,1,0,0,0,32,30,1,0,0,0,32,33,1,0,0,0,33,8,1,0,
  	0,0,34,36,7,1,0,0,35,34,1,0,0,0,36,37,1,0,0,0,37,35,1,0,0,0,37,38,1,0,
  	0,0,38,10,1,0,0,0,39,41,5,13,0,0,40,39,1,0,0,0,40,41,1,0,0,0,41,42,1,
  	0,0,0,42,43,5,10,0,0,43,12,1,0,0,0,44,46,7,2,0,0,45,44,1,0,0,0,46,47,
  	1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,49,1,0,0,0,49,50,6,6,0,0,50,14,
  	1,0,0,0,51,52,5,42,0,0,52,16,1,0,0,0,53,54,5,47,0,0,54,18,1,0,0,0,55,
  	56,5,43,0,0,56,20,1,0,0,0,57,58,5,45,0,0,58,22,1,0,0,0,5,0,32,37,40,47,
  	1,6,0,0
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
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
}
