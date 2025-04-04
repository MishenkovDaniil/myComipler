#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "parsing/ast.hpp"
#include "parsing/parser.hpp"
#include "tokenization/tokenize.hpp"
#include "program.hpp"

int main(int argc, const char **argv) {
    if (argc != 3) {
        std::cout << "Wrong number of parameters: must be 2 - file to execute and file to print ast tree to.\n";
        return 0;
    }

    std::string progname = argv[1];
    std::string astname = argv[2];
    Program prog(progname, astname);
    prog.Run();
}
