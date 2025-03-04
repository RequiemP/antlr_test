
// Generated from SimpleSelectSQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleSelectSQLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SimpleSelectSQLParser.
 */
class  SimpleSelectSQLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterQuery(SimpleSelectSQLParser::QueryContext *ctx) = 0;
  virtual void exitQuery(SimpleSelectSQLParser::QueryContext *ctx) = 0;

  virtual void enterSelectStatement(SimpleSelectSQLParser::SelectStatementContext *ctx) = 0;
  virtual void exitSelectStatement(SimpleSelectSQLParser::SelectStatementContext *ctx) = 0;

  virtual void enterColumnList(SimpleSelectSQLParser::ColumnListContext *ctx) = 0;
  virtual void exitColumnList(SimpleSelectSQLParser::ColumnListContext *ctx) = 0;

  virtual void enterTableName(SimpleSelectSQLParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(SimpleSelectSQLParser::TableNameContext *ctx) = 0;

  virtual void enterWhereClause(SimpleSelectSQLParser::WhereClauseContext *ctx) = 0;
  virtual void exitWhereClause(SimpleSelectSQLParser::WhereClauseContext *ctx) = 0;

  virtual void enterCondition(SimpleSelectSQLParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(SimpleSelectSQLParser::ConditionContext *ctx) = 0;

  virtual void enterLogicalOp(SimpleSelectSQLParser::LogicalOpContext *ctx) = 0;
  virtual void exitLogicalOp(SimpleSelectSQLParser::LogicalOpContext *ctx) = 0;

  virtual void enterComparisonOp(SimpleSelectSQLParser::ComparisonOpContext *ctx) = 0;
  virtual void exitComparisonOp(SimpleSelectSQLParser::ComparisonOpContext *ctx) = 0;

  virtual void enterColumnName(SimpleSelectSQLParser::ColumnNameContext *ctx) = 0;
  virtual void exitColumnName(SimpleSelectSQLParser::ColumnNameContext *ctx) = 0;

  virtual void enterValue(SimpleSelectSQLParser::ValueContext *ctx) = 0;
  virtual void exitValue(SimpleSelectSQLParser::ValueContext *ctx) = 0;


};

