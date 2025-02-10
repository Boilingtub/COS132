#ifndef TURING_MACHINE_H
#define TURING_MACHINE_H
#include <iostream>
#include <string>
using namespace std;
void initializeMachine(char tape[], int& head, const string& currentState,
                       int tapeSize);

bool matchRule(const string& currentState, const char& currentSymbol,
               string rules[][5], int numRules,
               string& newState, char& newSymbol, string& move);

void applyRule(char tape[], int& head, const string& newState,
               string& currentState,
               const char& newSymbol, const string& move,
               int tapeSize);

bool checkFinalState(const string& currentState);

void printOutput(const char tape[], const string& currentState,
                 int tapeSize);

void simulateTuringMachine(char tape[], string rules[][5],
                           int numRules, int tapeSize);

#endif // TURING_MACHINE_H
