#include "testFor.h"
#include <iostream>

using namespace std;

void testBasicFor(int upTo){
    for (int i = 0; i < upTo; i++) {
        cout << "i: " << i << " \n";
    }
    cout<<endl;
}

void testDoubleLoopVar(int x, int y){
    for (int i = x , j = y; i <= j; i++ , j--) {
        std::cout << "i: " << i << ", j: " << j << " \n";
    }
    std::cout << "\n";
}

void printOnlyEvenInLoop(int upTo){
    //Problem 3
    for (int i = 0; i < upTo; i+=1) {
        if(i%2==0)
            cout << "i: " << i << " \n";
    }
    cout << "\n";
}

void printPowers(int x, int upTo){
    for (int i = x; i < upTo; i*=x) {
        cout << "i: " << i << " \n";
    }
    cout << "\n";
}
