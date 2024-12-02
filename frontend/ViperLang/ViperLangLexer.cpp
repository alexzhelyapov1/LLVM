
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
      "T__17", "T__18", "T__19", "T__20", "NAME", "INT", "STATEMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'function'", "'('", "','", "')'", "'end'", "'int'", "'uint'", 
      "'['", "']'", "'*'", "';'", "'='", "'/'", "'+'", "'-'", "'if'", "'and'", 
      "'or'", "'<'", "'>'", "'for'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "NAME", "INT", "STATEMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,135,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,
  	1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,
  	13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,
  	18,1,19,1,19,1,20,1,20,1,20,1,20,1,21,4,21,115,8,21,11,21,12,21,116,1,
  	22,4,22,120,8,22,11,22,12,22,121,1,23,4,23,125,8,23,11,23,12,23,126,1,
  	24,4,24,130,8,24,11,24,12,24,131,1,24,1,24,0,0,25,1,1,3,2,5,3,7,4,9,5,
  	11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,
  	18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,1,0,4,3,0,65,90,95,95,97,
  	122,1,0,48,57,2,0,65,90,97,122,3,0,9,10,13,13,32,32,138,0,1,1,0,0,0,0,
  	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,
  	0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,
  	25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,
  	0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,
  	0,0,47,1,0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,3,60,1,0,0,0,5,62,1,0,0,0,7,
  	64,1,0,0,0,9,66,1,0,0,0,11,70,1,0,0,0,13,74,1,0,0,0,15,79,1,0,0,0,17,
  	81,1,0,0,0,19,83,1,0,0,0,21,85,1,0,0,0,23,87,1,0,0,0,25,89,1,0,0,0,27,
  	91,1,0,0,0,29,93,1,0,0,0,31,95,1,0,0,0,33,98,1,0,0,0,35,102,1,0,0,0,37,
  	105,1,0,0,0,39,107,1,0,0,0,41,109,1,0,0,0,43,114,1,0,0,0,45,119,1,0,0,
  	0,47,124,1,0,0,0,49,129,1,0,0,0,51,52,5,102,0,0,52,53,5,117,0,0,53,54,
  	5,110,0,0,54,55,5,99,0,0,55,56,5,116,0,0,56,57,5,105,0,0,57,58,5,111,
  	0,0,58,59,5,110,0,0,59,2,1,0,0,0,60,61,5,40,0,0,61,4,1,0,0,0,62,63,5,
  	44,0,0,63,6,1,0,0,0,64,65,5,41,0,0,65,8,1,0,0,0,66,67,5,101,0,0,67,68,
  	5,110,0,0,68,69,5,100,0,0,69,10,1,0,0,0,70,71,5,105,0,0,71,72,5,110,0,
  	0,72,73,5,116,0,0,73,12,1,0,0,0,74,75,5,117,0,0,75,76,5,105,0,0,76,77,
  	5,110,0,0,77,78,5,116,0,0,78,14,1,0,0,0,79,80,5,91,0,0,80,16,1,0,0,0,
  	81,82,5,93,0,0,82,18,1,0,0,0,83,84,5,42,0,0,84,20,1,0,0,0,85,86,5,59,
  	0,0,86,22,1,0,0,0,87,88,5,61,0,0,88,24,1,0,0,0,89,90,5,47,0,0,90,26,1,
  	0,0,0,91,92,5,43,0,0,92,28,1,0,0,0,93,94,5,45,0,0,94,30,1,0,0,0,95,96,
  	5,105,0,0,96,97,5,102,0,0,97,32,1,0,0,0,98,99,5,97,0,0,99,100,5,110,0,
  	0,100,101,5,100,0,0,101,34,1,0,0,0,102,103,5,111,0,0,103,104,5,114,0,
  	0,104,36,1,0,0,0,105,106,5,60,0,0,106,38,1,0,0,0,107,108,5,62,0,0,108,
  	40,1,0,0,0,109,110,5,102,0,0,110,111,5,111,0,0,111,112,5,114,0,0,112,
  	42,1,0,0,0,113,115,7,0,0,0,114,113,1,0,0,0,115,116,1,0,0,0,116,114,1,
  	0,0,0,116,117,1,0,0,0,117,44,1,0,0,0,118,120,7,1,0,0,119,118,1,0,0,0,
  	120,121,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,46,1,0,0,0,123,125,
  	7,2,0,0,124,123,1,0,0,0,125,126,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,
  	0,127,48,1,0,0,0,128,130,7,3,0,0,129,128,1,0,0,0,130,131,1,0,0,0,131,
  	129,1,0,0,0,131,132,1,0,0,0,132,133,1,0,0,0,133,134,6,24,0,0,134,50,1,
  	0,0,0,5,0,116,121,126,131,1,6,0,0
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
