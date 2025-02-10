#include"TreasureMap.h"

bool findTreasure(char map[ROWS][COLS], int jumps[], int jumpsLength, char *result) {
    bool ret_val = false;
    char* org_pos = result;
    for(int i = 0; i < jumpsLength; i++) {
        char found = map[jumps[i]/COLS][jumps[i]%COLS]; 
        if(found != '-') {
            if(found == 'X') {
                ret_val = true;
                break;
            }
            *result++ = found;
        }

    }
    *result++ = '\0';
    result = org_pos;
    return ret_val;     
}
