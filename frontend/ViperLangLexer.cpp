
// Generated from ViperLang.g4 by ANTLR 4.13.2


#include "ViperLangLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ViperLangLexerStaticData final {
  ViperLangLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ViperLangLexerStaticData(const ViperLangLexerStaticData&) = delete;
  ViperLangLexerStaticData(ViperLangLexerStaticData&&) = delete;
  ViperLangLexerStaticData& operator=(const ViperLangLexerStaticData&) = delete;
  ViperLangLexerStaticData& operator=(ViperLangLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag viperlanglexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ViperLangLexerStaticData> viperlanglexerLexerStaticData = nullptr;

void viperlanglexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (viperlanglexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(viperlanglexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ViperLangLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "INT", "NAME", "BODY", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'function'", "'('", "')'", "'end'", "','", "'int'", "'for'", 
      "';'", "'if'", "'elif'", "'else'", "'='", "'and'", "'or'", "'<'", 
      "'>'", "'*'", "'/'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "INT", "NAME", "BODY", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,24,134,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,
  	7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,
  	1,17,1,18,1,18,1,19,1,19,1,20,4,20,114,8,20,11,20,12,20,115,1,21,4,21,
  	119,8,21,11,21,12,21,120,1,22,4,22,124,8,22,11,22,12,22,125,1,23,4,23,
  	129,8,23,11,23,12,23,130,1,23,1,23,0,0,24,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,43,22,45,23,47,24,1,0,4,1,0,48,57,1,0,65,90,1,0,97,122,
  	3,0,9,10,13,13,32,32,137,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,
  	0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,
  	19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,
  	0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,
  	0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,1,49,1,0,0,0,3,
  	58,1,0,0,0,5,60,1,0,0,0,7,62,1,0,0,0,9,66,1,0,0,0,11,68,1,0,0,0,13,72,
  	1,0,0,0,15,76,1,0,0,0,17,78,1,0,0,0,19,81,1,0,0,0,21,86,1,0,0,0,23,91,
  	1,0,0,0,25,93,1,0,0,0,27,97,1,0,0,0,29,100,1,0,0,0,31,102,1,0,0,0,33,
  	104,1,0,0,0,35,106,1,0,0,0,37,108,1,0,0,0,39,110,1,0,0,0,41,113,1,0,0,
  	0,43,118,1,0,0,0,45,123,1,0,0,0,47,128,1,0,0,0,49,50,5,102,0,0,50,51,
  	5,117,0,0,51,52,5,110,0,0,52,53,5,99,0,0,53,54,5,116,0,0,54,55,5,105,
  	0,0,55,56,5,111,0,0,56,57,5,110,0,0,57,2,1,0,0,0,58,59,5,40,0,0,59,4,
  	1,0,0,0,60,61,5,41,0,0,61,6,1,0,0,0,62,63,5,101,0,0,63,64,5,110,0,0,64,
  	65,5,100,0,0,65,8,1,0,0,0,66,67,5,44,0,0,67,10,1,0,0,0,68,69,5,105,0,
  	0,69,70,5,110,0,0,70,71,5,116,0,0,71,12,1,0,0,0,72,73,5,102,0,0,73,74,
  	5,111,0,0,74,75,5,114,0,0,75,14,1,0,0,0,76,77,5,59,0,0,77,16,1,0,0,0,
  	78,79,5,105,0,0,79,80,5,102,0,0,80,18,1,0,0,0,81,82,5,101,0,0,82,83,5,
  	108,0,0,83,84,5,105,0,0,84,85,5,102,0,0,85,20,1,0,0,0,86,87,5,101,0,0,
  	87,88,5,108,0,0,88,89,5,115,0,0,89,90,5,101,0,0,90,22,1,0,0,0,91,92,5,
  	61,0,0,92,24,1,0,0,0,93,94,5,97,0,0,94,95,5,110,0,0,95,96,5,100,0,0,96,
  	26,1,0,0,0,97,98,5,111,0,0,98,99,5,114,0,0,99,28,1,0,0,0,100,101,5,60,
  	0,0,101,30,1,0,0,0,102,103,5,62,0,0,103,32,1,0,0,0,104,105,5,42,0,0,105,
  	34,1,0,0,0,106,107,5,47,0,0,107,36,1,0,0,0,108,109,5,43,0,0,109,38,1,
  	0,0,0,110,111,5,45,0,0,111,40,1,0,0,0,112,114,7,0,0,0,113,112,1,0,0,0,
  	114,115,1,0,0,0,115,113,1,0,0,0,115,116,1,0,0,0,116,42,1,0,0,0,117,119,
  	7,1,0,0,118,117,1,0,0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,
  	0,121,44,1,0,0,0,122,124,7,2,0,0,123,122,1,0,0,0,124,125,1,0,0,0,125,
  	123,1,0,0,0,125,126,1,0,0,0,126,46,1,0,0,0,127,129,7,3,0,0,128,127,1,
  	0,0,0,129,130,1,0,0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,132,1,0,0,0,
  	132,133,6,23,0,0,133,48,1,0,0,0,5,0,115,120,125,130,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  viperlanglexerLexerStaticData = std::move(staticData);
}

}

ViperLangLexer::ViperLangLexer(CharStream *input) : Lexer(input) {
  ViperLangLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *viperlanglexerLexerStaticData->atn, viperlanglexerLexerStaticData->decisionToDFA, viperlanglexerLexerStaticData->sharedContextCache);
}

ViperLangLexer::~ViperLangLexer() {
  delete _interpreter;
}

std::string ViperLangLexer::getGrammarFileName() const {
  return "ViperLang.g4";
}

const std::vector<std::string>& ViperLangLexer::getRuleNames() const {
  return viperlanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ViperLangLexer::getChannelNames() const {
  return viperlanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ViperLangLexer::getModeNames() const {
  return viperlanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ViperLangLexer::getVocabulary() const {
  return viperlanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ViperLangLexer::getSerializedATN() const {
  return viperlanglexerLexerStaticData->serializedATN;
}

const atn::ATN& ViperLangLexer::getATN() const {
  return *viperlanglexerLexerStaticData->atn;
}




void ViperLangLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  viperlanglexerLexerInitialize();
#else
  ::antlr4::internal::call_once(viperlanglexerLexerOnceFlag, viperlanglexerLexerInitialize);
#endif
}