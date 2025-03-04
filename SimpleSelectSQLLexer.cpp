
// Generated from SimpleSelectSQL.g4 by ANTLR 4.13.2


#include "SimpleSelectSQLLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SimpleSelectSQLLexerStaticData final {
  SimpleSelectSQLLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimpleSelectSQLLexerStaticData(const SimpleSelectSQLLexerStaticData&) = delete;
  SimpleSelectSQLLexerStaticData(SimpleSelectSQLLexerStaticData&&) = delete;
  SimpleSelectSQLLexerStaticData& operator=(const SimpleSelectSQLLexerStaticData&) = delete;
  SimpleSelectSQLLexerStaticData& operator=(SimpleSelectSQLLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag simpleselectsqllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimpleSelectSQLLexerStaticData> simpleselectsqllexerLexerStaticData = nullptr;

void simpleselectsqllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simpleselectsqllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(simpleselectsqllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimpleSelectSQLLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "ID", "STRING", "NUMBER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'SELECT'", "'FROM'", "'WHERE'", "';'", "','", "'AND'", "'OR'", 
      "'='", "'<>'", "'<'", "'>'", "'<='", "'>='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ID", "STRING", 
      "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,17,115,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,13,1,13,5,13,82,8,13,10,13,12,13,85,9,13,1,14,1,14,5,14,89,8,14,10,
  	14,12,14,92,9,14,1,14,1,14,1,15,4,15,97,8,15,11,15,12,15,98,1,15,1,15,
  	4,15,103,8,15,11,15,12,15,104,3,15,107,8,15,1,16,4,16,110,8,16,11,16,
  	12,16,111,1,16,1,16,0,0,17,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,1,0,5,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,1,0,39,39,1,0,48,57,3,0,9,10,13,13,32,
  	32,120,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,1,35,1,0,0,0,3,42,1,0,0,0,5,47,1,0,0,0,7,53,1,0,0,0,9,
  	55,1,0,0,0,11,57,1,0,0,0,13,61,1,0,0,0,15,64,1,0,0,0,17,66,1,0,0,0,19,
  	69,1,0,0,0,21,71,1,0,0,0,23,73,1,0,0,0,25,76,1,0,0,0,27,79,1,0,0,0,29,
  	86,1,0,0,0,31,96,1,0,0,0,33,109,1,0,0,0,35,36,5,83,0,0,36,37,5,69,0,0,
  	37,38,5,76,0,0,38,39,5,69,0,0,39,40,5,67,0,0,40,41,5,84,0,0,41,2,1,0,
  	0,0,42,43,5,70,0,0,43,44,5,82,0,0,44,45,5,79,0,0,45,46,5,77,0,0,46,4,
  	1,0,0,0,47,48,5,87,0,0,48,49,5,72,0,0,49,50,5,69,0,0,50,51,5,82,0,0,51,
  	52,5,69,0,0,52,6,1,0,0,0,53,54,5,59,0,0,54,8,1,0,0,0,55,56,5,44,0,0,56,
  	10,1,0,0,0,57,58,5,65,0,0,58,59,5,78,0,0,59,60,5,68,0,0,60,12,1,0,0,0,
  	61,62,5,79,0,0,62,63,5,82,0,0,63,14,1,0,0,0,64,65,5,61,0,0,65,16,1,0,
  	0,0,66,67,5,60,0,0,67,68,5,62,0,0,68,18,1,0,0,0,69,70,5,60,0,0,70,20,
  	1,0,0,0,71,72,5,62,0,0,72,22,1,0,0,0,73,74,5,60,0,0,74,75,5,61,0,0,75,
  	24,1,0,0,0,76,77,5,62,0,0,77,78,5,61,0,0,78,26,1,0,0,0,79,83,7,0,0,0,
  	80,82,7,1,0,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,
  	84,28,1,0,0,0,85,83,1,0,0,0,86,90,5,39,0,0,87,89,8,2,0,0,88,87,1,0,0,
  	0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,0,0,
  	0,93,94,5,39,0,0,94,30,1,0,0,0,95,97,7,3,0,0,96,95,1,0,0,0,97,98,1,0,
  	0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,106,1,0,0,0,100,102,5,46,0,0,101,103,
  	7,3,0,0,102,101,1,0,0,0,103,104,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,
  	0,105,107,1,0,0,0,106,100,1,0,0,0,106,107,1,0,0,0,107,32,1,0,0,0,108,
  	110,7,4,0,0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,
  	0,0,0,112,113,1,0,0,0,113,114,6,16,0,0,114,34,1,0,0,0,7,0,83,90,98,104,
  	106,111,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simpleselectsqllexerLexerStaticData = std::move(staticData);
}

}

SimpleSelectSQLLexer::SimpleSelectSQLLexer(CharStream *input) : Lexer(input) {
  SimpleSelectSQLLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *simpleselectsqllexerLexerStaticData->atn, simpleselectsqllexerLexerStaticData->decisionToDFA, simpleselectsqllexerLexerStaticData->sharedContextCache);
}

SimpleSelectSQLLexer::~SimpleSelectSQLLexer() {
  delete _interpreter;
}

std::string SimpleSelectSQLLexer::getGrammarFileName() const {
  return "SimpleSelectSQL.g4";
}

const std::vector<std::string>& SimpleSelectSQLLexer::getRuleNames() const {
  return simpleselectsqllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SimpleSelectSQLLexer::getChannelNames() const {
  return simpleselectsqllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SimpleSelectSQLLexer::getModeNames() const {
  return simpleselectsqllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SimpleSelectSQLLexer::getVocabulary() const {
  return simpleselectsqllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimpleSelectSQLLexer::getSerializedATN() const {
  return simpleselectsqllexerLexerStaticData->serializedATN;
}

const atn::ATN& SimpleSelectSQLLexer::getATN() const {
  return *simpleselectsqllexerLexerStaticData->atn;
}




void SimpleSelectSQLLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simpleselectsqllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(simpleselectsqllexerLexerOnceFlag, simpleselectsqllexerLexerInitialize);
#endif
}
