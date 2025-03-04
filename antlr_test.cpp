#include "antlr_test.h"

using namespace std;

int main()
{
    std::string sql = "SELECT id, name FROM users WHERE id = 1;";

    antlr4::ANTLRInputStream input(sql);

    SimpleSelectSQLLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    SimpleSelectSQLParser parser(&tokens);

    auto tree = parser.query();

    SelectSQLListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    listener.printResults();

    return 0;
}
