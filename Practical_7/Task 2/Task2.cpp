#include "Decipher.h"
#include "StringUtils.h"
#include <iostream>
#include "NumberUtils.h"

using namespace std;
void Tests() {
    if(reverseInteger(1234) == 4321)
        cout << "\n1: Passed ReverseInteger test\n";
    else
        cout << "\n!!!1: Failed ReverseInteger test\n";
    if(isPalindrome(12321))
        cout << "\n1: Passed isPalindrome test 1\n";
    else
        cout << "\n!!!1: Failed isPalindrome test 1\n";

    if(isPalindrome(12345) == false)
        cout << "\n2: Passed isPalindrome test 2\n";
    else
        cout << "\n!!!2: Failed isPalindrome test\n";

    if(sumOfDigits(123) == 6)
        cout << "\n1: Passed sumOfDigits test\n";
    else
        cout << "\n!!!1: Failed sumOfDigits test\n";

    if(getNumberOfDigits(12345) == 5)
        cout << "\n1: Passed getNumberOfDigits test\n";
    else
        cout << "\n!!!1: Failed getNumberOfDigits test\n";

    if(isArmstrong(153))
        cout << "\n1: Passed isArmstrong test 1\n";
    else
        cout << "\n!!!1: Failed isArmstrong test\n";

    if(isArmstrong(222) == false)
        cout << "\n2: Passed isArmstrong test 2\n";
    else
        cout << "\n!!!2: Failed isArmstrong test 2\n";

    if(isPerfect(6)) 
        cout << "\n1: Passed isPerfect test 1\n";
    else
        cout << "\n!!!1: Failed ReverseInteger text\n";

    if(isPerfect(197) == false)
        cout << "\n2: Passed isPerfect test 2\n";
    else
        cout << "\n!!!2: Failed isPerfect test 2\n";

}

int main() {
    //Tests();
    int code1 = 121;  // A palindrome
    int code2 = 153;  // An Armstrong number (not a perfect number)

    string enc1 = "Bejwheva pda zalhkuiajp kb pda oqnraehhwjya japskng xu M3 xabkna pda qlykiejc ahaypekjo";
    string enc2 = "Vejliv rcc dvuzr tfekifc gifkftfcj riv rtkzmv svwfiv kyv X20 jlddzk";
    
    std::cout << "Encoded strings: \n\t" << enc1 << "\n\t" << enc2 << std::endl;

    string decoded = decipher(code1, enc1, code2, enc2);

    std::cout << "Decoded strings:\n" << decoded << std::endl;

    return 0;
}
/* 
Expected output:

Encoded strings: 
        Bejwheva pda zalhkuiajp kb pda oqnraehhwjya japskng xu M3 xabkna pda qlykiejc ahaypekjo
        Vejliv rcc dvuzr tfekifc gifkftfcj riv rtkzmv svwfiv kyv X20 jlddzk
Decoded strings:
Finalize the deployment of the surveillance network by Q3 before the upcoming elections-Ensure all media control protocols are active before the G20 summit
*/
