#include <iostream>
#include <string>
void printSection() {
    std::cout << "###" << std::endl;
}
//If you change anything above here - you will get 0 for the practical !!!
int main() {
        // 1
        printSection(); // do not change
        int a;
        std::cout<<"Enter a value for a: ";
        std::cin>>a;
        std::cout<<a<<std::endl;

        // 2
        printSection(); // do not change
        int c;
        int d = 2;
        std::cout << "Enter the value for c: ";
        std::cin >> c;
    
        std::cout << "Is c equal to d? " << ( c == d ) << std::endl; //Replace () with the correct boolean expression
        std::cout << "Is c greater than d? " << (c > d) << std::endl; //Replace () with the correct boolean expression
        std::cout << "Is c less than or equal to d? " << (c <= d) << std::endl; //Replace () with the correct boolean expression
        std::cout << "Is c not equal to d? " << ( c != d) << std::endl; //Replace () with the correct boolean expression

        // 3
        printSection(); // do not change
        double e;
        double f = 2.5;
        std::cout << "Enter the value for e: ";
        std::cin >> e;
    
        std::cout << "e + f = " << (e+f) << std::endl; //Replace () with the correct boolean expression
        std::cout << "e - f = " << (e-f) << std::endl; //Replace () with the correct boolean expression
        std::cout << "e * f = " << (e*f) << std::endl; //Replace () with the correct boolean expression

        // 4
        printSection(); // do not change
        int g;
        std::cout << "Enter a value for g: ";
        std::cin >> g;
        bool isOdd = ( (g%2) == 1); //Replace () with the correct boolean expression
        std::cout << isOdd << std::endl;

        // 5
        printSection(); // do not change
        int h;
        std::cout << "Enter a value for h between 1 and 100 inclusive: ";
        std::cin >> h;
        bool isInRange = (h >=1 && h <= 100); ///Replace () with the correct boolean expression
        std::cout << isInRange << std::endl;

        // 6
        printSection(); // do not change
        int i,j,k;
        std::cout << "Enter a value for i: ";
        std::cin >> i;
        std::cout << "Enter a value for j: ";
        std::cin >> j;
        std::cout << "Enter a value for k: ";
        std::cin >> k;
        bool isAscending = (i < j && j < k); //Replace () with the correct boolean expression
        std::cout << isAscending << std::endl;

        // 7
        printSection(); // do not change
        int l,m;
        std::cout << "Enter a value for l: ";
        std::cin >> l;
        std::cout << "Enter a value for m: ";
        std::cin >> m;
        bool isEitherPositive = (l <= 0 || m <= 0); //Replace () with the correct boolean expression
        std::cout << isEitherPositive << std::endl;
        
        // 8
        printSection(); // do not change
        bool n,o,p;
        std::cout << "Enter a value for n: ";
        std::cin >> n;
        std::cout << "Enter a value for o: ";
        std::cin >> o;
        std::cout << "Enter a value for p: ";
        std::cin >> p;
        bool onlyOneTrue = ((n==true && o==false && p==false) ||
                            (n==false && o==true && p==false) ||
                            (n==false && o==false && p==true)); //Replace () with the correct boolean expression
        std::cout << onlyOneTrue << std::endl;

        // 9
        printSection(); // do not change
        int q;
        std::cout << "Enter a value for q: ";
        std::cin >> q;
        bool isPositiveAndEvenOrMultipleOf5 = (q > 0 && (q%2==0 || q%5==0)); //Replace () with the correct boolean expression
        std::cout << isPositiveAndEvenOrMultipleOf5 << std::endl;

        // 10
        printSection(); // do not change
        int r;
        std::cout << "Enter a value for r: ";
        std::cin >> r;
        int s;
        std::cout << "Enter a value for s: ";
        std::cin >> s;
        bool isPositiveSumNotNegativeDifference = ( (r+s)>=0 && !((r-s)<0)); //Replace () with the correct boolean expression
        std::cout << isPositiveSumNotNegativeDifference  << std::endl;
        printSection(); // do not change
}
