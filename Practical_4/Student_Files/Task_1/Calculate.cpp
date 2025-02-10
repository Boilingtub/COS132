#include "Calculate.h"

double calculateContribution(double studentMark, int totalMark, double weight){
    //Implement function here
    return (studentMark/totalMark) * weight;
}

double calculateIndividualWeight(double totalWeight, int numAssessments){
    //Implement function here
    return totalWeight/numAssessments;
}
