#include"MessageDecoder.h"
#include<iostream>

const char Base64CharArr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"; 
const int Base64CharArrLen = 64;

int findIndex(char c) {
    for(int i = 0 ; i < Base64CharArrLen; i++) {
        if(Base64CharArr[i] == c)
            return i;
    }
    return -1;
}

void decodeBase64(const char encoded[], char decoded[], int encodedLength) {
    int index = 0, i = 0; 
    while(i < encodedLength) {
        int indices[4];
        for(int k = 0; k < 4; k++) 
            indices[k] = findIndex(encoded[i+k]);
        
        decoded[index] = (indices[0]*4) + (indices[1]/16);
        decoded[++index] = ((indices[1]%16)*16) + (indices[2]/4);
        decoded[++index] = ((indices[2]%4)*64) + indices[3];
            
        i+=4;
        index++;
    }
    decoded[index] = '\0';
     
    /*for(int k = index-2; k < encodedLength; k++)
        std::cout << decoded[k];*/
}
