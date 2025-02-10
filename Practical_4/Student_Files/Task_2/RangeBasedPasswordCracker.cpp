#include "RangeBasedPasswordCracker.h"
#include <iostream>

int decideAndSearch(int guess, int password, int low, int high) {
    // Implement here 
    int answer = guess < password ? crackPassword(guess+1,high,password):crackPassword(low,guess-1,password); 
    std::cout << answer;
    return answer;
}


int crackPassword(int low, int high, int password) {
    // Implement here
    int midpt = (high+low)/2;
    printGuess(midpt);
    if(isEqual(midpt,password)) {
        foundPassword(midpt);
        return midpt;
    }
    else
        return decideAndSearch(midpt,password,low,high);
}
