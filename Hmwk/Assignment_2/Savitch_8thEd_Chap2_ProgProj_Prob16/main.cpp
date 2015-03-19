/* 
 * File:   main.cpp
 * Author: Jose Roman 
 * Created on March 18, 2015, 4:01 PM
 *      Purpose: Volume of sphere 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    //Verify the variables
    float radius, volume;
    //Program Function
    cout<<"This program computes the volume of a sphere if you have the radius."<<endl;
    //Prompt for input
    cout<<"Enter the radius of the sphere."<<endl;
    //Let them put in an input
    cin>>radius;
    //Calculate using the volume formula
    volume=(4.0/3.0)*3.1415*radius*radius*radius;
    //Present the results
    cout<<"The volume is "<<volume<<endl;
    
    return 0;
}
   