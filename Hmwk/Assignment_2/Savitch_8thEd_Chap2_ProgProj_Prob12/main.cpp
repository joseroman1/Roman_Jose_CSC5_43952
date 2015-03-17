/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 17, 2015, 12:34 AM
 *      Purpose: Babylonian Calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the result
    cout<<"First pass Calculation -> "<<guess<<endl;
    //second pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second pass Calculation -> "<<guess<<endl;
   //Third pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the Third pass
    cout<<"Third pass Calculation -> "<<guess<<endl;
    //Fourth pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the fourth pass
    cout<<"Fourth pass Calculation -> "<<guess<<endl;
    //Fifth pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the fifth pass
    cout<<"Fifth pass Calculation -> "<<guess<<endl;
    //Exit stage right
    return 0;
}
