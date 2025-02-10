#include <iostream>
#include "PasswordCracker.h"
#include "Int.h"
#include "Char.h"
#include "SpecialChar.h"
using namespace std;
int main()
{
    initializePasswordCracker("y83MG$#Fjf7?b");

    checkOutput(findChar('y'), 0);        
    checkOutput(convertChar(findInt(8)), 1);    
    checkOutput(convertChar(findInt(3)), 2);          
    checkOutput(findChar('M'), 3);
    checkOutput(findChar('G'), 4);
    checkOutput(findSpecialChar('$'), 5);
    checkOutput(findSpecialChar('#'), 6);
    checkOutput(findChar('F'), 7);
    checkOutput(findChar('j'), 8);
    checkOutput(findChar('f'), 9);
    checkOutput(convertChar(findInt(7)), 10);
    checkOutput(findSpecialChar('?'), 11);
    checkOutput(findChar('b'), 12);


    return 0;
}
