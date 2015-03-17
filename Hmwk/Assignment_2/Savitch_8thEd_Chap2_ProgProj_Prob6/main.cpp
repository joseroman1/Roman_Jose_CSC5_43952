/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 17, 2015, 12:46 AM
 *      Purpose: Fire law violation
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global constants


//Function Prototypes


//Execution begins here!

int main(int argc, char** argv) 
{
    // Declare variables
    string input;    // user input
    int mCap; // maximum room capacity
    int nOfppl;    // the number of people attending
    
    // Read in the maximum room capacity and the number of people attending the 
    // meeting.
    cout << "What is the maximum room capacity? ";
    cin  >> mCap;
    cout << "How many people are attending the meeting? ";
    cin  >> nOfppl;
    
    // If the number of people is less than or equal to the maximum room 
    // capacity, the program announces that...
    if (nOfppl <= mCap)
    {
        cout << "  It is legal to hold the meeting."     << endl;
        cout << "  Number of attendees: " << nOfppl    << endl;
        cout << "  Maximum Capacity: "    << mCap << endl;
    }
    // If the number of people exceeds the maximum room capacity, 
    // the program announces that...
    else
    {
        cout << "  The meeting cannot be held due to fire regulations." << endl;
        cout << "  Number of attendees: " << nOfppl    << endl;
        cout << "  Maximum Capacity: "    << mCap << endl;
    } 

    // Ask to repeat
    cout << "Would you like the repeat calculation: ";
    cin  >> input;

    if (input == "yes")
        main(argc, argv);
    else if (input == "no")
        return 0;
    else
    {
        cout << "What was that? yes or no: ";
        cin  >> input;
    }
    
    return 0;
}