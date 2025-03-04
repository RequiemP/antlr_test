#ifndef SELECTSQLLISTENER_H
#define SELECTSQLLISTENER_H

#include "SimpleSelectSQLBaseListener.h"
#include <iostream>
#include <vector>
#include <string>

class SelectSQLListener : public SimpleSelectSQLBaseListener {
public:
    void enterSelectStatement(SimpleSelectSQLParser::SelectStatementContext* ctx) override;
    void enterColumnList(SimpleSelectSQLParser::ColumnListContext* ctx) override;
    void enterTableName(SimpleSelectSQLParser::TableNameContext* ctx) override;
    void enterWhereClause(SimpleSelectSQLParser::WhereClauseContext* ctx) override;

    void printResults() const;

private:
    std::vector<std::string> columns;
    std::string table;
    std::vector<std::string> conditions;
};

#endif