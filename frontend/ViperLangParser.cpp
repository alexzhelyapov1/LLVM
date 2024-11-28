
// Generated from ViperLang.g4 by ANTLR 4.7.2


#include "ViperLangListener.h"
#include "ViperLangVisitor.h"

#include "ViperLangParser.h"


using namespace antlrcpp;
using namespace antlr4;

ViperLangParser::ViperLangParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ViperLangParser::~ViperLangParser() {
  delete _interpreter;
}

std::string ViperLangParser::getGrammarFileName() const {
  return "ViperLang.g4";
}

const std::vector<std::string>& ViperLangParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ViperLangParser::getVocabulary() const {
  return _vocabulary;
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


antlrcpp::Any ViperLangParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ProgramContext* ViperLangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ViperLangParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Func_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFunc_def(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Func_defContext* ViperLangParser::func_def() {
  Func_defContext *_localctx = _tracker.createInstance<Func_defContext>(_ctx, getState());
  enterRule(_localctx, 2, ViperLangParser::RuleFunc_def);
  size_t _la = 0;

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Func_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFunc_name(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Func_nameContext* ViperLangParser::func_name() {
  Func_nameContext *_localctx = _tracker.createInstance<Func_nameContext>(_ctx, getState());
  enterRule(_localctx, 4, ViperLangParser::RuleFunc_name);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ArgumentsContext* ViperLangParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 6, ViperLangParser::RuleArguments);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ArgumentContext* ViperLangParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 8, ViperLangParser::RuleArgument);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::TypeContext* ViperLangParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, ViperLangParser::RuleType);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::For_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitFor_expression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::For_expressionContext* ViperLangParser::for_expression() {
  For_expressionContext *_localctx = _tracker.createInstance<For_expressionContext>(_ctx, getState());
  enterRule(_localctx, 12, ViperLangParser::RuleFor_expression);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::If_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitIf_expression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::If_expressionContext* ViperLangParser::if_expression() {
  If_expressionContext *_localctx = _tracker.createInstance<If_expressionContext>(_ctx, getState());
  enterRule(_localctx, 14, ViperLangParser::RuleIf_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::If_statementContext* ViperLangParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, ViperLangParser::RuleIf_statement);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Elif_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitElif_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Elif_statementContext* ViperLangParser::elif_statement() {
  Elif_statementContext *_localctx = _tracker.createInstance<Elif_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, ViperLangParser::RuleElif_statement);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Else_statementContext* ViperLangParser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, ViperLangParser::RuleElse_statement);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::BodyContext* ViperLangParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 22, ViperLangParser::RuleBody);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << ViperLangParser::T__5)
      | (1ULL << ViperLangParser::T__6)
      | (1ULL << ViperLangParser::T__8)
      | (1ULL << ViperLangParser::NAME))) != 0));
   
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


antlrcpp::Any ViperLangParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::StatementContext* ViperLangParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, ViperLangParser::RuleStatement);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::ExpressionContext* ViperLangParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, ViperLangParser::RuleExpression);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Var_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVar_def(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Var_defContext* ViperLangParser::var_def() {
  Var_defContext *_localctx = _tracker.createInstance<Var_defContext>(_ctx, getState());
  enterRule(_localctx, 28, ViperLangParser::RuleVar_def);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Call_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitCall_func(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Call_funcContext* ViperLangParser::call_func() {
  Call_funcContext *_localctx = _tracker.createInstance<Call_funcContext>(_ctx, getState());
  enterRule(_localctx, 30, ViperLangParser::RuleCall_func);
  size_t _la = 0;

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::VarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVars(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::VarsContext* ViperLangParser::vars() {
  VarsContext *_localctx = _tracker.createInstance<VarsContext>(_ctx, getState());
  enterRule(_localctx, 32, ViperLangParser::RuleVars);

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Cond_exprContext::accept(tree::ParseTreeVisitor *visitor) {
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

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

  auto onExit = finally([=] {
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


antlrcpp::Any ViperLangParser::Var_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ViperLangVisitor*>(visitor))
    return parserVisitor->visitVar_name(this);
  else
    return visitor->visitChildren(this);
}

ViperLangParser::Var_nameContext* ViperLangParser::var_name() {
  Var_nameContext *_localctx = _tracker.createInstance<Var_nameContext>(_ctx, getState());
  enterRule(_localctx, 38, ViperLangParser::RuleVar_name);

  auto onExit = finally([=] {
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
    case 17: return cond_exprSempred(dynamic_cast<Cond_exprContext *>(context), predicateIndex);
    case 18: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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

// Static vars and initialization.
std::vector<dfa::DFA> ViperLangParser::_decisionToDFA;
atn::PredictionContextCache ViperLangParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ViperLangParser::_atn;
std::vector<uint16_t> ViperLangParser::_serializedATN;

std::vector<std::string> ViperLangParser::_ruleNames = {
  "program", "func_def", "func_name", "arguments", "argument", "type", "for_expression", 
  "if_expression", "if_statement", "elif_statement", "else_statement", "body", 
  "statement", "expression", "var_def", "call_func", "vars", "cond_expr", 
  "expr", "var_name"
};

std::vector<std::string> ViperLangParser::_literalNames = {
  "", "'function'", "'('", "')'", "'end'", "','", "'int'", "'for'", "';'", 
  "'if'", "'elif'", "'else'", "'='", "'and'", "'or'", "'<'", "'>'", "'*'", 
  "'/'", "'+'", "'-'"
};

std::vector<std::string> ViperLangParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "INT", "NAME", "BODY", "WS"
};

dfa::Vocabulary ViperLangParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ViperLangParser::_tokenNames;

ViperLangParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1a, 0xbb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x6, 0x2, 0x2c, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2d, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x34, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x41, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x55, 0xa, 0x9, 0xc, 0x9, 0xe, 
    0x9, 0x58, 0xb, 0x9, 0x3, 0x9, 0x7, 0x9, 0x5b, 0xa, 0x9, 0xc, 0x9, 0xe, 
    0x9, 0x5e, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x6, 0xd, 
    0x72, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x73, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x81, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x8f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x97, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xa4, 0xa, 
    0x13, 0xc, 0x13, 0xe, 0x13, 0xa7, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0xac, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xb4, 0xa, 0x14, 0xc, 0x14, 0xe, 
    0x14, 0xb7, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x4, 0x24, 
    0x26, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x5, 0x3, 
    0x2, 0x11, 0x12, 0x3, 0x2, 0x13, 0x14, 0x3, 0x2, 0x15, 0x16, 0x2, 0xb8, 
    0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 0x2, 0x2, 0xe, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x52, 0x3, 0x2, 0x2, 0x2, 0x12, 0x61, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x16, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x18, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x86, 0x3, 0x2, 0x2, 0x2, 0x20, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x96, 0x3, 0x2, 0x2, 0x2, 0x24, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xab, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2c, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 
    0x3, 0x2, 0x2, 0x30, 0x31, 0x5, 0x6, 0x4, 0x2, 0x31, 0x33, 0x7, 0x4, 
    0x2, 0x2, 0x32, 0x34, 0x5, 0x8, 0x5, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x36, 0x7, 0x5, 0x2, 0x2, 0x36, 0x37, 0x5, 0x18, 0xd, 0x2, 0x37, 
    0x38, 0x7, 0x6, 0x2, 0x2, 0x38, 0x5, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 
    0x7, 0x18, 0x2, 0x2, 0x3a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x41, 0x5, 
    0xa, 0x6, 0x2, 0x3c, 0x3d, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3e, 0x7, 0x7, 
    0x2, 0x2, 0x3e, 0x3f, 0x5, 0xa, 0x6, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x9, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0xc, 0x7, 0x2, 0x43, 
    0x44, 0x5, 0x28, 0x15, 0x2, 0x44, 0xb, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 
    0x7, 0x8, 0x2, 0x2, 0x46, 0xd, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 
    0x9, 0x2, 0x2, 0x48, 0x49, 0x7, 0x4, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x1e, 
    0x10, 0x2, 0x4a, 0x4b, 0x7, 0xa, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x24, 0x13, 
    0x2, 0x4c, 0x4d, 0x7, 0xa, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x18, 0xd, 0x2, 
    0x4e, 0x4f, 0x7, 0x5, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x18, 0xd, 0x2, 0x50, 
    0x51, 0x7, 0x6, 0x2, 0x2, 0x51, 0xf, 0x3, 0x2, 0x2, 0x2, 0x52, 0x56, 
    0x5, 0x12, 0xa, 0x2, 0x53, 0x55, 0x5, 0x14, 0xb, 0x2, 0x54, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x16, 0xc, 0x2, 
    0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 
    0x6, 0x2, 0x2, 0x60, 0x11, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0xb, 
    0x2, 0x2, 0x62, 0x63, 0x7, 0x4, 0x2, 0x2, 0x63, 0x64, 0x5, 0x24, 0x13, 
    0x2, 0x64, 0x65, 0x7, 0x5, 0x2, 0x2, 0x65, 0x66, 0x5, 0x18, 0xd, 0x2, 
    0x66, 0x13, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 
    0x69, 0x7, 0x4, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x24, 0x13, 0x2, 0x6a, 0x6b, 
    0x7, 0x5, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x18, 0xd, 0x2, 0x6c, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0xd, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x18, 
    0xd, 0x2, 0x6f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x5, 0x1a, 0xe, 
    0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x5, 0x1e, 0x10, 0x2, 0x76, 0x77, 
    0x7, 0xa, 0x2, 0x2, 0x77, 0x81, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x5, 
    0x20, 0x11, 0x2, 0x79, 0x7a, 0x7, 0xa, 0x2, 0x2, 0x7a, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x81, 0x5, 0xe, 0x8, 0x2, 0x7c, 0x81, 0x5, 0x10, 0x9, 
    0x2, 0x7d, 0x7e, 0x5, 0x1c, 0xf, 0x2, 0x7e, 0x7f, 0x7, 0xa, 0x2, 0x2, 
    0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x75, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x81, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0x28, 0x15, 0x2, 0x83, 0x84, 0x7, 0xe, 
    0x2, 0x2, 0x84, 0x85, 0x5, 0x26, 0x14, 0x2, 0x85, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0x5, 0xc, 0x7, 0x2, 0x87, 0x88, 0x5, 0x28, 0x15, 0x2, 
    0x88, 0x89, 0x7, 0xe, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x26, 0x14, 0x2, 0x8a, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x6, 0x4, 0x2, 0x8c, 0x8e, 
    0x7, 0x4, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x22, 0x12, 0x2, 0x8e, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x7, 0x5, 0x2, 0x2, 0x91, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x97, 0x7, 0x18, 0x2, 0x2, 0x93, 0x94, 0x7, 0x18, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0x7, 0x2, 0x2, 0x95, 0x97, 0x7, 0x18, 0x2, 0x2, 0x96, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x96, 0x93, 0x3, 0x2, 0x2, 0x2, 0x97, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x8, 0x13, 0x1, 0x2, 0x99, 0x9a, 0x5, 
    0x26, 0x14, 0x2, 0x9a, 0x9b, 0x9, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x26, 
    0x14, 0x2, 0x9c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0xc, 0x5, 0x2, 
    0x2, 0x9e, 0x9f, 0x7, 0xf, 0x2, 0x2, 0x9f, 0xa4, 0x5, 0x24, 0x13, 0x6, 
    0xa0, 0xa1, 0xc, 0x4, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x10, 0x2, 0x2, 0xa2, 
    0xa4, 0x5, 0x24, 0x13, 0x5, 0xa3, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xac, 0x8, 0x14, 0x1, 
    0x2, 0xa9, 0xac, 0x7, 0x17, 0x2, 0x2, 0xaa, 0xac, 0x5, 0x28, 0x15, 0x2, 
    0xab, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
    0xc, 0x6, 0x2, 0x2, 0xae, 0xaf, 0x9, 0x3, 0x2, 0x2, 0xaf, 0xb4, 0x5, 
    0x26, 0x14, 0x7, 0xb0, 0xb1, 0xc, 0x5, 0x2, 0x2, 0xb1, 0xb2, 0x9, 0x4, 
    0x2, 0x2, 0xb2, 0xb4, 0x5, 0x26, 0x14, 0x6, 0xb3, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 
    0x7, 0x18, 0x2, 0x2, 0xb9, 0x29, 0x3, 0x2, 0x2, 0x2, 0x10, 0x2d, 0x33, 
    0x40, 0x56, 0x5c, 0x73, 0x80, 0x8e, 0x96, 0xa3, 0xa5, 0xab, 0xb3, 0xb5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ViperLangParser::Initializer ViperLangParser::_init;
