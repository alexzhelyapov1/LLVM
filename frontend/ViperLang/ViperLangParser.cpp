
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
      "program", "function_definition", "variable_declaration", "statement", 
      "assigment_expression", "call_expression", "expression", "if_statement", 
      "condition_expression", "for_statement"
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
  	4,1,25,157,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,4,0,22,8,0,11,0,12,0,23,1,1,1,1,1,1,1,1,3,1,
  	30,8,1,1,1,1,1,5,1,34,8,1,10,1,12,1,37,9,1,1,1,1,1,5,1,41,8,1,10,1,12,
  	1,44,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,58,8,2,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,68,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,3,4,80,8,4,1,5,1,5,1,5,3,5,85,8,5,1,5,1,5,5,5,89,8,5,10,5,
  	12,5,92,9,5,1,5,1,5,1,6,1,6,1,6,1,6,3,6,100,8,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,5,6,108,8,6,10,6,12,6,111,9,6,1,7,1,7,1,7,1,7,1,7,5,7,118,8,7,10,7,
  	12,7,121,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,
  	136,8,8,10,8,12,8,139,9,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,150,
  	8,9,10,9,12,9,153,9,9,1,9,1,9,1,9,0,2,12,16,10,0,2,4,6,8,10,12,14,16,
  	18,0,4,1,0,6,7,2,0,10,10,13,13,1,0,14,15,1,0,19,20,166,0,21,1,0,0,0,2,
  	25,1,0,0,0,4,57,1,0,0,0,6,67,1,0,0,0,8,79,1,0,0,0,10,81,1,0,0,0,12,99,
  	1,0,0,0,14,112,1,0,0,0,16,124,1,0,0,0,18,140,1,0,0,0,20,22,3,2,1,0,21,
  	20,1,0,0,0,22,23,1,0,0,0,23,21,1,0,0,0,23,24,1,0,0,0,24,1,1,0,0,0,25,
  	26,5,1,0,0,26,27,5,22,0,0,27,29,5,2,0,0,28,30,3,4,2,0,29,28,1,0,0,0,29,
  	30,1,0,0,0,30,35,1,0,0,0,31,32,5,3,0,0,32,34,3,4,2,0,33,31,1,0,0,0,34,
  	37,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,36,38,1,0,0,0,37,35,1,0,0,0,38,
  	42,5,4,0,0,39,41,3,6,3,0,40,39,1,0,0,0,41,44,1,0,0,0,42,40,1,0,0,0,42,
  	43,1,0,0,0,43,45,1,0,0,0,44,42,1,0,0,0,45,46,5,5,0,0,46,3,1,0,0,0,47,
  	48,7,0,0,0,48,58,5,22,0,0,49,50,7,0,0,0,50,51,5,22,0,0,51,52,5,8,0,0,
  	52,53,5,23,0,0,53,58,5,9,0,0,54,55,7,0,0,0,55,56,5,10,0,0,56,58,5,22,
  	0,0,57,47,1,0,0,0,57,49,1,0,0,0,57,54,1,0,0,0,58,5,1,0,0,0,59,60,3,8,
  	4,0,60,61,5,11,0,0,61,68,1,0,0,0,62,63,3,10,5,0,63,64,5,11,0,0,64,68,
  	1,0,0,0,65,68,3,14,7,0,66,68,3,18,9,0,67,59,1,0,0,0,67,62,1,0,0,0,67,
  	65,1,0,0,0,67,66,1,0,0,0,68,7,1,0,0,0,69,70,5,22,0,0,70,71,5,12,0,0,71,
  	80,3,12,6,0,72,73,5,22,0,0,73,74,5,8,0,0,74,75,3,12,6,0,75,76,5,9,0,0,
  	76,77,5,12,0,0,77,78,3,12,6,0,78,80,1,0,0,0,79,69,1,0,0,0,79,72,1,0,0,
  	0,80,9,1,0,0,0,81,82,5,22,0,0,82,84,5,2,0,0,83,85,3,12,6,0,84,83,1,0,
  	0,0,84,85,1,0,0,0,85,90,1,0,0,0,86,87,5,3,0,0,87,89,3,12,6,0,88,86,1,
  	0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,
  	0,0,0,93,94,5,4,0,0,94,11,1,0,0,0,95,96,6,6,-1,0,96,100,3,10,5,0,97,100,
  	5,22,0,0,98,100,5,23,0,0,99,95,1,0,0,0,99,97,1,0,0,0,99,98,1,0,0,0,100,
  	109,1,0,0,0,101,102,10,4,0,0,102,103,7,1,0,0,103,108,3,12,6,5,104,105,
  	10,3,0,0,105,106,7,2,0,0,106,108,3,12,6,4,107,101,1,0,0,0,107,104,1,0,
  	0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,13,1,0,0,0,111,
  	109,1,0,0,0,112,113,5,16,0,0,113,114,5,2,0,0,114,115,3,16,8,0,115,119,
  	5,4,0,0,116,118,3,6,3,0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,
  	0,119,120,1,0,0,0,120,122,1,0,0,0,121,119,1,0,0,0,122,123,5,5,0,0,123,
  	15,1,0,0,0,124,125,6,8,-1,0,125,126,3,12,6,0,126,127,7,3,0,0,127,128,
  	3,12,6,0,128,137,1,0,0,0,129,130,10,3,0,0,130,131,5,17,0,0,131,136,3,
  	16,8,4,132,133,10,2,0,0,133,134,5,18,0,0,134,136,3,16,8,3,135,129,1,0,
  	0,0,135,132,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,
  	17,1,0,0,0,139,137,1,0,0,0,140,141,5,21,0,0,141,142,5,2,0,0,142,143,5,
  	22,0,0,143,144,5,11,0,0,144,145,3,16,8,0,145,146,5,11,0,0,146,147,3,8,
  	4,0,147,151,5,4,0,0,148,150,3,6,3,0,149,148,1,0,0,0,150,153,1,0,0,0,151,
  	149,1,0,0,0,151,152,1,0,0,0,152,154,1,0,0,0,153,151,1,0,0,0,154,155,5,
  	5,0,0,155,19,1,0,0,0,16,23,29,35,42,57,67,79,84,90,99,107,109,119,135,
  	137,151
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

std::vector<ViperLangParser::Function_definitionContext *> ViperLangParser::ProgramContext::function_definition() {
  return getRuleContexts<ViperLangParser::Function_definitionContext>();
}

ViperLangParser::Function_definitionContext* ViperLangParser::ProgramContext::function_definition(size_t i) {
  return getRuleContext<ViperLangParser::Function_definitionContext>(i);
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
    setState(21); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      function_definition();
      setState(23); 
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

//----------------- Function_definitionContext ------------------------------------------------------------------

ViperLangParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::Function_definitionContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}

std::vector<ViperLangParser::Variable_declarationContext *> ViperLangParser::Function_definitionContext::variable_declaration() {
  return getRuleContexts<ViperLangParser::Variable_declarationContext>();
}

ViperLangParser::Variable_declarationContext* ViperLangParser::Function_definitionContext::variable_declaration(size_t i) {
  return getRuleContext<ViperLangParser::Variable_declarationContext>(i);
}

std::vector<ViperLangParser::StatementContext *> ViperLangParser::Function_definitionContext::statement() {
  return getRuleContexts<ViperLangParser::StatementContext>();
}

ViperLangParser::StatementContext* ViperLangParser::Function_definitionContext::statement(size_t i) {
  return getRuleContext<ViperLangParser::StatementContext>(i);
}


size_t ViperLangParser::Function_definitionContext::getRuleIndex() const {
  return ViperLangParser::RuleFunction_definition;
}

void ViperLangParser::Function_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition(this);
}

void ViperLangParser::Function_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition(this);
}


std::any ViperLangParser::Function_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFunction_definition(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Function_definitionContext* ViperLangParser::function_definition() {
  Function_definitionContext *_localctx = _tracker.createInstance<Function_definitionContext>(_ctx, getState());
  enterRule(_localctx, 2, ViperLangParser::RuleFunction_definition);
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
    setState(25);
    match(ViperLangParser::T__0);
    setState(26);
    match(ViperLangParser::NAME);
    setState(27);
    match(ViperLangParser::T__1);
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ViperLangParser::T__5

    || _la == ViperLangParser::T__6) {
      setState(28);
      variable_declaration();
    }
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ViperLangParser::T__2) {
      setState(31);
      match(ViperLangParser::T__2);
      setState(32);
      variable_declaration();
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
    match(ViperLangParser::T__3);
    setState(42);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6356992) != 0)) {
      setState(39);
      statement();
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(45);
    match(ViperLangParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declarationContext ------------------------------------------------------------------

ViperLangParser::Variable_declarationContext::Variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::Variable_declarationContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}

tree::TerminalNode* ViperLangParser::Variable_declarationContext::INT() {
  return getToken(ViperLangParser::INT, 0);
}


size_t ViperLangParser::Variable_declarationContext::getRuleIndex() const {
  return ViperLangParser::RuleVariable_declaration;
}

void ViperLangParser::Variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration(this);
}

void ViperLangParser::Variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration(this);
}


std::any ViperLangParser::Variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Variable_declarationContext* ViperLangParser::variable_declaration() {
  Variable_declarationContext *_localctx = _tracker.createInstance<Variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 4, ViperLangParser::RuleVariable_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(57);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      _la = _input->LA(1);
      if (!(_la == ViperLangParser::T__5

      || _la == ViperLangParser::T__6)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(48);
      match(ViperLangParser::NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      _la = _input->LA(1);
      if (!(_la == ViperLangParser::T__5

      || _la == ViperLangParser::T__6)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(50);
      match(ViperLangParser::NAME);
      setState(51);
      match(ViperLangParser::T__7);
      setState(52);
      match(ViperLangParser::INT);
      setState(53);
      match(ViperLangParser::T__8);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(54);
      _la = _input->LA(1);
      if (!(_la == ViperLangParser::T__5

      || _la == ViperLangParser::T__6)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(55);
      match(ViperLangParser::T__9);
      setState(56);
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

//----------------- StatementContext ------------------------------------------------------------------

ViperLangParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Assigment_expressionContext* ViperLangParser::StatementContext::assigment_expression() {
  return getRuleContext<ViperLangParser::Assigment_expressionContext>(0);
}

ViperLangParser::Call_expressionContext* ViperLangParser::StatementContext::call_expression() {
  return getRuleContext<ViperLangParser::Call_expressionContext>(0);
}

ViperLangParser::If_statementContext* ViperLangParser::StatementContext::if_statement() {
  return getRuleContext<ViperLangParser::If_statementContext>(0);
}

ViperLangParser::For_statementContext* ViperLangParser::StatementContext::for_statement() {
  return getRuleContext<ViperLangParser::For_statementContext>(0);
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
  enterRule(_localctx, 6, ViperLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(59);
      assigment_expression();
      setState(60);
      match(ViperLangParser::T__10);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(62);
      call_expression();
      setState(63);
      match(ViperLangParser::T__10);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(65);
      if_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(66);
      for_statement();
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

//----------------- Assigment_expressionContext ------------------------------------------------------------------

ViperLangParser::Assigment_expressionContext::Assigment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::Assigment_expressionContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}

std::vector<ViperLangParser::ExpressionContext *> ViperLangParser::Assigment_expressionContext::expression() {
  return getRuleContexts<ViperLangParser::ExpressionContext>();
}

ViperLangParser::ExpressionContext* ViperLangParser::Assigment_expressionContext::expression(size_t i) {
  return getRuleContext<ViperLangParser::ExpressionContext>(i);
}


size_t ViperLangParser::Assigment_expressionContext::getRuleIndex() const {
  return ViperLangParser::RuleAssigment_expression;
}

void ViperLangParser::Assigment_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssigment_expression(this);
}

void ViperLangParser::Assigment_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssigment_expression(this);
}


std::any ViperLangParser::Assigment_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitAssigment_expression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Assigment_expressionContext* ViperLangParser::assigment_expression() {
  Assigment_expressionContext *_localctx = _tracker.createInstance<Assigment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 8, ViperLangParser::RuleAssigment_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      match(ViperLangParser::NAME);
      setState(70);
      match(ViperLangParser::T__11);
      setState(71);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(72);
      match(ViperLangParser::NAME);
      setState(73);
      match(ViperLangParser::T__7);
      setState(74);
      expression(0);
      setState(75);
      match(ViperLangParser::T__8);
      setState(76);
      match(ViperLangParser::T__11);
      setState(77);
      expression(0);
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

//----------------- Call_expressionContext ------------------------------------------------------------------

ViperLangParser::Call_expressionContext::Call_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::Call_expressionContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}

std::vector<ViperLangParser::ExpressionContext *> ViperLangParser::Call_expressionContext::expression() {
  return getRuleContexts<ViperLangParser::ExpressionContext>();
}

ViperLangParser::ExpressionContext* ViperLangParser::Call_expressionContext::expression(size_t i) {
  return getRuleContext<ViperLangParser::ExpressionContext>(i);
}


size_t ViperLangParser::Call_expressionContext::getRuleIndex() const {
  return ViperLangParser::RuleCall_expression;
}

void ViperLangParser::Call_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_expression(this);
}

void ViperLangParser::Call_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_expression(this);
}


std::any ViperLangParser::Call_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitCall_expression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Call_expressionContext* ViperLangParser::call_expression() {
  Call_expressionContext *_localctx = _tracker.createInstance<Call_expressionContext>(_ctx, getState());
  enterRule(_localctx, 10, ViperLangParser::RuleCall_expression);
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
    setState(81);
    match(ViperLangParser::NAME);
    setState(82);
    match(ViperLangParser::T__1);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ViperLangParser::NAME

    || _la == ViperLangParser::INT) {
      setState(83);
      expression(0);
    }
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ViperLangParser::T__2) {
      setState(86);
      match(ViperLangParser::T__2);
      setState(87);
      expression(0);
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

//----------------- ExpressionContext ------------------------------------------------------------------

ViperLangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ViperLangParser::Call_expressionContext* ViperLangParser::ExpressionContext::call_expression() {
  return getRuleContext<ViperLangParser::Call_expressionContext>(0);
}

tree::TerminalNode* ViperLangParser::ExpressionContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}

tree::TerminalNode* ViperLangParser::ExpressionContext::INT() {
  return getToken(ViperLangParser::INT, 0);
}

std::vector<ViperLangParser::ExpressionContext *> ViperLangParser::ExpressionContext::expression() {
  return getRuleContexts<ViperLangParser::ExpressionContext>();
}

ViperLangParser::ExpressionContext* ViperLangParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<ViperLangParser::ExpressionContext>(i);
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
   return expression(0);
}

ViperLangParser::ExpressionContext* ViperLangParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ViperLangParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ViperLangParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, ViperLangParser::RuleExpression, precedence);

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
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(96);
      call_expression();
      break;
    }

    case 2: {
      setState(97);
      match(ViperLangParser::NAME);
      break;
    }

    case 3: {
      setState(98);
      match(ViperLangParser::INT);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(109);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(107);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(101);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(102);
          _la = _input->LA(1);
          if (!(_la == ViperLangParser::T__9

          || _la == ViperLangParser::T__12)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(103);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(104);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(105);
          _la = _input->LA(1);
          if (!(_la == ViperLangParser::T__13

          || _la == ViperLangParser::T__14)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(106);
          expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
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

ViperLangParser::Condition_expressionContext* ViperLangParser::If_statementContext::condition_expression() {
  return getRuleContext<ViperLangParser::Condition_expressionContext>(0);
}

std::vector<ViperLangParser::StatementContext *> ViperLangParser::If_statementContext::statement() {
  return getRuleContexts<ViperLangParser::StatementContext>();
}

ViperLangParser::StatementContext* ViperLangParser::If_statementContext::statement(size_t i) {
  return getRuleContext<ViperLangParser::StatementContext>(i);
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
  enterRule(_localctx, 14, ViperLangParser::RuleIf_statement);
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
    setState(112);
    match(ViperLangParser::T__15);
    setState(113);
    match(ViperLangParser::T__1);
    setState(114);
    condition_expression(0);
    setState(115);
    match(ViperLangParser::T__3);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6356992) != 0)) {
      setState(116);
      statement();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    match(ViperLangParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_expressionContext ------------------------------------------------------------------

ViperLangParser::Condition_expressionContext::Condition_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ViperLangParser::ExpressionContext *> ViperLangParser::Condition_expressionContext::expression() {
  return getRuleContexts<ViperLangParser::ExpressionContext>();
}

ViperLangParser::ExpressionContext* ViperLangParser::Condition_expressionContext::expression(size_t i) {
  return getRuleContext<ViperLangParser::ExpressionContext>(i);
}

std::vector<ViperLangParser::Condition_expressionContext *> ViperLangParser::Condition_expressionContext::condition_expression() {
  return getRuleContexts<ViperLangParser::Condition_expressionContext>();
}

ViperLangParser::Condition_expressionContext* ViperLangParser::Condition_expressionContext::condition_expression(size_t i) {
  return getRuleContext<ViperLangParser::Condition_expressionContext>(i);
}


size_t ViperLangParser::Condition_expressionContext::getRuleIndex() const {
  return ViperLangParser::RuleCondition_expression;
}

void ViperLangParser::Condition_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition_expression(this);
}

void ViperLangParser::Condition_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition_expression(this);
}


std::any ViperLangParser::Condition_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitCondition_expression(this);
  else
    return visitor->visitChildren(this);
}


ViperLangParser::Condition_expressionContext* ViperLangParser::condition_expression() {
   return condition_expression(0);
}

ViperLangParser::Condition_expressionContext* ViperLangParser::condition_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ViperLangParser::Condition_expressionContext *_localctx = _tracker.createInstance<Condition_expressionContext>(_ctx, parentState);
  ViperLangParser::Condition_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, ViperLangParser::RuleCondition_expression, precedence);

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
    setState(125);
    expression(0);
    setState(126);
    _la = _input->LA(1);
    if (!(_la == ViperLangParser::T__18

    || _la == ViperLangParser::T__19)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(127);
    expression(0);
    _ctx->stop = _input->LT(-1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(135);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Condition_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCondition_expression);
          setState(129);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(130);
          match(ViperLangParser::T__16);
          setState(131);
          condition_expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Condition_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCondition_expression);
          setState(132);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(133);
          match(ViperLangParser::T__17);
          setState(134);
          condition_expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

ViperLangParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ViperLangParser::For_statementContext::NAME() {
  return getToken(ViperLangParser::NAME, 0);
}

ViperLangParser::Condition_expressionContext* ViperLangParser::For_statementContext::condition_expression() {
  return getRuleContext<ViperLangParser::Condition_expressionContext>(0);
}

ViperLangParser::Assigment_expressionContext* ViperLangParser::For_statementContext::assigment_expression() {
  return getRuleContext<ViperLangParser::Assigment_expressionContext>(0);
}

std::vector<ViperLangParser::StatementContext *> ViperLangParser::For_statementContext::statement() {
  return getRuleContexts<ViperLangParser::StatementContext>();
}

ViperLangParser::StatementContext* ViperLangParser::For_statementContext::statement(size_t i) {
  return getRuleContext<ViperLangParser::StatementContext>(i);
}


size_t ViperLangParser::For_statementContext::getRuleIndex() const {
  return ViperLangParser::RuleFor_statement;
}

void ViperLangParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void ViperLangParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ViperLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


std::any ViperLangParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::For_statementContext* ViperLangParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, ViperLangParser::RuleFor_statement);
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
    setState(140);
    match(ViperLangParser::T__20);
    setState(141);
    match(ViperLangParser::T__1);
    setState(142);
    match(ViperLangParser::NAME);
    setState(143);
    match(ViperLangParser::T__10);
    setState(144);
    condition_expression(0);
    setState(145);
    match(ViperLangParser::T__10);
    setState(146);
    assigment_expression();
    setState(147);
    match(ViperLangParser::T__3);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6356992) != 0)) {
      setState(148);
      statement();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(ViperLangParser::T__4);
   
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
    case 6: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 8: return condition_expressionSempred(antlrcpp::downCast<Condition_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ViperLangParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool ViperLangParser::condition_expressionSempred(Condition_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

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
