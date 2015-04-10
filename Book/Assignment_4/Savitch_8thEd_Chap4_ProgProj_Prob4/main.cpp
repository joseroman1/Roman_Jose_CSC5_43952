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
#include <string>
using namespace std;

//User Libraries

//Global Constants 


//Function Prototypes
float infla (float a,float b);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float start; //Initial price of item
    float end;   //End price of the item  
    string repeat; 
    
    cout<<"This program calculates the rate of inflation."<<endl;
    cout<<"Choose an item and compare its price between a period of time"<<endl;
    
    do{
    cout<<"What was the price of the item one year ago? $";
    cin>>start;
    cout<<"What is the price of the item right now? $";
    cin>>end;
    
    float inf= infla (start,end);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<" The rate of inflation is "<<abs(inf)<<"%."<<endl;
    cout<<"Note: If the price change decreased, then it is the rate of deflation."<<endl;
    cout<<"Would you like to calculate another Inflation Rate?(Y/N):";
    cin>> repeat;
    }while(repeat!="N");
    cout<<"Good-bye."<<endl;
    return 0;
    
}
float infla (float a,float b)
{
    float r;
    r= (b-a)/a*100;
    return r;
}