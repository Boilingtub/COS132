#include <iostream>
#include "Calculate.h"
#include "Total.h"
#include "Message.h"
using namespace std;

int main(){
    double q1M = 10.5;
    int q2M = 12;
    int q3M = 11;
    int q4M = 8;

    int q1T = 15;
    int q2T = 13;
    int q3T = 15;
    int q4T = 10;

    int p1M = 10;
    int p2M = 12;
    int p3M = 13;

    int p1T = 10;
    int p2T = 15;
    int p3T = 20;

    double totalPracWeight = 30;
    int numPracs = 10;

    double totalQuizWeight = 20;
    int numQuizzes = 10;

    double pracWeight = calculateIndividualWeight(totalPracWeight, numPracs);
    double quizWeight = calculateIndividualWeight(totalQuizWeight,numQuizzes);

    double pracSubTotalVal = pracSubTotal(pracWeight, p1M,  p1T,  p2M,  p2T,  p3M,  p3T);

    double quizSubTotalVal = quizSubTotal(quizWeight,  q1M,  q1T,  q2M,  q2T,  q3M,  q3T,  q4M,  q4T);

    double subTotalVal = subTotal(4,quizWeight,3,pracWeight);

    double actualTotal = pracSubTotalVal+quizSubTotalVal;
    cout<<actualTotal<<"/"<<subTotalVal<<endl;

    double result = getResult(actualTotal,subTotalVal);
    cout<<"Result: "<<result<<endl;

    result<0.5? printFailMessage() : handlePass(result);

}
