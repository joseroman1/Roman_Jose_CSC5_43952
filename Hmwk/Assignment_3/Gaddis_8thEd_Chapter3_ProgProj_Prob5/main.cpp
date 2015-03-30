/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 29, 2015, 5:46 PM
 *      Purpose: Minimum and Maximum
 */
//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 


//Global Constants


//Function Prototypes


//Execution begins here!
int main(int argc, char** argv) {
   //Declare Variables
    int X;
    int Y;
//input the number
cout<<"This program finds which number is the largest or if they are equal."<<endl;
cout<<"What is the first number that you want to input ?\n"<<endl;
cin>>X;
cout<<"What is the second number that you want to input ?\n"<<endl;
cin>>Y;
//output the answer
cout<<"First number is "<<X<<" and the second number is "<<Y<<endl;
if (X > Y)
cout << X << " is the larger number." << endl;

else if (Y > X)
cout << Y << " is the larger number." << endl;

else 
cout << "Both numbers are equal." <<endl;

    return 0;
}

