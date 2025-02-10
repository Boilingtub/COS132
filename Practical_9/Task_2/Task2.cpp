#include <iostream>
#include "TreasureMap.h"
#include "MessageDecoder.h"
#include "PoisonDilute.h"
#include "Story.h"
#include <cstring>
using namespace std;

int main(){
    const char encoded[] = "eW91IGNyZWF0ZWQgdGhpcw"; 
    int encodedSize = sizeof(encoded);
    char decoded[encodedSize]; 
    decodeBase64(encoded, decoded, sizeof(encoded) - 1);
    cout << "Decoded string: " << decoded << endl;
    if (strcmp(decoded, "you created this") == 0) {
        part1();
    }
    char map[ROWS][COLS] = {
        {'m', '-', '-', 'a', '-'},
        {'-', 'c', '-', '-', 'c'},
        {'-', '-', 'h', 'X', '-'},
        {'i', '-', '-', 't', 'o'}
    };

    // Define the jumps array to follow the path and collect characters
    int jumps[] = {0, 3, 6, 11 ,9 , 16, 10, 12, 15, 8, 18, 2,2,2, 19, 13}; 
    char result[10]; 

    bool found = findTreasure(map, jumps, sizeof(jumps) / sizeof(jumps[0]), result);

    if (found) {
        cout << "Treasure found. Collected word: " << result << endl;
        part2();
    }
    int array[] = {7, 1, 5, 3, 9, 6, 2,11,1232,5465,23,67,87,217};
    int n = 10; 
    int *largest = new int[n];
    largest = findNthLargest(array, sizeof(array) / sizeof(array[0]), n, largest);
    if(largest[n-n]==6){
        part3();
    }
    delete[] largest; 
    return 0;
}
