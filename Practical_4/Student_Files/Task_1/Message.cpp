#include <iostream> 
#include "Message.h"
using namespace std;

void printPassMessage(){
    cout<<"Congrats, you passed"<<endl;
}

void printFailMessage(){
    cout<<"Oh no, you failed"<<endl;
}

void printDistinction(){
    cout<<"WOOWW, you got a distinction"<<endl;
}

void handlePass(double result){
    result<0.75? printPassMessage(): printDistinction();
}
