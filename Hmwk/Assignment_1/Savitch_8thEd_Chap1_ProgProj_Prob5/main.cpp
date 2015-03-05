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
    int first_number, second_number,sum_results,product_results;
    //Output Prompt for input
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the first number:\n";
    //Input first number 
    cin>> first_number;
    //Output Prompt for input
    cout<<"Enter the second number:\n";
    //Input second number
    cin>>second_number ;
    //Calculating sum of both numbers.
    sum_results=first_number + second_number;
    //Calculating product of both numbers.
    product_results=first_number * second_number;
    //Output results of addition calculation.
    cout<<"The sum of ";
    cout<< first_number;
    cout<< " and ";
    cout<< second_number;
    cout<< " is: ";
    cout<< sum_results<<endl;
    //Output the result of multiplication calculation.
    cout<< "The product of ";
    cout<<first_number;
    cout<< " and ";
    cout<< second_number;
    cout<< " is: ";
    cout<< product_results <<endl;
    //Exit right stage!

    return 0;
}
