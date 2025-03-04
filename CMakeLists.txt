project(antlr_test)

set(ANTLR_BINARY_DIR "${CMAKE_SOURCE_DIR}/antlr_binary_dir")
add_subdirectory("${CMAKE_SOURCE_DIR}/Cpp" "${ANTLR_BINARY_DIR}")

add_executable(antlr_test 
    "antlr_test.cpp"
    "antlr_test.h" 
    "SimpleSelectSQLBaseListener.cpp"
    "SimpleSelectSQLBaseListener.h"
    "SimpleSelectSQLLexer.cpp" 
    "SimpleSelectSQLLexer.h" 
    "SimpleSelectSQLListener.cpp"
    "SimpleSelectSQLListener.h"
    "SimpleSelectSQLParser.cpp"
    "SimpleSelectSQLParser.h"
    "SelectSQLListener.cpp"
    "SelectSQLListener.h"
)

target_include_directories(antlr_test SYSTEM PRIVATE "${CMAKE_SOURCE_DIR}/Cpp/runtime/src")
target_link_libraries(antlr_test antlr4_shared) # antlr4_static for static linkage

install(TARGETS antlr_test
        RUNTIME DESTINATION "${ANTLR_BINARY_DIR}/bin" COMPONENT antlr
        LIBRARY DESTINATION "${ANTLR_BINARY_DIR}/lib"
        ARCHIVE DESTINATION "${ANTLR_BINARY_DIR}/lib")
