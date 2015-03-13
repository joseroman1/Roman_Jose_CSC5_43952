/* 
 * File:   main.cpp
 * Author: Joana Arellano       
 * Created on January 7, 2015, 7:29 AM
 * Purpose: To spot mistakes in code when a calculation is changed. 
 * Took out Under slashes from original code, as well as executed modifications asked.
 */

//System Libraries
#include <iostream>
using namespace std;

// User Libraries
//Global Constants
//Function Prototypes

//ExExecution begins here!
int main()
{
    int numofpods, peasperpod, totalpeas;
    //Output Prompt for input
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    //Input number of pods
    cin >> numofpods;
    //Output Prompt for input
    cout << "Enter the number of peas in a pod:\n";
    //Input number peas per pod
    cin >> peasperpod;
    //Calculating total peas
    totalpeas =numofpods/peasperpod;//changed multiplication to division 
    //Output results of calculation 
    cout << "If you have ";
    cout << numofpods;
    cout << " and ";
    cout << peasperpod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalpeas;
    cout << " peas in all the pods.\n";
    cout << "Good Bye.\n";
    //Program fails to run program when 0/0 is inputed. 
    //Note: that because program is intended to output integer, fraction answer will be seen as 0. 
    //Exit stage right
    
    return 0;
}