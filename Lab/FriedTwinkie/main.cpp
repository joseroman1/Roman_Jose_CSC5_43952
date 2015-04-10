/* 
 * File:   main.cpp
 * Author: rcc
 * Created on April 8, 2015, 7:52 AM
 *      Purpose: To gain weight, become a public health
 * hazard, and to design a interface to a 
 * fried twinkie machine
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=80;
    char input [SIZE]="";
    unsigned short totChng=0,pTwnke=350;
    char nQtrs,nDimes,nNikels;
    
    //Prompt the user for input
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This a Fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkies Cost $3.50"<<endl;
    cout<<"Input your change as "<<endl;
    cout<<"Dollar, Quarters, Dime, Nickels"<<endl;
    do{
        cout<<endl<<"Input coins/change"<<endl;
        cin>>input;
        cout<<input;
        if (strcmp(input,"Dollar")==0){
            totChng+=100;
        }else if(strcmp(input,"Quarter")==0){
            totChng+=25;
        }else if(strcmp(input,"Dime")==0){
            totChng+=10;
        }else if(strcmp(input,"Nickel")==0){
            totChng+=5;

         }else{
         cout<<"No Slugs Allowed"<<endl;


        }

        //Output
    
        cout<<" Total change = $ "<<totChng/100.0f<<endl;
}while(totChng<350);

    //Give Twinkie
    cout<<endl<<"Here is your Fried Twinkie"<<endl;
    //Calculate 
    totChng=pTwnke;
    cout<<"Your total change is = $"<<totChng/100.0f<<endl;
    //How Many Quarters
    nQtrs=totChng/25;
    if (nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters Change"<<endl;
    //How Many Dimes
    totChng=nQtrs*25;
    nDimes=totChng/10;
    if (nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    //How Many Dimes
    totChng=nDimes*10;
    nNikels=totChng/5;
    if (nNikels>0)cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;

    return 0;
}

