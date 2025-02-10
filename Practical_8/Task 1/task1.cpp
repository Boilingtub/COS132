#include "task1.h"

void sortnumswap(int &a , int &b) {
    int t = a;
    a = b;
    b = t;
}

void sortNumbers(int &a, int &b, int &c) {
    if(a < b)
        sortnumswap(a,b);
    if(a < c)
        sortnumswap(a,c);
    if(b < c)
        sortnumswap(b,c);
}
    
    void UT_sortNumbers() {
        int a =1, b=2, c=8;    
        sortNumbers(a,b,c);
        if(a==8&&b==2&&c==1)
            std::cout << "(1) UT_sortNumbers PASSED\n";
        else
            std::cout << "(1) UT_sortNumbers FAILED\n";
        
        a=4,b=4,c=8;
        sortNumbers(a,b,c);
        if(a==8&&b==4&&c==4)
            std::cout << "(2) UT_sortNumbers PASSED\n";
        else
            std::cout << "(2) UT_sortNumbers FAILED\n";

    }

void swap(int** ptrA, int** ptrB) {
    int* temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}
    void UT_swap() {
        int a = 2 , b = 4;
        int *p_a = &a, *p_b = &b;
        std::cout << p_a << " = " << *p_a << "\n";
        std::cout << p_b << " = " << *p_b << "\n";
    
    swap(&p_a,&p_b);
        if(*p_a==4 && *p_b==2)
            std::cout << "(1) UT_swap PASSED\n";
        else
            std::cout << "(2) UT_swap FAILED\n";
    }
