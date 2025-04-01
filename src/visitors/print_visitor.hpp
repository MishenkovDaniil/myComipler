#pragma once 

#include "visitor.hpp"

#include <fstream>
#include <string>

class SymbolTreeVisitor: public Visitor {
public:
    SymbolTreeVisitor(const std::string& filename);
    ~SymbolTreeVisitor();
    void Visit(ASTNode* node)override {};
    void Visit(Expression* expression)override {};
    void Visit(Number* expression)override;
    void Visit(Variable* expression)override;
    void Visit(BinaryExpression* expression)override;
    void Visit(Comparison* expression)override;
    void Visit(Statement* statement)override {};
    void Visit(Assignment* assignment)override;
    void Visit(Declaration* declaration)override;
    void Visit(PrintStatement* print_statement)override;
    void Visit(IfStatement* statement)override;
    void Visit(StatementList* statement)override;
    void Visit(std::string& program)override;

private:
    void PrintTabs();
    std::ofstream stream;
    int num_tabs= 0;
};