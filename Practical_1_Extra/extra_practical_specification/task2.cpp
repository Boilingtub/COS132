#include <iostream>
#include <string>

void identifyType(int) {
    std::cout << "int" << std::endl;
}
void identifyType(float) {
    std::cout << "double" << std::endl;
}
void identifyType(double) {
    std::cout << "double" << std::endl;
}
void printBreak() {
    std::cout << "###" << std::endl;
}

int main() {
    // DO NOT CHANGE ANY CODE ABOVE THIS LINE
    printBreak();

    // 1
    int x = 3.9;
    std::cout << x << std::endl;
    identifyType(x);

    printBreak(); // do not change

    // 2
    int y = 2.7;
    std::cout << y << std::endl;
    identifyType(y);

    printBreak(); // do not change
    
    // 3
    std::string text = 'CorrectThisString';
    std::cout << text << std::endl;

    printBreak(); // do not change

    // 4 
    int subtractionResult = 5 + 3;
    std::cout << subtractionResult << std::endl;

    printBreak(); // do not change

    // 5
    int safeDivisionDenominator = 0;
    std::cout << safeDivisionDenominator << std::endl;
    int safeDivisionResult = 4 / safeDivisionDenominator++;
    std::cout << safeDivisionResult << std::endl;
    std::cout << safeDivisionDenominator << std::endl;

    printBreak(); // do not change

    // 6
    double preciseDivisionNumerator = 5.0;
    int preciseDivision = preciseDivisionNumerator / 2.0;
    std::cout << preciseDivision << std::endl;
    identifyType(preciseDivision);

    printBreak(); // do not change

    // 7 
    int numerator3 = 10;
    int denominator3 = 4;
    float impreciseDivisionResult = numerator3 / denominator3;
    std::cout << impreciseDivisionResult << std::endl;
    identifyType(impreciseDivisionResult);

    printBreak(); // do not change

    // 8
    double num1 = 4.4;
    double num2 = 2.5;
    
    std::cout << "Sum of num1 and num2 = " << () << std::endl; //Replace () with the correct arithmetic expression
    std::cout << "num1 divided by num2 = " << () << std::endl; //Replace () with the correct arithmetic expression
    std::cout << "The product of num1 and num2 = " << () << std::endl; //Replace () with the correct arithmetic expression

    printBreak(); // do not change
}