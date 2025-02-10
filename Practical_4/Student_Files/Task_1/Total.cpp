#include "Total.h"

double subTotal(int numQuizzes, double quizWeight, int numPracs, double pracsWeight){
    return numQuizzes*quizWeight + numPracs*pracsWeight;
}

double pracSubTotal(double weight, double p1M, int p1T, double p2M, int p2T, double p3M, int p3T ){
     return calculateContribution(p1M, p1T, weight) + calculateContribution(p2M, p2T, weight) + calculateContribution(p3M, p3T, weight);
}

double quizSubTotal(double weight, double q1M, int q1T, double q2M, int q2T, double q3M, int q3T, double q4M, int q4T ){
     return calculateContribution(q1M, q1T, weight) + calculateContribution(q2M, q2T, weight) + calculateContribution(q3M, q3T, weight) +  calculateContribution(q4M, q4T, weight);
}

double getResult(double studentTotal, double actualTotal){
    return studentTotal/actualTotal;
}
