/* 
 * File:   main.cpp
 * Author: rcc
 * Created on April 9, 2015, 1:27 PM\
 *      Purpose: Value of Stocks
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins here!!
int main(int argc, char** argv) {
    //Declare variables
    //Stock Related #Shares Whole   Numerator Denominator
    unsigned short  nShares,pStkWhl,pStkNum,  pStkDen;
    float stkPrc,totPrc;//Stock Price per share and total Price for all shares
    char another;//Question for repeating the process for another stock
    //Loop on answer
    do{
        //Input stock information
        cout<<"How many Shares = ? unsigned short range"<<endl;
        cin>>nShares;
        cout<<"Share Price X Y Z where $X Y/Z such as 89 7 8 = $89 7/8 per share"<<endl;
        cout<<"Input 3 unsigned shorts X Y Z for the share price"<<endl;
        cin>>pStkWhl>>pStkNum>>pStkDen;
        //Calculate the results
        stkPrc=pStkWhl+1.0f*pStkNum/pStkDen;
        totPrc=nShares*stkPrc;
        //Output the results
        cout<<fixed<<showpoint;
        cout<<"The stock price = $"<<setprecision(3)<<stkPrc<<endl;
        cout<<"The total value of stock = $"<<setprecision(2)<<totPrc<<endl;
        //Ask to continue
        cout<<"Would you like to continue with another Stock Y/N"<<endl;
        cin>>another;
    }while(another=='Y'||another=='y');
    //Exit stage right
    return 0;
}
