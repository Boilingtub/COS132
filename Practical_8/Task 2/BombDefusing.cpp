#include "BombDefusing.h"
#include <iostream>

int calculateSize(int* arr) {
    int size = 0;
    while(*arr != -1) {
        size++;
        arr++;
    }
    return size;
}

void findPairs(int* arr, int size) {
    bool* paired = new bool[size];
    for(int i = 0; i < size; i++)
        paired[i] = false;
    
    std::cout << "Starting wire comparison...\n";
    int i = 0;
    int j = i+1;
    while(i < size) {
        j=i+1;
        while(j < size) {
            if(arr[i] == arr[j] && paired[j] == false && paired[i] == false) {
                std::cout << "Match found: Wire " << i+1
                    << " and Wire " << j+1 << " (Value: "
                    << arr[i] << ") are a pair.\n";
                paired[i] = true;
                paired[j] = true;
                j++;
                break;
            } 
                j++;
        }
        i++;
    }
    
    for(i = 0; i < size; i++) {
        if(paired[i] == false) {
            std::cout << "No match found for Wire " << i+1
                << " (Value: " << arr[i]
                << "). Cut this wire to defuse the bomb!\n";
        }
    }
    delete[] paired;
}

    void UT_findPairs() {
        int arr[] = {1,2,1,1,-1};
        findPairs(arr, calculateSize(arr));
        
    }
