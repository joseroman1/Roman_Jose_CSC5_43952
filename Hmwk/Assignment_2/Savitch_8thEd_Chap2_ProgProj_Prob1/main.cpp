/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on March 13, 2015, 3:50 PM
 *      Purpose: Breakfast cereal in ounces and output
 *               the weight in metric tons.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants
const float CMTNON=3.527392e4;//conversion from metric tons to ounces

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    string input;
    float wPackOz;//weight of cereal contents in ounces
    float wPackTn;//weight of cereal contents in metric tons
    float nPackTn; //number of cereal boxes in a metric ton
    
    //prompt user for cereal weight.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wPackOz;
    
    //calculate the results
    wPackTn=wPackOz/CMTNON;
    nPackTn=1/wPackTn;
    
    //output he results
    cout<<"Weight of cereal box is "<<wPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes needed to yield 1 metric ton = "<<nPackTn<<endl;
    
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
   
    
   