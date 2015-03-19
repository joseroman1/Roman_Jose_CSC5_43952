/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on March 4, 2015, 8:22 AM
 *      Purpose: To see how many snickers it takes to survive
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short wtlbs, htin, ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem, BMRMale, nCBars;
    //Prompt for user for input
    cout<<"How many candy bars will it take"<<endl;
    cout<<"to maintain your weight?"<<endl;
    cout<<"All inputs are integers!!!"<<endl;
    cout<<"Input your weight in lbs"<<endl;
    cin>>wtlbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in yrs"<<endl;
    cin>>ageyrs;
    cout<<"Are you male or female m/f? one character input"<<endl;
    cin>>mf;
    //Calculate
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //         Ques   if Male          if Fem
    nCBars=((mf=='m')? (BMRMale/cBar):(BMRFem/cBar));
    //Output the results
    cout<<"Your Weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htin<<" (inches)"<<endl;
    cout<<"Your age = "<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<< "candy bars"<<endl;
  
    
    
    
            return 0;
}