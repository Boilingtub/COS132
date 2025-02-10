#include "testIf.h"
#include <iostream>
using namespace std;

void checkEvenOrOdd(int number)
{

    if (number > 0) {
        if (number % 2 == 0)
            cout << "The number is positive and even." << endl;
        else
            cout << "The number is odd." << endl;
    }
    else if (number == 0)
        cout << "The number is zero." << endl;
    else
        cout << "The number is negative." << endl;
}

void checkWhereXRanks(int x, int y, int z)
{

    if (x > z)
    {
        if (x > y)
            cout << "X is the greatest\n";
        else
            cout << "X is neither the smallest nor the greatest\n";
    }
    else
    {
        if (x < y)
            cout << "X is the smallest\n";
        else
            cout << "X is neither the smallest nor the greatest\n";
    }
}

void checkInRange(int x)
{

    if (x < 10 && x > 0) {
        cout << "X is greater than 0" << endl;
        cout << "X is smaller than 10" << endl;
    }
}
