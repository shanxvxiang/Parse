
#include <iostream>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "mysql/jdbc.h"
#include "src/antlr4parse/EvalVisitor.h"

#pragma execution_character_set("utf-8")
#pragma comment(lib, "antlr4-runtime.lib") //安装方法中静态库引用
using namespace antlr4;

int main(int argc, const char* argv[]) {

    /*sql::mysql::MySQL_Driver* driver = NULL;
    sql::Connection* conn = NULL;
    driver = sql::mysql::get_mysql_driver_instance();
    conn = driver->connect(
            "tcp://localhost:3306/parse",
            "root", "123456"
    );
    conn->setSchema("parse");*/
    std::cout << "连接成功" << std::endl;

 /*   std::string query = "INSERT INTO users(username,password) VALUES (?,?)";
    sql::PreparedStatement* pStat;
    pStat = conn->prepareStatement(query);
    pStat->setString(1,"user1");
    pStat->setString(2, "pass1");
    int add = pStat->executeUpdate();
    std::cout << "insert: " << add << std::endl;

    std::string find = "SELECT * FROM users;";
    sql::Statement* statement = conn->createStatement();
    sql::ResultSet* resultSet = statement->executeQuery(find);
    while (resultSet->next()) {
        std::cout << resultSet->getInt("id") <<
        resultSet->getString("username") + "  " + resultSet->getString("password") << std::endl;
    }

    resultSet->close();
    statement->close();
    pStat->close();
    conn->close();
*/
/*  // antlr test
    ANTLRInputStream input(std::cin);
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    ExprParser parser(&tokens);
    tree::ParseTree* tree = parser.prog(); //parser.grog其中prog就是语法文件的起始规则名称
    EvalVisitor eval; //实例化自定义的访问器类
    eval.visit(tree); //通过visit()函数开始遍历语法树
    return 0;
*/
}