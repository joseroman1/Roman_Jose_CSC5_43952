/* 
 * File:   main.cpp
 * Author: JR
 *Created on March 18, 2015, 1:20 AM
 *      Purpose: Sum of all numbers 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv)
{
//Declare variables
    int sum=0,sumNeg=0,sumPos=0,sumEven=0, sumOdd=0;
    int input;
    //Prompt for a value and sum it
    cout<<endl<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //Output the results
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive Sum = "<<sumPos<<endl;
    cout<<"Negative Sum = "<<sumNeg<<endl;
    cout<<"Even Sum =     "<<sumEven<<endl;
    cout<<"Odd Sum =      "<<sumOdd<<endl;
     //Prompt for a value and sum it
    cout<<endl<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //Output the results
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive Sum = "<<sumPos<<endl;
    cout<<"Negative Sum = "<<sumNeg<<endl;
    cout<<"Even Sum =     "<<sumEven<<endl;
    cout<<"Odd Sum =      "<<sumOdd<<endl;
    return 0;
}