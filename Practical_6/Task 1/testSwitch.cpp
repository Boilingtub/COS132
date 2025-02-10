#include "testSwitch.h"
#include <iostream>
using namespace std;

void testDayOfWeek(int day){
    switch (day) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        default:
            cout << "Some other day\n";
            break;
    }
}

void switchRanges(int score){
    
    switch (score) {
    case 0 ... 49:
        cout << "Fail" << endl;
        break;
    case  50 ... 75:
        cout << "Pass" << endl;
        break;
    case  76 ... 100:
        cout << "Excellent" << endl;
        break;
    default:
        cout << "Invalid score" << endl;
    }
}
