#include "StringUtils.h"
#include "Decipher.h"

string returnDecodedString(string input, int shift){
    string result;
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (isalpha(c)) {
            result += shiftCharacter(c, shift);
        } else {
            result += c;  // Non-alphabetical characters are added as is
        }
    }
    return result;
}