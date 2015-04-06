/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 6, 2015, 10:06 AM
 *     Purpose: Example 4.1
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant
const float CTSQFT= 10.50;//Cost per square feet
        
//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float budget, area;
    float lSide;//Length side
    
    cout<<"Enter the amount budgeted for your dog house $";
    cin>> budget;
    
    area= budget / CTSQFT;
    lSide= sqrt (area);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout <<"For a price of $" <<budget << endl
        <<"I can build you a luxurious square dog house\n"
        <<"that is " << lSide
        <<" feet on each side.\n";
     
    

    return 0;
}

