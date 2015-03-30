/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 29, 2015, 5:58 PM
 *     Purpose: Interest Due.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Define the variables
    float aBal, intrat, totdue, minpay;
    //Ask for the input
    cout<<"Enter the account balance"<<endl;
    cin>>aBal;
    
    
    //multiply the interest rate by the account balance for the interest due
    if (aBal <= 1000)
        intrat=aBal*.015;
    else
        intrat=aBal*.01;
    //The total due is the top section added to the original balance
    if (aBal <= 1000){
        totdue=aBal*.015+aBal;}
    else{
        totdue=aBal*.01+aBal;}
    //Min payment is a bit trickey since theres three options
    minpay=totdue*.1;
    //if the minpay is greater then 10 dollars
    if (minpay>=10)
        minpay=minpay;
    //if the minpay is less then the amount owed total, means it only works 
    //when you are about to close the balance
    else if (totdue<=10)
        minpay=totdue;
    //if the minpay is not going to be closed soon but they still want some
    //money
    else (minpay=10);
    //show the results
    cout<<"Your interest due is $"<<intrat<<endl;
    cout<<"Your total due is $"<<totdue<<endl;
    cout<<"Your minimum payment is $"<<minpay<<endl;
    //Ask to run it again
    cout<<"Would you like to run another amount?"<<endl;
    cout<<"Enter Y for yes and N for no, followed by pressing enter\n";
    char answer;
    cin>>answer;
    while ((answer == 'Y')||(answer == 'y'))
    {
        //Ask for the input
        cout<<"Enter the account balance"<<endl;
        cin>>aBal;
        //multiply the interest rate by the account balance for the interest due
        if (aBal <= 1000)
            intrat=aBal*.015;
        else
            intrat=aBal*.01;
        //The total due is the top section added to the original balance
        if (aBal <= 1000){
            totdue=aBal*.015+aBal;}
        else{
            totdue=aBal*.01+aBal;}
        //Min payment is a bit trickey since theres three options
        minpay=totdue*.1;
        //if the minpay is greater then 10 dollars
        if (minpay>=10)
            minpay=minpay;
        //if the minpay is less then the amount owed total, means it only works 
        //when you are about to close the balance
        else if (totdue<=10)
            minpay=totdue;
        //if the minpay is not going to be closed soon but they still want some
        //money
        else (minpay=10);
        //show the results
        cout<<"Your interest due is $"<<intrat<<endl;
        cout<<"Your total due is $"<<totdue<<endl;
        cout<<"Your minimum payment is $"<<minpay<<endl;
        //Ask to run it again
        cout<<"Would you like to run another amount?"<<endl;
        cin>>answer;
    }
    cout<<"Goodbye"<<endl;

    return 0;
}