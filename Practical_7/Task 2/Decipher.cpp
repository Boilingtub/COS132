#include <iostream>
#include "NumberUtils.h"
#include "StringUtils.h"
#include "Decipher.h"

using namespace std;
char shiftCharacter(char input, int shift){
    char base;
    if(input >= 'A' && input <= 'Z')
        base = 'A';
    else if(input >= 'a' && input <= 'z')
        base = 'a';
    else 
        cout << "invalid Character";
    
    char offset = input - base;
    char shiftedIndex = offset + shift;
    shiftedIndex = shiftedIndex % 26;
    return shiftedIndex+base;

}

string decipher(int num1, string str1, int num2, string str2) {
    if(isPalindrome(num1))
        str1 = returnDecodedString(str1,sumOfDigits(num1));    
    if(isArmstrong(num2) || isPerfect(num2)) 
        str2 = returnDecodedString(str2,sumOfDigits(num2));
    return str1+"-"+str2;
}
