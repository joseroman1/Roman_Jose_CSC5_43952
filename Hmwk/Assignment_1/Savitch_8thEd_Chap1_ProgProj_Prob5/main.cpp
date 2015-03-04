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
    cout<<"This program reads in two integers and then outputs both their sum and their product.\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter number the first number:\n";
    cin>> first_number;
    cout<<"Enter the second number:\n";
    cin>>second_number ;
    sum_results = first_number * second_number;
    cout<<"The product and addition of ";
    cout<< first_number;
    cout<< "and ";
    cout<< second_number;
    cout<< " is \n";
    cout<<" ";
    cout<<"product_addition\n";
    cout<< " peas in all the pods.\n";
    //Exit right stage!

    return 0;
}
