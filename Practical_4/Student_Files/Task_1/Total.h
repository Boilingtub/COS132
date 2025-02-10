#ifndef TOTAL_H
#define TOTAL_H
#include "Calculate.h"

double subTotal(int numQuizzes, double quizWeight, int numPracs, double pracsWeight);

double pracSubTotal(double weight, double p1M, int p1T, double p2M, int p2T, double p3M, int p3T );

double quizSubTotal(double weight, double q1M, int q1T, double q2M, int q2T, double q3M, int q3T, double q4M, int q4T );

double getResult(double studentTotal, double actualTotal);

#endif
