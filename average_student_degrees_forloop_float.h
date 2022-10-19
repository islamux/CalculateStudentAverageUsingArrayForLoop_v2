#include <iostream>
using namespace std;


float AverageStudentDegreesForLoopFloat(float degreesA[100], int length){

    float sum = 0;
    for (int i = 0; i < length - 1; i++)
    {
        sum+= degreesA[i];  
    }
    
    return  sum /3 ;
}