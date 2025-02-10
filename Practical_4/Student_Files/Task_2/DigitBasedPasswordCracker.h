#ifndef DigitBasedPasswordCracker_h
#define DigitBasedPasswordCracker_h

#include "Printer.h"
#include "Comparisons.h"
#include <cmath>

int crackPassswordPerDigit(int password, int numDigits);

int processDigitGuess(int password, int currentDigit, int numDigits, int currentGuess);

int crackDigit(int password, int currentDigit, int numDigits, int currentGuess = 0);

#endif