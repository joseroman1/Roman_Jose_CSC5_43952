/* File:   main.cpp
 * Author: Jose Roman
 * Created on March 25, 2015, 10:15 PM
 * Purpose: Interest Due
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 


//Global Constants


//Function Prototypes


//Execution begins here!
int main(int argc, char** argv) {
  //Define the variables
                 float aBal, iRate, tDue, mPay;
                 //Ask for the input
                 cout<<"Enter the account balance"<<endl;
                 cin>>aBal;
                 //multiply the interest rate by the account balance for the interest due
                 if (aBal <= 1000)
                 iRate=aBal*.015;
                 else
                 iRate=aBal*.01;
                 //The total due is the top section added to the original balance
                 if (aBal <= 1000){
                 tDue=aBal*.015+aBal;}
                 else{
                 tDue=aBal*.01+aBal;}
                 //Min payment is a bit trickey since theres three options
                 mPay=tDue*.1;
                 //if the mPay is greater then 10 dollars
                 if (mPay>=10)
                 mPay=mPay;
                 //if the mPay is less then the amount owed total, means it only works 
                 //when you are about to close the balance
                 else if (tDue<=10)
                 mPay=tDue;
                 //if the mPay is not going to be closed soon but they still want some
                 //money
                 else (mPay=10);
                 //show the results
                 cout<<"Your interest due is $"<<iRate<<endl;
                 cout<<"Your total due is $"<<tDue<<endl;
                 cout<<"Your minimum payment is $"<<mPay<<endl;

    
    return 0;
}
