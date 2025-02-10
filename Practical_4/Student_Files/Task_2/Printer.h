#ifndef Printer_h
#define Printer_h


void printGuess(int guess);

void printCurrentGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess);

void printNotFound();

int foundPassword(int password);

#endif