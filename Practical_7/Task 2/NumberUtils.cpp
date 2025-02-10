#include "NumberUtils.h"
#include <cmath>


#include <iostream>
int reverseInteger(int number) {
    int reversed = 0; 
    while(number >= 10) {
        reversed = reversed*10 + (number % static_cast<int>((number/10)*10)); 
        number = number / 10;
    }
    reversed = reversed*10 + number;
    return reversed;
}
bool isPalindrome(int number) {
    return number == reverseInteger(number);
}
int sumOfDigits(int number) {
    int sum = 0;
    while(number >= 10) {
        sum = sum + (number % static_cast<int>((number/10)*10));
        number = number /10;
    }
    sum = sum + number;
    return sum;
}
int getNumberOfDigits(int number) {
    int digits = 0;
    while(number > 0) {
        number = number/10;
        digits++;
    }
    return digits;
}
bool isArmstrong(int number) {
    int original = number;
    int digits = getNumberOfDigits(number);
    int sum = 0;
    while(number >= 10) {
        sum = sum + pow(number % static_cast<int>((number/10)*10), digits);
        number = number /10;
    }
    sum = sum + pow(number,digits);
    return original == sum;
}
bool isPerfect(int number) {
    int sum = 0;
    for(int i = 1; i < number; i++) {
        if(number%i == 0)
            sum = sum + i;
    }
    return sum == number;
}
