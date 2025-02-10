#include "loop.h"

void printCollatz(int num){
    std::cout << "Starting from " << num << "\n";
    while(1) {
        if(num == 1) {
            std::cout << num <<"\n";
            break;
        }
        else {
            std::cout << num << "\n";
            if(num%2 != 0)
                num = 3*num+1;
            else
                num = num/2;
        }
    }
}

void printSquares(int n){
    for(int i = 1; i <= n; i++)
        std::cout << "Square of " << i << " is " << i*i << "\n";
}

void printDiamond(int halfSize){
    for(int i=0, k = halfSize*2-2; i < halfSize*2-1; i++, k--) {    
        int facmult = i > halfSize-1 ? k:i;
        char str[halfSize + facmult];
        str[halfSize+facmult] = '\0';
        for(int j=0; j < halfSize+facmult-1; j++)
            str[j] = ' ';
        for(int j=(halfSize-facmult)-1; j <= (halfSize+facmult)-1; j++)
            str[j] = '*'; 
        cout << str << "\n";
    }
}
