/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Apr 6th, 2015
 *      Add repetition with a do-loop
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants
const float LGAL=0.264179;//Liters per gallon

//Function Prototypes
void problem1 ();
void problem2 ();
void problem3 ();
void problem4 ();
 float fnMPG(float,float);
 float fnMPG2(float,float);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"Chapter 4 Homework Assignment Menu."<<endl;
        cout<<"Type 1 to solve Savitch 8th Ed. Chapter 4 Problem 1"<<endl;
        cout<<"Type 2 to solve Savitch 8th Ed. Chapter 4 Problem 2"<<endl;
        cout<<"Type 3 to solve Savitch 8th Ed. Chapter 4 Problem 15 "<<endl;
        cout<<"Type 4 to Savitch 8th Ed. Chapter 4 Problem 15"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case '1':problem1();break;
            case '2':problem2();break;
            case '3':problem3();break;
            case '4':problem4();break;
            default: cout<<"Exit?"<<endl;
        };
    }while(choice>='1'&&choice<='3');
        //Exit right stage
    return 0;
}

//*********** problem 1 **********/
void problem1(){
    
    float lGas;//
    float cMiles;//Car miles
    float gGas;//Gallons of gas
    float mpg;
    string repeat;
    cout<<"This program finds a car's MPG:"<<endl;
    //Ask for inputs
    do{
        cout<<"How many liters of gasoline has your car consumed? "<<endl;
        cin>> lGas;    
        cout<<"How many miles has you driven?"<<endl;
        cin>> cMiles;
        gGas= lGas * LGAL;
        mpg= fnMPG (cMiles,gGas);
        cout<<"Your current MPG is "<<mpg<<" miles per gallons."<<endl;
        cout<<"Would you like to calculate another MPG?(Y/N):";
        cin>> repeat;
    }while(repeat!="N");
    cout<<"Good-bye."<<endl;}
    float fnMPG (float x,float y){
    return x/y;
}

//*********** problem 2 **********/
void problem2(){

    float lGas;// Liters to gas
    float cMiles;//Car miles
    float gGas;//Gallons of gas
    float mpg;
    float lGas2;// Liters to gas
    float cMiles2;//Car miles
    float gGas2;//Gallons of gas
    float mpg2;
    string repeat;
    
    cout<<"This program can finds the MPG of two cars and compare them:"<<endl;
    //Ask for inputs
    do{
        cout<<"How many liters of gasoline has the first car consumed? "<<endl;
        cin>> lGas;    
        cout<<"How many miles has the first car driven?"<<endl;
        cin>> cMiles;
        gGas= lGas * LGAL;
        mpg= fnMPG2 (cMiles,gGas);
        cout<<"How many liters of gasoline has the second car consumed? "<<endl;
        cin>> lGas2;    
        cout<<"How many miles has the second car driven?"<<endl;
        cin>> cMiles2;
        gGas2= lGas2 * LGAL;
        mpg2= fnMPG2 (cMiles2,gGas2);
        cout<<"The current MPG of the first car is "<<mpg<<" miles per gallons."<<endl;
        cout<<"While the current MPG of the second car is "<<mpg2<<" miles per gallons."<<endl;
    
            if(mpg>mpg2){
        cout << "Clearly, the first car is more fuel efficient." << endl;
        }else if(mpg<mpg2){
        cout << "Clearly, the second car is more fuel efficient." << endl; 
        }else if(mpg==mpg2){
        cout << "Miraculously, both cars have the exact same fuel efficency." << endl;
        }

        cout<<"Would you like to calculate another MPG?(Y/N):";
        cin>> repeat;
    }while(repeat!="N");
    cout<<"Good-bye."<<endl;
}

float fnMPG2 (float x,float y){
    return x/y;
}

//*********** problem 3 **********\

void problem3(){
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
         cout<<" No Slugs Allowed"<<endl;


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
    
    }

//************** Problem 4 ***********/
void problem4(){
    int weigh,height,age;
    
                }
                
