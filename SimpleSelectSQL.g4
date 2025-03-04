grammar SimpleSelectSQL;

// Parser Rules
query: selectStatement EOF;

selectStatement
    : 'SELECT' columnList 'FROM' tableName ('WHERE' whereClause)? ';'
    ;

columnList
    : columnName (',' columnName)*
    ;

tableName
    : ID
    ;

whereClause
    : condition (logicalOp condition)*
    ;

condition
    : columnName comparisonOp value
    ;

logicalOp
    : 'AND' | 'OR'
    ;

comparisonOp
    : '=' | '<>' | '<' | '>' | '<=' | '>='
    ;

columnName
    : ID
    ;

value
    : STRING | NUMBER
    ;

// Lexer Rules
ID: [a-zA-Z_][a-zA-Z_0-9]*;
STRING: '\'' ~'\''* '\'';
NUMBER: [0-9]+ ('.' [0-9]+)?;
WS: [ \t\r\n]+ -> skip; // Skip whitespace