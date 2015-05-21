/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 20, 2015, 4:30 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

//Global Constants

//Function Prototypes
void rNumber(int []);//Random Number
bool isValid(int [],int [],int []);

//Execution Begins Here! 
int main(int argc, char** argv) {
    //Password is 12345
    const int SIZE=5;
    int passCode[SIZE]={1,2,3,4,5};
    cout<<"The PIN is 1,2,3,4,5"<<endl;
    cout<<"Input the pin based on the random Num."<<endl;
    //User Input
    int value;
    //Array to get individual values of the user input
    int Values[]={10000,1000,100,10,1};
    
    //Array to hold randomly generated digit
    int rDigit[10];
    
    //Array to hold the digits entered by the user
    int uDigit[SIZE];
    bool valid = true;
    do{
        cout<<"PIN: 0 1 2 3 4 5 6 7 8 9"<<endl;
        cout<<"Num: ";
        rNumber(rDigit);
        
        //Loop to print random number
        for (int i=0; i<10; i++)
            cout<<rDigit[i]<<" ";
        cout<<endl<<endl;
        
        //Prompt and read the user password
        cout<<"Enter your password: ";
        cin>>value;
        for(int i=0;i<5;i++){
            if(i==0)
                uDigit[i]=value/Values[i];
            else
                uDigit[i]=(value/Values[i]%10);
            
        }
        //Call the method 
        if(isValid(uDigit,rDigit,passCode)){
            valid=false;
            //display the message
            cout<<"LogIn was successful";
        }
        else
            cout<<"LogIn failed. Try Again.";
        cout<<endl;
    }while(valid);

    return 0;
}
void rNumber(int rDigit[]){
    //Seed to generate a random number
    srand(time(NULL));
    //Loop to generate random numbers
    for (int i=0; i < 10; i++)
        rDigit[i] = (int)(rand() % 3) + 1;
}
bool isValid(int uDigit[], int rDigit[],int passCode []){
    bool valid=true;
    //Loop to iterate and compare each digit
    for(int i=0;i<5;i++){
        //Check the digit 
        if(uDigit[i] != rDigit[passCode[i]])
            valid = false;
    }
    return valid;
    }