#include "SelectSQLListener.h"

void SelectSQLListener::enterSelectStatement(SimpleSelectSQLParser::SelectStatementContext* ctx) {
    std::cout << "Parsing SELECT statement..." << std::endl;
}

void SelectSQLListener::enterColumnList(SimpleSelectSQLParser::ColumnListContext* ctx) {
    for (auto column : ctx->columnName()) {
        columns.push_back(column->getText());
    }
}

void SelectSQLListener::enterTableName(SimpleSelectSQLParser::TableNameContext* ctx) {
    table = ctx->getText();
}

void SelectSQLListener::enterWhereClause(SimpleSelectSQLParser::WhereClauseContext* ctx) {
    for (auto condition : ctx->condition()) {
        std::cout << condition->value()->getText() << '\n';
        conditions.push_back(condition->getText());
    }
}

void SelectSQLListener::printResults() const {
    std::cout << "Columns: ";
    for (const auto& col : columns) {
        std::cout << col << " ";
    }
    std::cout << std::endl;

    std::cout << "Table: " << table << std::endl;

    std::cout << "Conditions: ";
    for (const auto& cond : conditions) {
        std::cout << cond << " ";
    }
    std::cout << std::endl;
}