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
    float mCap; // maximum room capacity
    float nOfppl;    // the number of people attending
    float people, extra;
    
    // Read in the maximum room capacity and the number of people attending the 
    // meeting.
    cout<< "This program determine whether a meeting room is in violation"<<endl;
    cout<< "of fire law regulations regarding the maximum room capacity."<<endl;
    cout<< "What is the maximum room capacity? ";
    cin  >> mCap;
    cout<< "How many people are attending the meeting? ";
    cin  >> nOfppl;
    
   //Calculate if meeting is able to start
    if (nOfppl<=mCap){
         people = mCap-nOfppl; //additional attendees allowed
         cout<<"This meeting is legal to hold!"<<endl;
         cout<<"You could fit up to "<<people<<" more people into the meeting."<<endl;
    } else {
        extra= nOfppl-mCap; //extra attendees not allowed
        cout<<"This meeting is illegal and dangerous."<<endl;
        cout<<"You need to lose at least "<<extra<<" of people to make the meeting legal."<<endl;
    }
    //Exit Stage Right
    // Ask to repeat
    cout<< "Would you like the repeat calculation: "<<endl;
    cin  >> input;

    if (input == "yes")
        main(argc, argv);
    else if (input == "no")
        return 0;
    else
    {
        cout<< "What was that? yes or no: "<<endl;
        cin  >> input;
    }
    
    return 0;
}