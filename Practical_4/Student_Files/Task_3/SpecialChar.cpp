#include "SpecialChar.h"

char findSpecialChar(char target, int current)
{ 
    return current==target ? current:findSpecialChar(target,current+1);
}
