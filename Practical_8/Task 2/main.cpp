#include "RoomLocater.h"
#include "BombDefusing.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{

    // Add your tests here
    UT_substrSearch();
    std::cout << "(EXPECT \'A\') indexToChar(65) == ";
    indexToChar(65);
    std::cout << "\n";
    UT_findPairs(); 
    // You can use assert for tests
    return 0;
}

