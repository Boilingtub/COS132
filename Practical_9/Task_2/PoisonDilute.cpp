#include "PoisonDilute.h"
#include <iostream>

int* findNthLargest(int *arr, int size, int n, int *largest) {
    for(int i = 0; i < n; i++) {
        int big = 0;
        int index = 0;
        for(int j = 0; j < size; j++)
            if(arr[j] > big) {
                big = arr[j];
                index = j;
            }
        arr[index] = 0;
        largest[n-i-1] = big;
    }
    return largest; 
}
