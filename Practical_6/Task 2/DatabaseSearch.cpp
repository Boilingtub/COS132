#include"DatabaseSearch.h"
#include <iostream>
using namespace std;

const int maxInt = 2147483647;

int searchDirectory(){
    double factorial = 1;
    int i;
    for(i = 1;factorial <= maxInt/i; i++, factorial *= i);
    cout << "Highest factorial without overflow is: "<<i<<"! = "<<factorial<<endl;
    return findDatabaseFile(i);
}

int findDatabaseFile(int fileIndex){
    for(int i = 1; i <= fileIndex; i++) {
        if(isPrime(i))
            cout << i << " is a prime number.\n";
        else { 
            int verifyDatabasePath_result = verifyDatabasePath(i);
            if (verifyDatabasePath_result != 0)
                return verifyDatabasePath_result;
            else
                continue;
        }
    }
    return 0;
}

int verifyDatabasePath(int dbIndex){
    if(dbIndex == 12) {
        cout << "Verifying database path...C://home//CEO_Code//DB\n";
        return 80;
    }
    else {
        cout << "Verifying database path...Incorrect index\n";
        return 0;
    }
}

bool isPrime(int num){
    if(num <= 1)
        return false;
    if(num == 2 || num == 3)
        return true;
    for(int i = 2; i < num; i++) {
       if(num%i == 0)
           return false;
    }
    return true;
}
