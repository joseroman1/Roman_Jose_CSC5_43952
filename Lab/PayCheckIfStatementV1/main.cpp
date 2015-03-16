/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 16, 2015, 8:13 AM
 *      Purpose: Paycheck-> Independent if-statements
 */

//System Libraries 
#include <iostream>//I/O standard
#include <iomanip>//Formating
#include <fstream>//I/O fILE
using namespace std;

//user libraries 

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;//Output the results in a file
    float hrsWkd;//Hours Worked (hrs)
    float payRate;//Pay Rate ($'s/hr)
    float oRate=1.5f;//Multiplicative factor of payRate
    float oTime=40.0f;//Where overtime begins (hr)
    float payChk;//Gross pay ($'s)
    //Open the file
    out.open("Payroll.dat");
    //Prompt the user for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate Paycheck
   if(hrsWkd<oTime){
        payChk=payRate*hrsWkd;
   }
    if(hrsWkd>=oTime){
       payChk= payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
   }
    //Output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"(/hrs)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay= $"<<payChk<<endl;
  //Output the results to the screen
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"(/hrs)"<<endl;\
    out<<"Over time rate = "<<oRate<<endl;
    out<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Gross Pay= $"<<payChk<<endl;
    //Close the file
    out.close();

    return 0;
}

