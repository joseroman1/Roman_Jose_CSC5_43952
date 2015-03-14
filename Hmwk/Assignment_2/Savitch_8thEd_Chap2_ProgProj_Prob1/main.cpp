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
    float wtPackOz;//weight of cereal contents in ounces
    float wtPackTn;//weight of cereal contents in metric tons
    float nPackTn; //number of cereal boxes in a metric ton
    
    //prompt user for cereal weight.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    
    //calculate the results
    wtPackTn=wtPackOz/CMTNON;
    nPackTn=1/wtPackTn;
    
    //output he results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton = "<<nPackTn<<endl;
    
    
    //ask if user would like to repeat the calculation
    cout<<"Would you like to repeat he calculation?"<<endl;
    cout<<"or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
         cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    
    //calculate the results
    wtPackTn=wtPackOz/CMTNON;
    nPackTn=1/wtPackTn;
   
    //output he results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton = "<<nPackTn<<endl;
    }
    
    //Exit stage right!
    
    return 0;
}
