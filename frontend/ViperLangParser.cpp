
// Generated from ViperLang.g4 by ANTLR 4.13.2


#include "ViperLangListener.h"
#include "ViperLangVisitor.h"

#include "ViperLangParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ViperLangParserStaticData final {
  ViperLangParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ViperLangParserStaticData(const ViperLangParserStaticData&) = delete;
  ViperLangParserStaticData(ViperLangParserStaticData&&) = delete;
  ViperLangParserStaticData& operator=(const ViperLangParserStaticData&) = delete;
  ViperLangParserStaticData& operator=(ViperLangParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag viperlangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ViperLangParserStaticData> viperlangParserStaticData = nullptr;

void viperlangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (viperlangParserStaticData != nullptr) {
    return;
  }
#else
  assert(viperlangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ViperLangParserStaticData>(
    std::vector<std::string>{
      "program", "func_def", "func_name", "arguments", "argument", "type", 
      "for_expression", "if_expression", "if_statement", "elif_statement", 
      "else_statement", "body", "statement", "expression", "var_def", "call_func", 
      "vars", "cond_expr", "expr", "var_name"
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
  	4,1,24,185,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,4,0,42,8,0,11,
  	0,12,0,43,1,1,1,1,1,1,1,1,3,1,50,8,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,
  	1,3,1,3,1,3,3,3,63,8,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,7,1,7,5,7,83,8,7,10,7,12,7,86,9,7,1,7,5,7,89,8,7,
  	10,7,12,7,92,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,11,4,11,112,8,11,11,11,12,11,113,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,127,8,12,1,13,1,13,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,3,15,141,8,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,3,16,149,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,5,17,162,8,17,10,17,12,17,165,9,17,1,18,1,18,1,18,
  	3,18,170,8,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,178,8,18,10,18,12,18,
  	181,9,18,1,19,1,19,1,19,0,2,34,36,20,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,0,3,1,0,15,16,1,0,17,18,1,0,19,20,182,0,41,1,0,0,
  	0,2,45,1,0,0,0,4,55,1,0,0,0,6,62,1,0,0,0,8,64,1,0,0,0,10,67,1,0,0,0,12,
  	69,1,0,0,0,14,80,1,0,0,0,16,95,1,0,0,0,18,101,1,0,0,0,20,107,1,0,0,0,
  	22,111,1,0,0,0,24,126,1,0,0,0,26,128,1,0,0,0,28,132,1,0,0,0,30,137,1,
  	0,0,0,32,148,1,0,0,0,34,150,1,0,0,0,36,169,1,0,0,0,38,182,1,0,0,0,40,
  	42,3,2,1,0,41,40,1,0,0,0,42,43,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,
  	1,1,0,0,0,45,46,5,1,0,0,46,47,3,4,2,0,47,49,5,2,0,0,48,50,3,6,3,0,49,
  	48,1,0,0,0,49,50,1,0,0,0,50,51,1,0,0,0,51,52,5,3,0,0,52,53,3,22,11,0,
  	53,54,5,4,0,0,54,3,1,0,0,0,55,56,5,22,0,0,56,5,1,0,0,0,57,63,3,8,4,0,
  	58,59,3,8,4,0,59,60,5,5,0,0,60,61,3,8,4,0,61,63,1,0,0,0,62,57,1,0,0,0,
  	62,58,1,0,0,0,63,7,1,0,0,0,64,65,3,10,5,0,65,66,3,38,19,0,66,9,1,0,0,
  	0,67,68,5,6,0,0,68,11,1,0,0,0,69,70,5,7,0,0,70,71,5,2,0,0,71,72,3,28,
  	14,0,72,73,5,8,0,0,73,74,3,34,17,0,74,75,5,8,0,0,75,76,3,22,11,0,76,77,
  	5,3,0,0,77,78,3,22,11,0,78,79,5,4,0,0,79,13,1,0,0,0,80,84,3,16,8,0,81,
  	83,3,18,9,0,82,81,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,0,85,
  	90,1,0,0,0,86,84,1,0,0,0,87,89,3,20,10,0,88,87,1,0,0,0,89,92,1,0,0,0,
  	90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,0,0,0,93,94,5,4,0,0,
  	94,15,1,0,0,0,95,96,5,9,0,0,96,97,5,2,0,0,97,98,3,34,17,0,98,99,5,3,0,
  	0,99,100,3,22,11,0,100,17,1,0,0,0,101,102,5,10,0,0,102,103,5,2,0,0,103,
  	104,3,34,17,0,104,105,5,3,0,0,105,106,3,22,11,0,106,19,1,0,0,0,107,108,
  	5,11,0,0,108,109,3,22,11,0,109,21,1,0,0,0,110,112,3,24,12,0,111,110,1,
  	0,0,0,112,113,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,23,1,0,0,0,
  	115,116,3,28,14,0,116,117,5,8,0,0,117,127,1,0,0,0,118,119,3,30,15,0,119,
  	120,5,8,0,0,120,127,1,0,0,0,121,127,3,12,6,0,122,127,3,14,7,0,123,124,
  	3,26,13,0,124,125,5,8,0,0,125,127,1,0,0,0,126,115,1,0,0,0,126,118,1,0,
  	0,0,126,121,1,0,0,0,126,122,1,0,0,0,126,123,1,0,0,0,127,25,1,0,0,0,128,
  	129,3,38,19,0,129,130,5,12,0,0,130,131,3,36,18,0,131,27,1,0,0,0,132,133,
  	3,10,5,0,133,134,3,38,19,0,134,135,5,12,0,0,135,136,3,36,18,0,136,29,
  	1,0,0,0,137,138,3,4,2,0,138,140,5,2,0,0,139,141,3,32,16,0,140,139,1,0,
  	0,0,140,141,1,0,0,0,141,142,1,0,0,0,142,143,5,3,0,0,143,31,1,0,0,0,144,
  	149,5,22,0,0,145,146,5,22,0,0,146,147,5,5,0,0,147,149,5,22,0,0,148,144,
  	1,0,0,0,148,145,1,0,0,0,149,33,1,0,0,0,150,151,6,17,-1,0,151,152,3,36,
  	18,0,152,153,7,0,0,0,153,154,3,36,18,0,154,163,1,0,0,0,155,156,10,3,0,
  	0,156,157,5,13,0,0,157,162,3,34,17,4,158,159,10,2,0,0,159,160,5,14,0,
  	0,160,162,3,34,17,3,161,155,1,0,0,0,161,158,1,0,0,0,162,165,1,0,0,0,163,
  	161,1,0,0,0,163,164,1,0,0,0,164,35,1,0,0,0,165,163,1,0,0,0,166,170,6,
  	18,-1,0,167,170,5,21,0,0,168,170,3,38,19,0,169,166,1,0,0,0,169,167,1,
  	0,0,0,169,168,1,0,0,0,170,179,1,0,0,0,171,172,10,4,0,0,172,173,7,1,0,
  	0,173,178,3,36,18,5,174,175,10,3,0,0,175,176,7,2,0,0,176,178,3,36,18,
  	4,177,171,1,0,0,0,177,174,1,0,0,0,178,181,1,0,0,0,179,177,1,0,0,0,179,
  	180,1,0,0,0,180,37,1,0,0,0,181,179,1,0,0,0,182,183,5,22,0,0,183,39,1,
  	0,0,0,14,43,49,62,84,90,113,126,140,148,161,163,169,177,179
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  viperlangParserStaticData = std::move(staticData);
}

}

ViperLangParser::ViperLangParser(TokenStream *input) : ViperLangParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ViperLangParser::ViperLangParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ViperLangParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *viperlangParserStaticData->atn, viperlangParserStaticData->decisionToDFA, viperlangParserStaticData->sharedContextCache, options);
}

ViperLangParser::~ViperLangParser() {
  delete _interpreter;
}

const atn::ATN& ViperLangParser::getATN() const {
  return *viperlangParserStaticData->atn;
}

std::string ViperLangParser::getGrammarFileName() const {
  return "ViperLang.g4";
}

const std::vector<std::string>& ViperLangParser::getRuleNames() const {
  return viperlangParserStaticData->ruleNames;
}

const dfa::Vocabulary& ViperLangParser::getVocabulary() const {
  return viperlangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ViperLangParser::getSerializedATN() const {
  return viperlangParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ViperLangParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ViperLangParser::Func_defContext *> ViperLangParser::ProgramContext::func_def() {
  return getRuleContexts<ViperLangParser::Func_defContext>();
}

ViperLangParser::Func_defContext* ViperLangParser::ProgramContext::func_def(size_t i) {
  return getRuleContext<ViperLangParser::Func_defContext>(i);
}


size_t ViperLangParser::ProgramContext::getRuleIndex() const {
  return ViperLangParser::RuleProgram;
}

void ViperLangParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ViperLangParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any ViperLangParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ProgramContext* ViperLangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ViperLangParser::RuleProgram);
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
    setState(41); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(40);
      func_def();
      setState(43); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ViperLangParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_defContext ------------------------------------------------------------------

ViperLangParser::Func_defContext::Func_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Func_nameContext* ViperLangParser::Func_defContext::func_name() {
  return getRuleContext<ViperLangParser::Func_nameContext>(0);
}

ViperLangParser::BodyContext* ViperLangParser::Func_defContext::body() {
  return getRuleContext<ViperLangParser::BodyContext>(0);
}

ViperLangParser::ArgumentsContext* ViperLangParser::Func_defContext::arguments() {
  return getRuleContext<ViperLangParser::ArgumentsContext>(0);
}


size_t ViperLangParser::Func_defContext::getRuleIndex() const {
  return ViperLangParser::RuleFunc_def;
}

void ViperLangParser::Func_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_def(this);
}

void ViperLangParser::Func_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_def(this);
}


std::any ViperLangParser::Func_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFunc_def(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Func_defContext* ViperLangParser::func_def() {
  Func_defContext *_localctx = _tracker.createInstance<Func_defContext>(_ctx, getState());
  enterRule(_localctx, 2, ViperLangParser::RuleFunc_def);
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
    setState(45);
    match(ViperLangParser::T__0);
    setState(46);
    func_name();
    setState(47);
    match(ViperLangParser::T__1);
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ViperLangParser::T__5) {
      setState(48);
      arguments();
    }
    setState(51);
    match(ViperLangParser::T__2);
    setState(52);
    body();
    setState(53);
    match(ViperLangParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_nameContext ------------------------------------------------------------------

ViperLangParser::Func_nameContext::Func_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::Func_nameContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}


size_t ViperLangParser::Func_nameContext::getRuleIndex() const {
  return ViperLangParser::RuleFunc_name;
}

void ViperLangParser::Func_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_name(this);
}

void ViperLangParser::Func_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_name(this);
}


std::any ViperLangParser::Func_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFunc_name(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Func_nameContext* ViperLangParser::func_name() {
  Func_nameContext *_localctx = _tracker.createInstance<Func_nameContext>(_ctx, getState());
  enterRule(_localctx, 4, ViperLangParser::RuleFunc_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(ViperLangParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

ViperLangParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ViperLangParser::ArgumentContext *> ViperLangParser::ArgumentsContext::argument() {
  return getRuleContexts<ViperLangParser::ArgumentContext>();
}

ViperLangParser::ArgumentContext* ViperLangParser::ArgumentsContext::argument(size_t i) {
  return getRuleContext<ViperLangParser::ArgumentContext>(i);
}


size_t ViperLangParser::ArgumentsContext::getRuleIndex() const {
  return ViperLangParser::RuleArguments;
}

void ViperLangParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void ViperLangParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


std::any ViperLangParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ArgumentsContext* ViperLangParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 6, ViperLangParser::RuleArguments);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(57);
      argument();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(58);
      argument();
      setState(59);
      match(ViperLangParser::T__4);
      setState(60);
      argument();
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

//----------------- ArgumentContext ------------------------------------------------------------------

ViperLangParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::TypeContext* ViperLangParser::ArgumentContext::type() {
  return getRuleContext<ViperLangParser::TypeContext>(0);
}

ViperLangParser::Var_nameContext* ViperLangParser::ArgumentContext::var_name() {
  return getRuleContext<ViperLangParser::Var_nameContext>(0);
}


size_t ViperLangParser::ArgumentContext::getRuleIndex() const {
  return ViperLangParser::RuleArgument;
}

void ViperLangParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void ViperLangParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


std::any ViperLangParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ArgumentContext* ViperLangParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 8, ViperLangParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    type();
    setState(65);
    var_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ViperLangParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ViperLangParser::TypeContext::getRuleIndex() const {
  return ViperLangParser::RuleType;
}

void ViperLangParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void ViperLangParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any ViperLangParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::TypeContext* ViperLangParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, ViperLangParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(ViperLangParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_expressionContext ------------------------------------------------------------------

ViperLangParser::For_expressionContext::For_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Var_defContext* ViperLangParser::For_expressionContext::var_def() {
  return getRuleContext<ViperLangParser::Var_defContext>(0);
}

ViperLangParser::Cond_exprContext* ViperLangParser::For_expressionContext::cond_expr() {
  return getRuleContext<ViperLangParser::Cond_exprContext>(0);
}

std::vector<ViperLangParser::BodyContext *> ViperLangParser::For_expressionContext::body() {
  return getRuleContexts<ViperLangParser::BodyContext>();
}

ViperLangParser::BodyContext* ViperLangParser::For_expressionContext::body(size_t i) {
  return getRuleContext<ViperLangParser::BodyContext>(i);
}


size_t ViperLangParser::For_expressionContext::getRuleIndex() const {
  return ViperLangParser::RuleFor_expression;
}

void ViperLangParser::For_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_expression(this);
}

void ViperLangParser::For_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_expression(this);
}


std::any ViperLangParser::For_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFor_expression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::For_expressionContext* ViperLangParser::for_expression() {
  For_expressionContext *_localctx = _tracker.createInstance<For_expressionContext>(_ctx, getState());
  enterRule(_localctx, 12, ViperLangParser::RuleFor_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(ViperLangParser::T__6);
    setState(70);
    match(ViperLangParser::T__1);
    setState(71);
    var_def();
    setState(72);
    match(ViperLangParser::T__7);
    setState(73);
    cond_expr(0);
    setState(74);
    match(ViperLangParser::T__7);
    setState(75);
    body();
    setState(76);
    match(ViperLangParser::T__2);
    setState(77);
    body();
    setState(78);
    match(ViperLangParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_expressionContext ------------------------------------------------------------------

ViperLangParser::If_expressionContext::If_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::If_statementContext* ViperLangParser::If_expressionContext::if_statement() {
  return getRuleContext<ViperLangParser::If_statementContext>(0);
}

std::vector<ViperLangParser::Elif_statementContext *> ViperLangParser::If_expressionContext::elif_statement() {
  return getRuleContexts<ViperLangParser::Elif_statementContext>();
}

ViperLangParser::Elif_statementContext* ViperLangParser::If_expressionContext::elif_statement(size_t i) {
  return getRuleContext<ViperLangParser::Elif_statementContext>(i);
}

std::vector<ViperLangParser::Else_statementContext *> ViperLangParser::If_expressionContext::else_statement() {
  return getRuleContexts<ViperLangParser::Else_statementContext>();
}

ViperLangParser::Else_statementContext* ViperLangParser::If_expressionContext::else_statement(size_t i) {
  return getRuleContext<ViperLangParser::Else_statementContext>(i);
}


size_t ViperLangParser::If_expressionContext::getRuleIndex() const {
  return ViperLangParser::RuleIf_expression;
}

void ViperLangParser::If_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_expression(this);
}

void ViperLangParser::If_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_expression(this);
}


std::any ViperLangParser::If_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitIf_expression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::If_expressionContext* ViperLangParser::if_expression() {
  If_expressionContext *_localctx = _tracker.createInstance<If_expressionContext>(_ctx, getState());
  enterRule(_localctx, 14, ViperLangParser::RuleIf_expression);
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
    setState(80);
    if_statement();
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ViperLangParser::T__9) {
      setState(81);
      elif_statement();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ViperLangParser::T__10) {
      setState(87);
      else_statement();
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    match(ViperLangParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

ViperLangParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Cond_exprContext* ViperLangParser::If_statementContext::cond_expr() {
  return getRuleContext<ViperLangParser::Cond_exprContext>(0);
}

ViperLangParser::BodyContext* ViperLangParser::If_statementContext::body() {
  return getRuleContext<ViperLangParser::BodyContext>(0);
}


size_t ViperLangParser::If_statementContext::getRuleIndex() const {
  return ViperLangParser::RuleIf_statement;
}

void ViperLangParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void ViperLangParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any ViperLangParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::If_statementContext* ViperLangParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, ViperLangParser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(ViperLangParser::T__8);
    setState(96);
    match(ViperLangParser::T__1);
    setState(97);
    cond_expr(0);
    setState(98);
    match(ViperLangParser::T__2);
    setState(99);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Elif_statementContext ------------------------------------------------------------------

ViperLangParser::Elif_statementContext::Elif_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Cond_exprContext* ViperLangParser::Elif_statementContext::cond_expr() {
  return getRuleContext<ViperLangParser::Cond_exprContext>(0);
}

ViperLangParser::BodyContext* ViperLangParser::Elif_statementContext::body() {
  return getRuleContext<ViperLangParser::BodyContext>(0);
}


size_t ViperLangParser::Elif_statementContext::getRuleIndex() const {
  return ViperLangParser::RuleElif_statement;
}

void ViperLangParser::Elif_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElif_statement(this);
}

void ViperLangParser::Elif_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElif_statement(this);
}


std::any ViperLangParser::Elif_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitElif_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Elif_statementContext* ViperLangParser::elif_statement() {
  Elif_statementContext *_localctx = _tracker.createInstance<Elif_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, ViperLangParser::RuleElif_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(ViperLangParser::T__9);
    setState(102);
    match(ViperLangParser::T__1);
    setState(103);
    cond_expr(0);
    setState(104);
    match(ViperLangParser::T__2);
    setState(105);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statementContext ------------------------------------------------------------------

ViperLangParser::Else_statementContext::Else_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::BodyContext* ViperLangParser::Else_statementContext::body() {
  return getRuleContext<ViperLangParser::BodyContext>(0);
}


size_t ViperLangParser::Else_statementContext::getRuleIndex() const {
  return ViperLangParser::RuleElse_statement;
}

void ViperLangParser::Else_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_statement(this);
}

void ViperLangParser::Else_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_statement(this);
}


std::any ViperLangParser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Else_statementContext* ViperLangParser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, ViperLangParser::RuleElse_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(ViperLangParser::T__10);
    setState(108);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

ViperLangParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ViperLangParser::StatementContext *> ViperLangParser::BodyContext::statement() {
  return getRuleContexts<ViperLangParser::StatementContext>();
}

ViperLangParser::StatementContext* ViperLangParser::BodyContext::statement(size_t i) {
  return getRuleContext<ViperLangParser::StatementContext>(i);
}


size_t ViperLangParser::BodyContext::getRuleIndex() const {
  return ViperLangParser::RuleBody;
}

void ViperLangParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void ViperLangParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}


std::any ViperLangParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::BodyContext* ViperLangParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 22, ViperLangParser::RuleBody);
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
    setState(111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      statement();
      setState(113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4195008) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ViperLangParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Var_defContext* ViperLangParser::StatementContext::var_def() {
  return getRuleContext<ViperLangParser::Var_defContext>(0);
}

ViperLangParser::Call_funcContext* ViperLangParser::StatementContext::call_func() {
  return getRuleContext<ViperLangParser::Call_funcContext>(0);
}

ViperLangParser::For_expressionContext* ViperLangParser::StatementContext::for_expression() {
  return getRuleContext<ViperLangParser::For_expressionContext>(0);
}

ViperLangParser::If_expressionContext* ViperLangParser::StatementContext::if_expression() {
  return getRuleContext<ViperLangParser::If_expressionContext>(0);
}

ViperLangParser::ExpressionContext* ViperLangParser::StatementContext::expression() {
  return getRuleContext<ViperLangParser::ExpressionContext>(0);
}


size_t ViperLangParser::StatementContext::getRuleIndex() const {
  return ViperLangParser::RuleStatement;
}

void ViperLangParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ViperLangParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any ViperLangParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::StatementContext* ViperLangParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, ViperLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      var_def();
      setState(116);
      match(ViperLangParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(118);
      call_func();
      setState(119);
      match(ViperLangParser::T__7);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(121);
      for_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(122);
      if_expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(123);
      expression();
      setState(124);
      match(ViperLangParser::T__7);
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

//----------------- ExpressionContext ------------------------------------------------------------------

ViperLangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Var_nameContext* ViperLangParser::ExpressionContext::var_name() {
  return getRuleContext<ViperLangParser::Var_nameContext>(0);
}

ViperLangParser::ExprContext* ViperLangParser::ExpressionContext::expr() {
  return getRuleContext<ViperLangParser::ExprContext>(0);
}


size_t ViperLangParser::ExpressionContext::getRuleIndex() const {
  return ViperLangParser::RuleExpression;
}

void ViperLangParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ViperLangParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any ViperLangParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ExpressionContext* ViperLangParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, ViperLangParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    var_name();
    setState(129);
    match(ViperLangParser::T__11);
    setState(130);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_defContext ------------------------------------------------------------------

ViperLangParser::Var_defContext::Var_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::TypeContext* ViperLangParser::Var_defContext::type() {
  return getRuleContext<ViperLangParser::TypeContext>(0);
}

ViperLangParser::Var_nameContext* ViperLangParser::Var_defContext::var_name() {
  return getRuleContext<ViperLangParser::Var_nameContext>(0);
}

ViperLangParser::ExprContext* ViperLangParser::Var_defContext::expr() {
  return getRuleContext<ViperLangParser::ExprContext>(0);
}


size_t ViperLangParser::Var_defContext::getRuleIndex() const {
  return ViperLangParser::RuleVar_def;
}

void ViperLangParser::Var_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_def(this);
}

void ViperLangParser::Var_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_def(this);
}


std::any ViperLangParser::Var_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVar_def(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Var_defContext* ViperLangParser::var_def() {
  Var_defContext *_localctx = _tracker.createInstance<Var_defContext>(_ctx, getState());
  enterRule(_localctx, 28, ViperLangParser::RuleVar_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    type();
    setState(133);
    var_name();
    setState(134);
    match(ViperLangParser::T__11);
    setState(135);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_funcContext ------------------------------------------------------------------

ViperLangParser::Call_funcContext::Call_funcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Func_nameContext* ViperLangParser::Call_funcContext::func_name() {
  return getRuleContext<ViperLangParser::Func_nameContext>(0);
}

ViperLangParser::VarsContext* ViperLangParser::Call_funcContext::vars() {
  return getRuleContext<ViperLangParser::VarsContext>(0);
}


size_t ViperLangParser::Call_funcContext::getRuleIndex() const {
  return ViperLangParser::RuleCall_func;
}

void ViperLangParser::Call_funcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_func(this);
}

void ViperLangParser::Call_funcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_func(this);
}


std::any ViperLangParser::Call_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitCall_func(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Call_funcContext* ViperLangParser::call_func() {
  Call_funcContext *_localctx = _tracker.createInstance<Call_funcContext>(_ctx, getState());
  enterRule(_localctx, 30, ViperLangParser::RuleCall_func);
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
    setState(137);
    func_name();
    setState(138);
    match(ViperLangParser::T__1);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ViperLangParser::NAME) {
      setState(139);
      vars();
    }
    setState(142);
    match(ViperLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarsContext ------------------------------------------------------------------

ViperLangParser::VarsContext::VarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ViperLangParser::VarsContext::NAME() {
  return getTokens(ViperLangParser::NAME);
}

tree::TerminalNode* ViperLangParser::VarsContext::NAME(size_t i) {
  return getToken(ViperLangParser::NAME, i);
}


size_t ViperLangParser::VarsContext::getRuleIndex() const {
  return ViperLangParser::RuleVars;
}

void ViperLangParser::VarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVars(this);
}

void ViperLangParser::VarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVars(this);
}


std::any ViperLangParser::VarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVars(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::VarsContext* ViperLangParser::vars() {
  VarsContext *_localctx = _tracker.createInstance<VarsContext>(_ctx, getState());
  enterRule(_localctx, 32, ViperLangParser::RuleVars);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      match(ViperLangParser::NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(ViperLangParser::NAME);
      setState(146);
      match(ViperLangParser::T__4);
      setState(147);
      match(ViperLangParser::NAME);
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

//----------------- Cond_exprContext ------------------------------------------------------------------

ViperLangParser::Cond_exprContext::Cond_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ViperLangParser::ExprContext *> ViperLangParser::Cond_exprContext::expr() {
  return getRuleContexts<ViperLangParser::ExprContext>();
}

ViperLangParser::ExprContext* ViperLangParser::Cond_exprContext::expr(size_t i) {
  return getRuleContext<ViperLangParser::ExprContext>(i);
}

std::vector<ViperLangParser::Cond_exprContext *> ViperLangParser::Cond_exprContext::cond_expr() {
  return getRuleContexts<ViperLangParser::Cond_exprContext>();
}

ViperLangParser::Cond_exprContext* ViperLangParser::Cond_exprContext::cond_expr(size_t i) {
  return getRuleContext<ViperLangParser::Cond_exprContext>(i);
}


size_t ViperLangParser::Cond_exprContext::getRuleIndex() const {
  return ViperLangParser::RuleCond_expr;
}

void ViperLangParser::Cond_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond_expr(this);
}

void ViperLangParser::Cond_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond_expr(this);
}


std::any ViperLangParser::Cond_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitCond_expr(this);
  else
    return visitor->visitChildren(this);
}


ViperLangParser::Cond_exprContext* ViperLangParser::cond_expr() {
   return cond_expr(0);
}

ViperLangParser::Cond_exprContext* ViperLangParser::cond_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ViperLangParser::Cond_exprContext *_localctx = _tracker.createInstance<Cond_exprContext>(_ctx, parentState);
  ViperLangParser::Cond_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, ViperLangParser::RuleCond_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(151);
    expr(0);
    setState(152);
    _la = _input->LA(1);
    if (!(_la == ViperLangParser::T__14

    || _la == ViperLangParser::T__15)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(153);
    expr(0);
    _ctx->stop = _input->LT(-1);
    setState(163);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(161);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Cond_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCond_expr);
          setState(155);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(156);
          match(ViperLangParser::T__12);
          setState(157);
          cond_expr(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Cond_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCond_expr);
          setState(158);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(159);
          match(ViperLangParser::T__13);
          setState(160);
          cond_expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(165);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ViperLangParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::ExprContext::INT() {
  return getToken(ViperLangParser::INT, 0);
}

ViperLangParser::Var_nameContext* ViperLangParser::ExprContext::var_name() {
  return getRuleContext<ViperLangParser::Var_nameContext>(0);
}

std::vector<ViperLangParser::ExprContext *> ViperLangParser::ExprContext::expr() {
  return getRuleContexts<ViperLangParser::ExprContext>();
}

ViperLangParser::ExprContext* ViperLangParser::ExprContext::expr(size_t i) {
  return getRuleContext<ViperLangParser::ExprContext>(i);
}


size_t ViperLangParser::ExprContext::getRuleIndex() const {
  return ViperLangParser::RuleExpr;
}

void ViperLangParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ViperLangParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any ViperLangParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


ViperLangParser::ExprContext* ViperLangParser::expr() {
   return expr(0);
}

ViperLangParser::ExprContext* ViperLangParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ViperLangParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ViperLangParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, ViperLangParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      break;
    }

    case 2: {
      setState(167);
      match(ViperLangParser::INT);
      break;
    }

    case 3: {
      setState(168);
      var_name();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(179);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(177);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(171);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(172);
          _la = _input->LA(1);
          if (!(_la == ViperLangParser::T__16

          || _la == ViperLangParser::T__17)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(173);
          expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(174);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(175);
          _la = _input->LA(1);
          if (!(_la == ViperLangParser::T__18

          || _la == ViperLangParser::T__19)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(176);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(181);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Var_nameContext ------------------------------------------------------------------

ViperLangParser::Var_nameContext::Var_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::Var_nameContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}


size_t ViperLangParser::Var_nameContext::getRuleIndex() const {
  return ViperLangParser::RuleVar_name;
}

void ViperLangParser::Var_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_name(this);
}

void ViperLangParser::Var_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_name(this);
}


std::any ViperLangParser::Var_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVar_name(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Var_nameContext* ViperLangParser::var_name() {
  Var_nameContext *_localctx = _tracker.createInstance<Var_nameContext>(_ctx, getState());
  enterRule(_localctx, 38, ViperLangParser::RuleVar_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(ViperLangParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ViperLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return cond_exprSempred(antlrcpp::downCast<Cond_exprContext *>(context), predicateIndex);
    case 18: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ViperLangParser::cond_exprSempred(Cond_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool ViperLangParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void ViperLangParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  viperlangParserInitialize();
#else
  ::antlr4::internal::call_once(viperlangParserOnceFlag, viperlangParserInitialize);
#endif
}
