/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 18, 2015, 4:26 PM
 *      Purpose: Inflation Program
 */

//System Library
#include <iostream>
#include<iomanip>
using namespace std;

//User Library

//Global Constants 

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float inflate, cost, years,yearsm;
    
    //Program Function
    cout<<"This program gauge the expected cost of an item";
    cout<<" in a specified number of years."<<endl;
    
    //Ask for the different inputs
    cout<<"How much does the item cost?"<<endl;
    cin>>cost;
    cout<<"How many years from now do you plan on buying more?"<<endl;
    cin>>years;
    cout<<"What is the current rate of inflation?"<<endl;
    cin>>inflate;
    
    //Convert the inflation rate to a decimal
    inflate=inflate/100;
    yearsm=years;
    
    //Calculate the price difference and loop it
    while (yearsm>0){
        cost=cost+inflate*cost;
        yearsm--;
    }
    
    //Output the results
    cout<<"The item will cost $"<<setprecision(3)<<cost<<" in "<<years<<" years"<<endl;

   
    return 0;
}

