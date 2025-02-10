#include "TuringMachine.h"
#include <iostream>
using namespace std;

void newTest(string name){
     cout<<endl<<"=============================================="<<endl;
     cout<<name<<endl;
     cout<<"=============================================="<<endl<<endl;

}

void setTape(char tape[], int tapeSize, string input){
    // Initialize the tape with underscores
    for (int i = 0; i < tapeSize; i++) {
        tape[i] = '_';
    }

    string binaryNumber = input; 
    int start = (tapeSize / 2) - (binaryNumber.length() / 2); // Center the binary number on the tape
    for (int i = 0; i < binaryNumber.length(); i++) {
        tape[start + i] = binaryNumber[i];
    }
}

void alternativeRules_Test() {
    const int tapeSize = 50;
    const int numRules = 14;
    string rules[numRules][5] = {
        {"start", "1", "co1", "i", "R"},
        {"co1", "1", "co1", "1", "R"},
        {"co1", "_", "co2", "_", "R"},
        {"co2", "_", "ba", "1", "L"},
        {"co2", "1", "co2", "1", "R"},
        {"ba", "1", "ba", "1", "L"},
        {"ba", "_", "ba1", "_", "L"},
        {"ba1", "1", "ba2", "1", "L"},
        {"ba2", "1", "ba2", "1", "L"},
        {"ba2", "i", "start", "i", "R"},
        {"ba1", "i", "re", "1", "L"},
        {"re", "i", "re", "1", "L"},
        {"re", "_", "accept", "_", "R"},
        {"re", "|", "accept", "|", "R"}
    };
    char tape[tapeSize];
    newTest("Duplicate Test");
    string input = "111";
    setTape(tape, tapeSize, input);
    cout << "Initial tape: ";
    for (int i = 0; i < tapeSize; i++) {
        cout << tape[i];
    }
    cout << endl;
    simulateTuringMachine(tape, rules, numRules, tapeSize);
}

int main() {
    const int numRules = 6;
    const int tapeSize = 50;
    string rules[numRules][5] = {
        {"start", "0", "start", "0", "R"},
        {"start", "1", "start", "1", "R"},
        {"start", "_", "check", "_", "L"},
        {"check", "0", "accept", "0", "R"},
        {"check", "1", "reject", "1", "R"},
        {"check", "_", "reject", "_", "R"}
    };


    char tape[tapeSize];  // Declare the tape array

    newTest("Even Test");

    // Initialize the tape 
    string input = "110";
    setTape(tape, tapeSize, input);

    cout << "Initial tape: ";
    for (int i = 0; i < tapeSize; i++) {
        cout << tape[i];
    }
    cout << endl;


    simulateTuringMachine(tape, rules, numRules, tapeSize);

    newTest("Odd Test");

    // Initialize the tape 
    input = "111";
    setTape(tape, tapeSize, input);


    cout << "Initial tape: ";
    for (int i = 0; i < tapeSize; i++) {
        cout << tape[i];
    }
    cout << endl;


    simulateTuringMachine(tape, rules, numRules, tapeSize);

    alternativeRules_Test();
    return 0;
}

/**
 * Expected output is given here. Note these test cases are not enough.
 * We will test with different rulesets as well to ensure your simulator works for all types of rules.
 * This particular ruleset checks whether a binary number is odd or even
 * 
*/

/*

==============================================
Even Test
==============================================

Initial tape: ________________________110_______________________
Final tape: ________________________110_______________________
Machine ended in state: accept

==============================================
Odd Test
==============================================

Initial tape: ________________________111_______________________
Final tape: ________________________111_______________________
Machine ended in state: reject

*/


/*
Alternative rulset to test with:

const int numRules = 14;
string rules[numRules][5] = {
    {"start", "1", "co1", "i", "R"},
    {"co1", "1", "co1", "1", "R"},
    {"co1", "_", "co2", "_", "R"},
    {"co2", "_", "ba", "1", "L"},
    {"co2", "1", "co2", "1", "R"},
    {"ba", "1", "ba", "1", "L"},
    {"ba", "_", "ba1", "_", "L"},
    {"ba1", "1", "ba2", "1", "L"},
    {"ba2", "1", "ba2", "1", "L"},
    {"ba2", "i", "start", "i", "R"},
    {"ba1", "i", "re", "1", "L"},
    {"re", "i", "re", "1", "L"},
    {"re", "_", "accept", "_", "R"},
    {"re", "|", "accept", "|", "R"}
};


This ruleset accepts a string of 1s and duplicates it. Make sure the input does not contain 0s.
Eg.
Initial tape: ________________________111_______________________
Final tape: ________________________111_111___________________

*/
