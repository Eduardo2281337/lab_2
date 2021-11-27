#include <iostream>
#include <string>
#include "unit.h"
#include "codegenerator.h"
#include "codefactory.h"

int main()
{
    ICodeFactory* icd = new JavaCodeFactory();
    CodeGenerator* cd = new CodeGenerator(icd);
    std::cout << cd->generateProgram() << std::endl;
    delete cd;
    ICodeFactory* icd2 = new CSharpCodeFactory();
    cd = new CodeGenerator(icd2);
    std::cout << cd->generateProgram() << std::endl;
    delete cd;
    ICodeFactory* icd3 = new CPPCodeFactory();
    cd = new CodeGenerator(icd3);
    std::cout << cd->generateProgram() << std::endl;

    delete icd;
    delete cd;
    delete icd2;
    delete icd3;
    return 0;
}
