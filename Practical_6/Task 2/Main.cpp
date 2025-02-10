#include "DatabaseCorruption.h"
#include "DatabaseSearch.h"
#include "NetworkInfiltration.h"

#include <iostream>

using namespace std;

int main(){
    int part1 = infiltrateNetworkLayer(21,20);
    if(part1 == 10){
      int part2 =  searchDirectory();
      cout<<"Directory search result: "<<part2<<endl;
      part2 = part2 + 1;
      corruptDatabase(part2);
    }
}

/*
Please note that this Main is not sufficient to prove that your code is correct.
We will run extensive tests on FF to ensure it works correctly for ALL cases.
Just because you match the expected output here does not mean your code is 100% correct.
Please add additional test cases 
(See last week's tutorial for more info on testing and debugging)
*/

/* Expected output 
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
28657
Cracked Level A...
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
Cracked Level B... Firewall cracked
GCD of 22 and 21 is: 1
Plain text password found
Accessing CBC Mainframe...
Highest factorial without overflow is: 12! = 4.79002e+08
Verifying database path...Incorrect index
2 is a prime number.
3 is a prime number.
Verifying database path...Incorrect index
5 is a prime number.
Verifying database path...Incorrect index
7 is a prime number.
Verifying database path...Incorrect index
Verifying database path...Incorrect index
Verifying database path...Incorrect index
11 is a prime number.
Verifying database path...C://home//CEO_Code//DB
Directory search result: 80
Injecting corruption packet 0
Scrambling database entry 1
Overloading data line 2
Injecting corruption packet 3
Scrambling database entry 4
Overloading data line 5
Injecting corruption packet 6
Scrambling database entry 7
Overloading data line 8
Injecting corruption packet 9
Database corruption complete. Data integrity compromised.
*/
