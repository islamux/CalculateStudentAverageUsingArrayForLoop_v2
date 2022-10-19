#include <iostream>
using namespace std;

void DisplayStudentDegreeForLoop( float Degrees[100], int length){

    // Save numebr of degrees
    cout << "You want to display only:  = " << length  <<  " degrees." << "\n";

    for (int i = 0; i < length ; i++)
    {
        cout << "Degree No" <<  i + 1 << ": " <<  Degrees[i]  <<"\n";
    }
    cout << "\n************" << endl;
    
    // Testing 
    // cout << Degrees[0] << "\n";



}