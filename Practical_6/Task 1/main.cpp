#include <iostream>
#include "testIf.h"
#include "testSwitch.h"
#include "testFor.h"

using namespace std;

int main() {
    // Test cases for checkEvenOrOdd
    cout << "Testing checkEvenOrOdd with input 4:" << endl;
    checkEvenOrOdd(4);

    // Test cases for checkWhereXRanks
    cout << "\nTesting checkWhereXRanks with inputs x=3, y=2, z=1:" << endl;
    checkWhereXRanks(3, 2, 1);

    // Test cases for checkInRange
    cout << "\nTesting checkInRange with input x=5:" << endl;
    checkInRange(5);

    // Test cases for testDayOfWeek
    cout << "\nTesting testDayOfWeek with input day=3 (Wednesday):" << endl;
    testDayOfWeek(3);

    // Test cases for switchRanges
    cout << "\nTesting switchRanges with input score=85:" << endl;
    switchRanges(85);

    // Test cases for testBasicFor
    cout << "\nTesting testBasicFor with upTo=5:" << endl;
    testBasicFor(5);

    // Test cases for testDoubleLoopVar
    cout << "\nTesting testDoubleLoopVar with x=0 and y=5:" << endl;
    testDoubleLoopVar(0, 5);

    // Test cases for printOnlyEvenInLoop
    cout << "\nTesting printOnlyEvenInLoop with upTo=10:" << endl;
    printOnlyEvenInLoop(10);

    // Test cases for printPowers
    cout << "\nTesting printPowers with x=2 and upTo=100:" << endl;
    printPowers(2, 100);

    return 0;
}

/*
This main does not test all cases.
Please add extra tests
*/

/* Expected output:
Testing checkEvenOrOdd with input 4:
The number is positive and even.

Testing checkWhereXRanks with inputs x=3, y=2, z=1:
X is the greatest

Testing checkInRange with input x=5:
X is greater than 0
X is smaller than 10

Testing testDayOfWeek with input day=3 (Wednesday):
Wednesday

Testing switchRanges with input score=85:
Excellent

Testing testBasicFor with upTo=5:
i: 0 
i: 1 
i: 2 
i: 3 
i: 4 


Testing testDoubleLoopVar with x=0 and y=5:
i: 0, j: 5 
i: 1, j: 4 
i: 2, j: 3 


Testing printOnlyEvenInLoop with upTo=10:
i: 0 
i: 2 
i: 4 
i: 6 
i: 8 


Testing printPowers with x=2 and upTo=100:
i: 2 
i: 4 
i: 8 
i: 16 
i: 32 
i: 64 
*/
