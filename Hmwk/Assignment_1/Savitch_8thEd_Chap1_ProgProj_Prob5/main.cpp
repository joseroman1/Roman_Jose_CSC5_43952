/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 4, 2015, 9:40 AM
 *       Purpose: Homework Assignment
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    int first, second,sum,product;
    //Output Prompt for input
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the first number:\n";
    //Input first number 
    cin>> first;
    //Output Prompt for input
    cout<<"Enter the second number:\n";
    //Input second number
    cin>>second ;
    //Calculating sum of both numbers.
    sum=first + second;
    //Calculating product of both numbers.
    product=first * second;
    //Output results of addition calculation.
    cout<<"The sum of ";
    cout<< first;
    cout<< " and ";
    cout<< second;
    cout<< " is: ";
    cout<< sum<<endl;
    //Output the result of multiplication calculation.
    cout<< "The product of ";
    cout<<first;
    cout<< " and ";
    cout<< second;
    cout<< " is: ";
    cout<< product<<endl;
    cout<< "This is the end of the program.\n";
    //Exit right stage!

    return 0;
}
