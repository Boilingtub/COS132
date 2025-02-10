#include"TuringMachine.h"
void initializeMachine(char tape[], int& head, const string& currentState,
                       int tapeSize) {
    for(int i = 0; i < tapeSize; i++) {
        if(tape[i] != '_') {
            head = i;
            return;
        }
    }
    head = 0;
}

bool matchRule(const string& currentState, const char& currentSymbol,
               string rules[][5], int numRules,
               string& newState, char& newSymbol, string& move) {
    bool found = false;
    for(int i = 0; i < numRules; i++) {
        if(rules[i][0] == currentState)
            if(rules[i][1][0] == currentSymbol) {
                found = true;
                newState = rules[i][2];
                newSymbol = rules[i][3][0];
                move = rules[i][4];
                break;
            }
    }
    return found;
}

void applyRule(char tape[], int& head, const string& newState,
               string& currentState,
               const char& newSymbol, const string& move,
               int tapeSize) {
    currentState = newState;
    tape[head] = newSymbol;
    if(head != tapeSize-1 && head > 0) 
        head = (move[0] == 'R') ? head+1:(move[0] == 'L') ? head-1:head;
    
}

bool checkFinalState(const string& currentState) {
    if(currentState == "accept" || currentState == "reject")
        return true;
    else
        return false;

}

void printOutput(const char tape[], const string& currentState,
                 int tapeSize) {
    cout << "Final tape: ";
    for(int i = 0; i < tapeSize; i++)
        cout << tape[i];
    cout << "\nMachine ended in state: " << currentState << "\n";
}

void simulateTuringMachine(char tape[], string rules[][5],
                           int numRules, int tapeSize) {
    int head;
    string currentState = "start";
    string newState;
    char newSymbol;
    string move;
    initializeMachine(tape , head , currentState , tapeSize);
    while(checkFinalState(currentState) == false) {
        matchRule(currentState, tape[head], rules, numRules,
                  newState, newSymbol, move );
        applyRule(tape, head, newState, currentState , newSymbol,
                  move, tapeSize);
    }
    printOutput(tape, currentState, tapeSize);
}


