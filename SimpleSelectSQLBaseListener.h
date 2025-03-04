
// Generated from SimpleSelectSQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleSelectSQLListener.h"


/**
 * This class provides an empty implementation of SimpleSelectSQLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SimpleSelectSQLBaseListener : public SimpleSelectSQLListener {
public:

  virtual void enterQuery(SimpleSelectSQLParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(SimpleSelectSQLParser::QueryContext * /*ctx*/) override { }

  virtual void enterSelectStatement(SimpleSelectSQLParser::SelectStatementContext * /*ctx*/) override { }
  virtual void exitSelectStatement(SimpleSelectSQLParser::SelectStatementContext * /*ctx*/) override { }

  virtual void enterColumnList(SimpleSelectSQLParser::ColumnListContext * /*ctx*/) override { }
  virtual void exitColumnList(SimpleSelectSQLParser::ColumnListContext * /*ctx*/) override { }

  virtual void enterTableName(SimpleSelectSQLParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(SimpleSelectSQLParser::TableNameContext * /*ctx*/) override { }

  virtual void enterWhereClause(SimpleSelectSQLParser::WhereClauseContext * /*ctx*/) override { }
  virtual void exitWhereClause(SimpleSelectSQLParser::WhereClauseContext * /*ctx*/) override { }

  virtual void enterCondition(SimpleSelectSQLParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(SimpleSelectSQLParser::ConditionContext * /*ctx*/) override { }

  virtual void enterLogicalOp(SimpleSelectSQLParser::LogicalOpContext * /*ctx*/) override { }
  virtual void exitLogicalOp(SimpleSelectSQLParser::LogicalOpContext * /*ctx*/) override { }

  virtual void enterComparisonOp(SimpleSelectSQLParser::ComparisonOpContext * /*ctx*/) override { }
  virtual void exitComparisonOp(SimpleSelectSQLParser::ComparisonOpContext * /*ctx*/) override { }

  virtual void enterColumnName(SimpleSelectSQLParser::ColumnNameContext * /*ctx*/) override { }
  virtual void exitColumnName(SimpleSelectSQLParser::ColumnNameContext * /*ctx*/) override { }

  virtual void enterValue(SimpleSelectSQLParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(SimpleSelectSQLParser::ValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

