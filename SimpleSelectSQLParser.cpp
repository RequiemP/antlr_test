
// Generated from SimpleSelectSQL.g4 by ANTLR 4.13.2


#include "SimpleSelectSQLListener.h"

#include "SimpleSelectSQLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SimpleSelectSQLParserStaticData final {
  SimpleSelectSQLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimpleSelectSQLParserStaticData(const SimpleSelectSQLParserStaticData&) = delete;
  SimpleSelectSQLParserStaticData(SimpleSelectSQLParserStaticData&&) = delete;
  SimpleSelectSQLParserStaticData& operator=(const SimpleSelectSQLParserStaticData&) = delete;
  SimpleSelectSQLParserStaticData& operator=(SimpleSelectSQLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simpleselectsqlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimpleSelectSQLParserStaticData> simpleselectsqlParserStaticData = nullptr;

void simpleselectsqlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simpleselectsqlParserStaticData != nullptr) {
    return;
  }
#else
  assert(simpleselectsqlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimpleSelectSQLParserStaticData>(
    std::vector<std::string>{
      "query", "selectStatement", "columnList", "tableName", "whereClause", 
      "condition", "logicalOp", "comparisonOp", "columnName", "value"
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
  	4,1,17,65,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,30,8,1,1,
  	1,1,1,1,2,1,2,1,2,5,2,37,8,2,10,2,12,2,40,9,2,1,3,1,3,1,4,1,4,1,4,1,4,
  	5,4,48,8,4,10,4,12,4,51,9,4,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,9,0,0,10,0,2,4,6,8,10,12,14,16,18,0,3,1,0,6,7,1,0,8,13,1,0,15,
  	16,57,0,20,1,0,0,0,2,23,1,0,0,0,4,33,1,0,0,0,6,41,1,0,0,0,8,43,1,0,0,
  	0,10,52,1,0,0,0,12,56,1,0,0,0,14,58,1,0,0,0,16,60,1,0,0,0,18,62,1,0,0,
  	0,20,21,3,2,1,0,21,22,5,0,0,1,22,1,1,0,0,0,23,24,5,1,0,0,24,25,3,4,2,
  	0,25,26,5,2,0,0,26,29,3,6,3,0,27,28,5,3,0,0,28,30,3,8,4,0,29,27,1,0,0,
  	0,29,30,1,0,0,0,30,31,1,0,0,0,31,32,5,4,0,0,32,3,1,0,0,0,33,38,3,16,8,
  	0,34,35,5,5,0,0,35,37,3,16,8,0,36,34,1,0,0,0,37,40,1,0,0,0,38,36,1,0,
  	0,0,38,39,1,0,0,0,39,5,1,0,0,0,40,38,1,0,0,0,41,42,5,14,0,0,42,7,1,0,
  	0,0,43,49,3,10,5,0,44,45,3,12,6,0,45,46,3,10,5,0,46,48,1,0,0,0,47,44,
  	1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,9,1,0,0,0,51,49,
  	1,0,0,0,52,53,3,16,8,0,53,54,3,14,7,0,54,55,3,18,9,0,55,11,1,0,0,0,56,
  	57,7,0,0,0,57,13,1,0,0,0,58,59,7,1,0,0,59,15,1,0,0,0,60,61,5,14,0,0,61,
  	17,1,0,0,0,62,63,7,2,0,0,63,19,1,0,0,0,3,29,38,49
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simpleselectsqlParserStaticData = std::move(staticData);
}

}

SimpleSelectSQLParser::SimpleSelectSQLParser(TokenStream *input) : SimpleSelectSQLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SimpleSelectSQLParser::SimpleSelectSQLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SimpleSelectSQLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simpleselectsqlParserStaticData->atn, simpleselectsqlParserStaticData->decisionToDFA, simpleselectsqlParserStaticData->sharedContextCache, options);
}

SimpleSelectSQLParser::~SimpleSelectSQLParser() {
  delete _interpreter;
}

const atn::ATN& SimpleSelectSQLParser::getATN() const {
  return *simpleselectsqlParserStaticData->atn;
}

std::string SimpleSelectSQLParser::getGrammarFileName() const {
  return "SimpleSelectSQL.g4";
}

const std::vector<std::string>& SimpleSelectSQLParser::getRuleNames() const {
  return simpleselectsqlParserStaticData->ruleNames;
}

const dfa::Vocabulary& SimpleSelectSQLParser::getVocabulary() const {
  return simpleselectsqlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimpleSelectSQLParser::getSerializedATN() const {
  return simpleselectsqlParserStaticData->serializedATN;
}


//----------------- QueryContext ------------------------------------------------------------------

SimpleSelectSQLParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSelectSQLParser::SelectStatementContext* SimpleSelectSQLParser::QueryContext::selectStatement() {
  return getRuleContext<SimpleSelectSQLParser::SelectStatementContext>(0);
}

tree::TerminalNode* SimpleSelectSQLParser::QueryContext::EOF() {
  return getToken(SimpleSelectSQLParser::EOF, 0);
}


size_t SimpleSelectSQLParser::QueryContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleQuery;
}

void SimpleSelectSQLParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void SimpleSelectSQLParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}

SimpleSelectSQLParser::QueryContext* SimpleSelectSQLParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleSelectSQLParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    selectStatement();
    setState(21);
    match(SimpleSelectSQLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectStatementContext ------------------------------------------------------------------

SimpleSelectSQLParser::SelectStatementContext::SelectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSelectSQLParser::ColumnListContext* SimpleSelectSQLParser::SelectStatementContext::columnList() {
  return getRuleContext<SimpleSelectSQLParser::ColumnListContext>(0);
}

SimpleSelectSQLParser::TableNameContext* SimpleSelectSQLParser::SelectStatementContext::tableName() {
  return getRuleContext<SimpleSelectSQLParser::TableNameContext>(0);
}

SimpleSelectSQLParser::WhereClauseContext* SimpleSelectSQLParser::SelectStatementContext::whereClause() {
  return getRuleContext<SimpleSelectSQLParser::WhereClauseContext>(0);
}


size_t SimpleSelectSQLParser::SelectStatementContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleSelectStatement;
}

void SimpleSelectSQLParser::SelectStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectStatement(this);
}

void SimpleSelectSQLParser::SelectStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectStatement(this);
}

SimpleSelectSQLParser::SelectStatementContext* SimpleSelectSQLParser::selectStatement() {
  SelectStatementContext *_localctx = _tracker.createInstance<SelectStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleSelectSQLParser::RuleSelectStatement);
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
    setState(23);
    match(SimpleSelectSQLParser::T__0);
    setState(24);
    columnList();
    setState(25);
    match(SimpleSelectSQLParser::T__1);
    setState(26);
    tableName();
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSelectSQLParser::T__2) {
      setState(27);
      match(SimpleSelectSQLParser::T__2);
      setState(28);
      whereClause();
    }
    setState(31);
    match(SimpleSelectSQLParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnListContext ------------------------------------------------------------------

SimpleSelectSQLParser::ColumnListContext::ColumnListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleSelectSQLParser::ColumnNameContext *> SimpleSelectSQLParser::ColumnListContext::columnName() {
  return getRuleContexts<SimpleSelectSQLParser::ColumnNameContext>();
}

SimpleSelectSQLParser::ColumnNameContext* SimpleSelectSQLParser::ColumnListContext::columnName(size_t i) {
  return getRuleContext<SimpleSelectSQLParser::ColumnNameContext>(i);
}


size_t SimpleSelectSQLParser::ColumnListContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleColumnList;
}

void SimpleSelectSQLParser::ColumnListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnList(this);
}

void SimpleSelectSQLParser::ColumnListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnList(this);
}

SimpleSelectSQLParser::ColumnListContext* SimpleSelectSQLParser::columnList() {
  ColumnListContext *_localctx = _tracker.createInstance<ColumnListContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleSelectSQLParser::RuleColumnList);
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
    setState(33);
    columnName();
    setState(38);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSelectSQLParser::T__4) {
      setState(34);
      match(SimpleSelectSQLParser::T__4);
      setState(35);
      columnName();
      setState(40);
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

//----------------- TableNameContext ------------------------------------------------------------------

SimpleSelectSQLParser::TableNameContext::TableNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSelectSQLParser::TableNameContext::ID() {
  return getToken(SimpleSelectSQLParser::ID, 0);
}


size_t SimpleSelectSQLParser::TableNameContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleTableName;
}

void SimpleSelectSQLParser::TableNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableName(this);
}

void SimpleSelectSQLParser::TableNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableName(this);
}

SimpleSelectSQLParser::TableNameContext* SimpleSelectSQLParser::tableName() {
  TableNameContext *_localctx = _tracker.createInstance<TableNameContext>(_ctx, getState());
  enterRule(_localctx, 6, SimpleSelectSQLParser::RuleTableName);

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
    match(SimpleSelectSQLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereClauseContext ------------------------------------------------------------------

SimpleSelectSQLParser::WhereClauseContext::WhereClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleSelectSQLParser::ConditionContext *> SimpleSelectSQLParser::WhereClauseContext::condition() {
  return getRuleContexts<SimpleSelectSQLParser::ConditionContext>();
}

SimpleSelectSQLParser::ConditionContext* SimpleSelectSQLParser::WhereClauseContext::condition(size_t i) {
  return getRuleContext<SimpleSelectSQLParser::ConditionContext>(i);
}

std::vector<SimpleSelectSQLParser::LogicalOpContext *> SimpleSelectSQLParser::WhereClauseContext::logicalOp() {
  return getRuleContexts<SimpleSelectSQLParser::LogicalOpContext>();
}

SimpleSelectSQLParser::LogicalOpContext* SimpleSelectSQLParser::WhereClauseContext::logicalOp(size_t i) {
  return getRuleContext<SimpleSelectSQLParser::LogicalOpContext>(i);
}


size_t SimpleSelectSQLParser::WhereClauseContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleWhereClause;
}

void SimpleSelectSQLParser::WhereClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereClause(this);
}

void SimpleSelectSQLParser::WhereClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereClause(this);
}

SimpleSelectSQLParser::WhereClauseContext* SimpleSelectSQLParser::whereClause() {
  WhereClauseContext *_localctx = _tracker.createInstance<WhereClauseContext>(_ctx, getState());
  enterRule(_localctx, 8, SimpleSelectSQLParser::RuleWhereClause);
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
    setState(43);
    condition();
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSelectSQLParser::T__5

    || _la == SimpleSelectSQLParser::T__6) {
      setState(44);
      logicalOp();
      setState(45);
      condition();
      setState(51);
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

//----------------- ConditionContext ------------------------------------------------------------------

SimpleSelectSQLParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSelectSQLParser::ColumnNameContext* SimpleSelectSQLParser::ConditionContext::columnName() {
  return getRuleContext<SimpleSelectSQLParser::ColumnNameContext>(0);
}

SimpleSelectSQLParser::ComparisonOpContext* SimpleSelectSQLParser::ConditionContext::comparisonOp() {
  return getRuleContext<SimpleSelectSQLParser::ComparisonOpContext>(0);
}

SimpleSelectSQLParser::ValueContext* SimpleSelectSQLParser::ConditionContext::value() {
  return getRuleContext<SimpleSelectSQLParser::ValueContext>(0);
}


size_t SimpleSelectSQLParser::ConditionContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleCondition;
}

void SimpleSelectSQLParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void SimpleSelectSQLParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

SimpleSelectSQLParser::ConditionContext* SimpleSelectSQLParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 10, SimpleSelectSQLParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    columnName();
    setState(53);
    comparisonOp();
    setState(54);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOpContext ------------------------------------------------------------------

SimpleSelectSQLParser::LogicalOpContext::LogicalOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSelectSQLParser::LogicalOpContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleLogicalOp;
}

void SimpleSelectSQLParser::LogicalOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOp(this);
}

void SimpleSelectSQLParser::LogicalOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOp(this);
}

SimpleSelectSQLParser::LogicalOpContext* SimpleSelectSQLParser::logicalOp() {
  LogicalOpContext *_localctx = _tracker.createInstance<LogicalOpContext>(_ctx, getState());
  enterRule(_localctx, 12, SimpleSelectSQLParser::RuleLogicalOp);
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
    setState(56);
    _la = _input->LA(1);
    if (!(_la == SimpleSelectSQLParser::T__5

    || _la == SimpleSelectSQLParser::T__6)) {
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

//----------------- ComparisonOpContext ------------------------------------------------------------------

SimpleSelectSQLParser::ComparisonOpContext::ComparisonOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSelectSQLParser::ComparisonOpContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleComparisonOp;
}

void SimpleSelectSQLParser::ComparisonOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOp(this);
}

void SimpleSelectSQLParser::ComparisonOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOp(this);
}

SimpleSelectSQLParser::ComparisonOpContext* SimpleSelectSQLParser::comparisonOp() {
  ComparisonOpContext *_localctx = _tracker.createInstance<ComparisonOpContext>(_ctx, getState());
  enterRule(_localctx, 14, SimpleSelectSQLParser::RuleComparisonOp);
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
    setState(58);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16128) != 0))) {
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

//----------------- ColumnNameContext ------------------------------------------------------------------

SimpleSelectSQLParser::ColumnNameContext::ColumnNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSelectSQLParser::ColumnNameContext::ID() {
  return getToken(SimpleSelectSQLParser::ID, 0);
}


size_t SimpleSelectSQLParser::ColumnNameContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleColumnName;
}

void SimpleSelectSQLParser::ColumnNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnName(this);
}

void SimpleSelectSQLParser::ColumnNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnName(this);
}

SimpleSelectSQLParser::ColumnNameContext* SimpleSelectSQLParser::columnName() {
  ColumnNameContext *_localctx = _tracker.createInstance<ColumnNameContext>(_ctx, getState());
  enterRule(_localctx, 16, SimpleSelectSQLParser::RuleColumnName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(SimpleSelectSQLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

SimpleSelectSQLParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSelectSQLParser::ValueContext::STRING() {
  return getToken(SimpleSelectSQLParser::STRING, 0);
}

tree::TerminalNode* SimpleSelectSQLParser::ValueContext::NUMBER() {
  return getToken(SimpleSelectSQLParser::NUMBER, 0);
}


size_t SimpleSelectSQLParser::ValueContext::getRuleIndex() const {
  return SimpleSelectSQLParser::RuleValue;
}

void SimpleSelectSQLParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void SimpleSelectSQLParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSelectSQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

SimpleSelectSQLParser::ValueContext* SimpleSelectSQLParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 18, SimpleSelectSQLParser::RuleValue);
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
    setState(62);
    _la = _input->LA(1);
    if (!(_la == SimpleSelectSQLParser::STRING

    || _la == SimpleSelectSQLParser::NUMBER)) {
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

void SimpleSelectSQLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simpleselectsqlParserInitialize();
#else
  ::antlr4::internal::call_once(simpleselectsqlParserOnceFlag, simpleselectsqlParserInitialize);
#endif
}
