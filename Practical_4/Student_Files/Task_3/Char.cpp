#include "Char.h"

char findNextChar(char current) 
{
    return current=='z' ? 'A':current=='Z' ? 'a':current+1;
}


char findChar(char target, char current)
{
    return current == target ? current:findChar(target, findNextChar(current));
}
