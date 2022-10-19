#include <iostream>
using namespace std;

// Call read positive number function inside for loop
#include "read_number_positive_int.h"

// Void fun dosnt here print any thing because it havnn't "cout" , it only save readed to array degreeMain
void ReadStudentDegreeForLoop( float degreesR[100], int& length){

    
    cout << "Enter a length \n";
    cin >> length;
 
    //cout << "Enter a Degree:  \n";
    //int readedNumber;

    for (int i = 0; i < length  ; i++)
    {
        //cin >> degreesR[i];
       degreesR[i] =  ReadNumberPositiveInt("Enter a dgree : \n");
    }
    cout << "******\n";

   
    // Testing 
    //  cout << degreesR[0] << "\n";
    //  cout << degreesR[1] << "\n";
    //  cout << degreesR[2] << "\n";
    //  cout << degreesR[3] << "\n";



}