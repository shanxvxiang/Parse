cmake_minimum_required(VERSION 3.24)
project(Parse)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-std=c++17 -pthread -O2 -lssl -lcrypto -lpthread -o -DSTATIC_CONCPP -I -Wno-deprecated")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(ANTLR_SOURCE_DIR ${PROJECT_SOURCE_DIR}/antlr4)
set(ANTLR_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/antlr4/antlr4-include)
set(ANTLR_LIB_DIR ${PROJECT_SOURCE_DIR}/antlr4/antlr4-lib)
set(ANTLR_OUTPUT_DIR ${PROJECT_SOURCE_DIR}/src/antlr4gen)
set(ANTLR_JAR_LOCATION ${ANTLR_SOURCE_DIR}/antlr4-4.11.1-complete.jar)
set(ANTLR_G4_FILE Expr)
set(ANTLR_G4_LOCATION ${ANTLR_SOURCE_DIR}/${ANTLR_G4_FILE}.g4)
set(ANTLR_OUTPUT_FILES
        ${ANTLR_OUTPUT_DIR}/${ANTLR_G4_FILE}BaseListener.cpp
        ${ANTLR_OUTPUT_DIR}/${ANTLR_G4_FILE}BaseVisitor.cpp
        ${ANTLR_OUTPUT_DIR}/${ANTLR_G4_FILE}Lexer.cpp
        ${ANTLR_OUTPUT_DIR}/${ANTLR_G4_FILE}Listener.cpp
        ${ANTLR_OUTPUT_DIR}/${ANTLR_G4_FILE}Parser.cpp
        ${ANTLR_OUTPUT_DIR}/${ANTLR_G4_FILE}Visitor.cpp
)

set(MYSQL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/mysql8/mysql-include)
set(MYSQL_LIB_DIR ${PROJECT_SOURCE_DIR}/mysql8/mysql-lib64)

add_custom_command(
        OUTPUT ${ANTLR_OUTPUT_FILES}
        COMMAND java -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -visitor -o ${ANTLR_OUTPUT_DIR} ${ANTLR_G4_LOCATION}
        DEPENDS ${ANTLR_G4_LOCATION}
        VERBATIM
)

include_directories(
        ${ANTLR_OUTPUT_DIR}
        ${ANTLR_INCLUDE_DIR}
        ${MYSQL_INCLUDE_DIR}
#       ${PROJECT_SOURCE_DIR}/src/antlr4parse
)
link_directories(
        ${ANTLR_LIB_DIR}
        ${MYSQL_LIB_DIR}
)

add_executable(Parse main.cpp ${ANTLR_OUTPUT_FILES}
        src/antlr4parse/EvalVisitor.cpp)

target_link_libraries(
        Parse antlr4-runtime mysqlcppconn-static
)
