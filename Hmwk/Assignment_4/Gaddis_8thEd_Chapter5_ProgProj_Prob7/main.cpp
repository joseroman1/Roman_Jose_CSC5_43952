/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 9, 2015, 8:33 PM
 *      Purpose: 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    unsigned short days;//input days
    float penny=.01;//pennies
    string repeat;
    
    //Prompt the user for inputs
    do{
    cout<<"Input the number of days worked this pay period"<<endl;
    cin>>days;
    //Input validation
    while (days<1)
    {
        cout<<"Error, Please input a number greater than 0 "<<endl;
        cin>>days;
    }
    //Header Table
    cout<<"Days     Salary"<<endl;
    cout<<"--------------"<<endl;
    //For loop
    for(unsigned short Sday=1;Sday<=days;Sday++)
    {
        cout<<Sday<<"\t$"<<penny<<endl;
        penny*=2;
    }
    cout<<"Would you like another calculation?(Y/N):";
    cin>> repeat;
    }while(repeat!="N");
    cout<<"Good-bye."<<endl;
        return 0;
}

