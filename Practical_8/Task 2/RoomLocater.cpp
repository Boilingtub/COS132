#include "RoomLocater.h"

int substringSearch(const char* str, const char* substr) {
    const char* ptr1 = str;
    const char* ptr2 = substr;
    
    while(*ptr1 != '\0') {
        const char* start = ptr1;
        ptr2 = substr;
        while(*ptr2 != '\0' && *ptr2 == *ptr1) {
            ptr1++;
            ptr2++;
        }
        if(*ptr2 == '\0')
            return start-str;
        else
            ptr1 = start+1;
    }
    return -1;
}
    void UT_substrSearch() {
        using namespace std;
        cout << "UT_substrSearch GO\n";
        {
        string str = "Hello World";
        string substr = "Wor";
        int index = substringSearch(str.c_str(), substr.c_str());
        if(index == 6)
            cout << "(1) UT_substrSearch SUCCESS\n";
        else { 
            cout << "(1) UT_substrSearch FAILURE\n";
            cout << "index == " << index << "\n";    
        }
        }

        {
        string str = "OOGA GABOOGA";
        string substr = "1GAB";
        int index = substringSearch(str.c_str(), substr.c_str());
        if(index == -1)
            cout << "(2) UT_substrSearch SUCCESS\n";
        else { 
            cout << "(2) UT_substrSearch FAILURE\n";
            cout << "index == " << index << "\n";    
        }
        }

        {
        string str = "OOGA GABOOGA";
        string substr = "OOG";
        int index = substringSearch(str.c_str(), substr.c_str());
        if(index == 0)
            cout << "(3) UT_substrSearch SUCCESS\n";
        else { 
            cout << "(3) UT_substrSearch FAILURE\n";
            cout << "index == " << index << "\n";    
        }
        }
}

void indexToChar(int index) {
    char room = static_cast<char>(index);
    std::cout << "Floor: " << index << ", Room: " 
        << room << std::endl;
}
    /*void UT_indexToChar() {
        if(indexToChar(41) == 'A')
            std::cout << "(1) UT_indexToChar SUCCESS";
        else
            std::cout << "(1) UT_indexToChar FAILURE";
    }*/
