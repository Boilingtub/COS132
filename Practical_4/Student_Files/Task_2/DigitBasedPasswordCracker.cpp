#include "DigitBasedPasswordCracker.h"

#include<iostream>
using namespace std;
int crackPassswordPerDigit(int password, int numDigits){
    return crackDigit(password,0,numDigits,0);
}


int processDigitGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    int digit_significance = (password / pow(10,numDigitsLeftToGuess-1));
    int prev_digits_significance = (password / pow(10,numDigitsLeftToGuess));
    int extracted_digit = digit_significance - (prev_digits_significance*10);

    if(extracted_digit == guessedDigit) {
        currentPasswordGuess = currentPasswordGuess + guessedDigit*pow(10,numDigitsLeftToGuess-1);
        crackDigit(password,0,numDigitsLeftToGuess-1,currentPasswordGuess);
    }
    else 
        crackDigit(password,guessedDigit+1,numDigitsLeftToGuess,currentPasswordGuess);
    
    return currentPasswordGuess;
}


int crackDigit(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    printCurrentGuess(password, guessedDigit, numDigitsLeftToGuess, currentPasswordGuess);

    if(numDigitsLeftToGuess != 0)
        return processDigitGuess(password, guessedDigit, numDigitsLeftToGuess, currentPasswordGuess);
    else
        return currentPasswordGuess;

}
