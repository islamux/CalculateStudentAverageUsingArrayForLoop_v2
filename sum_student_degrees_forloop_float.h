#include <iostream>
using namespace std;

float SumStudentDegreesForLoopFloat(float degreesS[100], int length){

    // Variable to Calculate degrees
    float sum = 0;
    
    for (int i = 0; i < length ; i++)
    {
        sum+= degreesS[i];
    }
    return   sum;
}