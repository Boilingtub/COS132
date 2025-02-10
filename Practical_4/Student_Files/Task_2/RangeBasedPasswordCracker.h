#ifndef RangeBasedPasswordCracker_h
#define RangeBasedPasswordCracker_h

#include "Comparisons.h"
#include "Printer.h"

int decideAndSearch(int guess, int password, int low, int high);

int crackPassword(int low, int high, int password);


#endif