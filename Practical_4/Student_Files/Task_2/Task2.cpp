#include <iostream>
#include "RangeBasedPasswordCracker.h"
#include "DigitBasedPasswordCracker.h"

using namespace std;

int generatePassword(int numDigits = 4){
    int min = pow(10, numDigits - 1); // Minimum for numDigits
    int max = pow(10, numDigits) - 1; // Maximum for numDigits
    int password = rand() % (max - min + 1) + min;
    return password;
}

int main()
{
    srand(9); 
    int numDigits = 9;
    int password = generatePassword(numDigits);
    crackPassword(1, pow(10,numDigits)-1, password);
    int pw = crackPassswordPerDigit(password, numDigits);
    
    
    
    return 0;
}
