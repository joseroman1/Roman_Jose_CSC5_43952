/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on March 12, 2015, 11:02 PM
 *      Purpose: example 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    int nBars;
    float oWeight, tWeight;
    
    cout<< "Enter the number of candy bars in a package\n";
    cout<< "and the weight in ounces of one candy bar.\n";
    cout<< "Then press return.\n";
    cin>> nBars;
    cin>> oWeight;
    
    tWeight = oWeight * nBars;
    
    cout<< nBars << " candy bars\n";
    cout<< oWeight << " ounces each\n";
    cout<< "Total weight is " << tWeight << " ounces.\n";
    
    cout<< "Try another brand.\n";
    cout<< "Enter the number of candy bars in a package\n";
    cout<< "and the weight in ounces of one candy bar.\n";
    cout<< "Then press return.\n";
    cin >> nBars;
    cin>> oWeight;
    
    tWeight = oWeight * nBars;
    
    cout<< nBars << " candy bars\n";
    cout<< oWeight << " ounces each\n";
    cout<<"Total weight is " << tWeight << " ounces.\n";
    
    cout<< "Perhaps an apple would be healtier.\n";
    
    
    
    
    
   
    
    
    
    
            return 0;
}