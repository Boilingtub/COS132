#ifndef PASSWORDCRACKER_H
#define PASSWORDCRACKER_H

#include <iostream>
#include <vector>
#include <string>

// Declare global variables
extern std::string password;
extern std::string revealed;
extern std::vector<bool> revealedPositions;

// Function declarations
void initializePasswordCracker(const std::string& pwd);
void checkOutput(char output, int index);
bool isAlmostCorrect(char guess, char actual);
void displayProgress();

#endif // PASSWORDCRACKER_H

