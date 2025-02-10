#include"DatabaseCorruption.h"
#include <iostream>
using namespace std;

void corruptDatabase(int securityLevel){
    if(securityLevel > 80)
        initiateCorruptionSequence();
    else
        cout << "Security level too low to initiate corruption."<<endl;
}

void initiateCorruptionSequence(){
    for(int i = 0; i< 10; i++) {
        switch(i%3) {
            case 0: 
                cout << "Injecting corruption packet "<<i<<endl;
                break;
            case 1: 
                cout << "Scrambling database entry "<<i<<endl;
                break;
            case 2: 
                cout << "Overloading data line "<<i<<endl;
                break;
        }
    }
    finalizeCorruption();
}

void finalizeCorruption(){
    cout << "Database corruption complete. Data integrity compromised."<<endl;
}
