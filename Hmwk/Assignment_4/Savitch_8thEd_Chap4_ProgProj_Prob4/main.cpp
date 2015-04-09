/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 9, 2015, 1:20 PM
 *      Purpose: Inflation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 


//Function Prototypes
float inflation (float a,float b);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float start; //Initial price of item
    float end;   //End price of the item      
    cout<<"This program calculates the rate of inflation."<<endl;
    cout<<"Choose an item and compare its price between a period of time"<<endl;
    
    cout<<"What was the price of the item one year ago? $";
    cin>>start;
    cout<<"What is the price of the item right now? $";
    cin>>end;
    
    float inf= inflation(start,end);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<" The rate of inflation is "<<abs(inf)<<"%."<<endl;
    cout<<"Note: If the price change decreased, then it is the rate of deflation."<<endl;
          
    return 0;
}
float inflation (float a,float b)
{
    float r;
    r= (b-a)/a*100;
    return r;
}