/* 
 * File:   main.cpp
 * Author: JR
 *Created on March 13, 2015, 5:30 PM
 *    Purpose: Loss weight 
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float amtOfSweetener = 0.001; // diet soda contains 1/10th of 
                                         // 1% artificial sweetener
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    // Declare the variables
    string input;         // user input
    float  amtToKill,     // amount of sweetener to kill a mouse
           mouseWeight, 
           dieterWeight, 
           amtOfSoda;     // how much the dieter can drink without dying
    
    // Set the variables to user input
    cout<<"This Program tells you how much diet soda pop it is possible";
    cout<< " to drink without dying as a result."<<endl;
    cout << "What is the amount of sweetener needed to kill a mouse? "<<endl;
    cout<<"Format is float ddd.ddd (lbs)"<<endl;
    cin  >> amtToKill;
    cout << "What is the weight of the mouse? "<<endl;
    cout<<"Format is float ddd.ddd (lbs)"<<endl;
    cin  >> mouseWeight;
    cout << "What will be the weight at which the dieter will stop dieting? "<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin  >> dieterWeight;
    cout << endl;
    
    // Calculate the amount of sweetener
    amtOfSoda = (amtToKill / mouseWeight) * dieterWeight;
    amtOfSoda = amtOfSoda / amtOfSweetener;
    cout << "You can drink " << amtOfSoda << " without dying" << endl;
    
    // Allow the calculation to be repeated as often as the user wishes. 
    cout << "Would you like to repeat calculation? Yes or No? ";
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