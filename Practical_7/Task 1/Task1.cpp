#include <iostream>
#include "loop.h"  

using namespace std;

int main() {
    // Test printCollatz
    cout << "Testing printCollatz with input 6:\n";
    printCollatz(6);
    cout << endl;

    // Test printSquares
    cout << "Testing printSquares with input 3:\n";
    printSquares(3);
    cout << endl;

    // Test printDiamond
    cout << "Testing printDiamond with halfSize 3:\n";
    printDiamond(3);
    cout << endl;

    return 0;
}

/* Expected output
Testing printCollatz with input 6:
Starting from 6
6
3
10
5
16
8
4
2
1

Testing printSquares with input 3:
Square of 1 is 1
Square of 2 is 4
Square of 3 is 9

Testing printDiamond with halfSize 3:
  *
 ***
*****
 ***
  *

*/
