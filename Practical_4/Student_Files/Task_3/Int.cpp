#include "Int.h"

int findInt(int target, int current)
{
    return current==target ? current:findInt(target,current+1);
}

char convertChar(int character){
    return character + '0';


}

