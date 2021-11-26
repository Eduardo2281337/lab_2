#include <iostream>
#include <string>
#include "unit.h"
#include "codegenerator.h"
#include "codefactory.h"

int main()
{
    ICodeFactory* icd = new CPPCodeFactory();
    CodeGenerator* cd = new CodeGenerator(icd);
    std::cout << cd->generateProgram() << std::endl;
    delete icd;
    delete cd;
    return 0;
}
