/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 6, 2015, 9:01 PM
 *      Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes

//Execution begins
int main(int argc, char** argv) 
{
    //Declare variables
    int qrtrs, dimes, nickls; //Quarters, dimes, nickels.
   float tlchngc;//Total change in cents
  
    //Output Prompt for input of quarters.
    cout<<"This program count your change!\n";
    cout<<"Enter the number of quarters you have. \n";
    //Input of Quarter by user.
    cin>>qrtrs;
    //Output Prompt for Dimes.
    cout<<"Enter the number of dimes you have. \n";
    //Input number of Dimes. 
    cin>>dimes;
    //Output Prompt for Nickels.
    cout<<"Enter the number of nickels you have. \n";
    //Input number of Nickels.
    cin>>nickls;
    //Output Prompt for Pennis.
    cout<<"You have ";
    tlchngc = qrtrs*25+dimes*10+nickls*5;//Output of total in cents only.
    cout<<tlchngc;
    cout<<" cents in change.\n";
    //Exit stage
    return 0;
}