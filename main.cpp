#include <iostream>
using namespace std;

// Reading
#include "read_student_degree_by_ref_forloop.h"

// Calculation & Printing
#include "display_student_degrees_forloop.h"
#include "sum_student_degrees_forloop_float.h"
#include "average_student_degrees_forloop_float.h"
#include "average_degrees.h"
#include "print_number_float_with_double_msg.h"

/*
    * Calculate 1 Student Average Using Array and For loop

        # Steps
            1- Read  students degrees Procedural ==> void + call by ref  * (Array by dafault by ref)
                ReadStudentsDegree()
            2- Print what readed (Display only)
            3- Calculate sum of degrees
            4- Calculate Average

*/

int main(){
    
    // Variable : Array by default read by ref & length by ref in Read func
    float degreesMain[100];
    int lengthM = 0;
    
    // Reading by ref
    /* When you pass an arry parameter dont add [] */
    // Void fun dosnt here print any thing because it havnn't "cout" , it only save readed to array degreeMain
    // Call read positive number function inside for loop
    ReadStudentDegreeForLoop(degreesMain, lengthM); // parameter from main.cpps
    
    // Display your entered info
    DisplayStudentDegreeForLoop(degreesMain, lengthM);

    // Calculation: Sum
     float sumDegrees = SumStudentDegreesForLoopFloat(degreesMain, lengthM);
     PrintNumberFloatWithDoublMsg("Sum Degrees = ", sumDegrees,".");

     // Calculation : Average | you can use this function in your library but not recommanded to call func every time.
    float averageDegrees = AverageStudentDegreesForLoopFloat(degreesMain, lengthM);
    PrintNumberFloatWithDoublMsg("Average using ready function ", averageDegrees, "");

    // Calculation : Average | Best practice
    AverageDegrees(sumDegrees, lengthM);
    PrintNumberFloatWithDoublMsg("Average Using Direct way=",averageDegrees ,".");



    

     
    




    // Calculaiton: Average

       return 0;
}