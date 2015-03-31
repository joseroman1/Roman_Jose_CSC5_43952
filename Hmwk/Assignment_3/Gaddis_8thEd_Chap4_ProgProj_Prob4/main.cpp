/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 30, 2015, 12:06 AM
 *      Purpose: Area of Rectangles
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants


//Function Prototype


//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float L1, W1, L2, W2, A1, A2;
    //Prompt for Input
    cout<<"This program will determine which rectangle has the greater Area."<<endl;
    cout<<"Enter length of First rectangle."<<endl;
    cin>>L1;//Length of first rectangle 
    cout<<"Enter width of First rectangle."<<endl;
    cin>>W1;//Width of first rectangle
    cout<<"Enter length of Second rectangle."<<endl;
    cin>>L2;//Length of Second rectangle
    cout<<"Enter width of Second rectangle."<<endl;
    cin>>W2;//Width of Second rectangle
    
    //Calculate Area
    A1=L1*W1;//Area of first rectangle
    A2=L2*W2;//Area of Second rectangle
    //Output results with IF
    if(A1>A2)
        cout<<"First rectangle has greater area."<<endl;
        else if(A1==A2)
        cout<<"Both rectangles have equal area."<<endl;
        else
        cout<<"Second rectangle has greater area."<<endl;
    //Exit Stage Right
    return 0;
}