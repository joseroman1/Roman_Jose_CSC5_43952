/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 24, 2015, 7:39 PM
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Falling Distance
 * Problem 2 -> Retail Price
 * Problem 3 -> Coin Toss
 * Problem 4 -> 24-hour to 12-hour
 * Problem 5 -> Area and Perimeter
 * Problem 6 -> Waiting Time
 * Problem 7 -> Standard deviation
 * Problem 8 -> Meters to feet and cm to inches
 * Problem 9 -> Pounds to Kg and Oz to Grams
 * Problem 0 -> Feet to Meters and Inches to Cm
 * Modified on Apr 24th, 2015
 *      Add repetition with a do-loop
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries


//Global Constants
const float LGAL=0.264179;//Liters per gallon
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2


//Function Prototypes
void problem1 ();
void problem2 ();
void problem3 ();
void problem4 ();
void problem5 ();
void problem6 ();
void problem7 ();
void problem8 ();
void problem9 ();
void problem0();
float fallingDistance(float);
float cRetail (float, float, float);
void cToss(int);
void area(float a,float b,float c){
    float s = (a+b+c)/2;
    if(a>s||b>s||c>s) cout<<"Invalid Parameters";
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    float perime= (a+b+c);
    cout<<"Area is "<<area<<endl;
    cout<<"Perimeter is "<<perime<<endl;
}
void waitTime(int &Hour, int &Min,int wait){
    float addHr= Hour;
    float addMin= Min+ (wait);
    if(addMin>=60) addHr=Hour+(Min+wait)/60;
    if(addMin>=60) addMin =  (Min+wait)%60;
    
 
    cout<<"Time the wait time is over: "<<addHr<<":"<<addMin<<endl;
    
}
void average(float a,float b,float c,float d){
    cout<<"First score:"<<endl;
    cin>>a;
    cout<<"Second score: "<<endl;
    cin>>b;
    cout<<"Third score: "<<endl;
    cin>>c;
    cout<<"Fourth score: "<<endl;
    cin>>d;
    float ave = (a+b+c+d)/4;
    cout<<"The average is "<<ave<<endl;
    float temp= pow(a-ave,2)+pow(b-ave,2)+pow(c-ave,2)+pow(d-ave,2);
    float dev= temp/4;
    cout<<"The standard deviation is: "<<dev<<endl;
    
    
}
void getinpt(float& meters, float& cm, float& feet, float& inches);
        
float convert(float& meters, float& cm, float& feet, float& inches);

void givotpt(float meters, float cm, float feet, float inches);  

//Problem 9

void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams);
        
float convert2(float& pounds, float& ounces, float& kilograms, float& grams);

void givotpt2(float pounds, float ounces, float kilograms, float grams);

//Problem 0
void getinpt3(float& feet, float& inches, float& meters, float& cm);
        
float convert3(float& feet, float& inches, float& meters , float& cm);

void givotpt3(float feet, float inches, float meters, float cm);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"  Chapter 5 Homework Assignment Menu."<<endl;
        cout<<"Type 1 to solve Gaddis 7th Ed. Chapter 6 Problem 5"<<endl;
        cout<<"Type 2 to solve Gaddis 7th Ed. Chapter 6 Problem 1"<<endl;
        cout<<"Type 3 to solve Gaddis 7th Ed. Chapter 6 Problem 8 "<<endl;
        cout<<"Type 4 to solve Savitch 8th Ed. Chapter 5 Problem 1"<<endl;
        cout<<"Type 5 to solve Savitch 8th Ed. Chapter 5 Problem 13"<<endl;
        cout<<"Type 6 to solve Savitch 8th Ed. Chapter 5 Problem 2"<<endl;
        cout<<"Type 7 to solve Savitch 8th Ed. Chapter 5 Problem 4"<<endl;
        cout<<"Type 8 to solve Savitch 8th Ed. Chapter 5 Problem 7"<<endl;
        cout<<"Type 9 to solve Savitch 8th Ed. Chapter 5 Problem 9"<<endl;
        cout<<"Type 0 to solve Savitch 8th Ed. Chapter 5 Problem 6"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case '1':problem1();break;
            case '2':problem2();break;
            case '3':problem3();break;
            case '4':problem4();break;
            case '5':problem5();break;
            case '6':problem6();break;
            case '7':problem7();break;
            case '8':problem8();break;
            case '9':problem9();break;
            case '0':problem0();break;
            default: cout<<"Exit?"<<endl;
        };
    }while(choice>='0'&&choice<='9');
        //Exit right stage
    return 0;
}

//*********** problem 1 **********/
void problem1(){
    float dista, time;
    
    
    //Loop
    for(time=1; time<=10; time++)
    {
    //Calculate the distance
    dista=fallingDistance(time);
    
    //Output the distance
    cout<<"The falling distance of "<<time<<" seconds is "<<dista<<" meters"<<endl;
    }
}
//****************************************************************************************************************************************

float fallingDistance(float time){
    const float G=9.8;
    return 0.5*G*time*time;
        
}

//*********** problem 2 **********/
void problem2(){
 //Declare variables
    float wSle, markup,retail;
    //State use of program and ask for inputs
    cout<<"This program calculates an items retail price.\n";
    cout<<"What is the wholesale cost? ";
    cin>>wSle;
    while (wSle<0){
        cout<<"Error please choose a positive number.\n";
        cout<<"What is the wholesale cost? ";
        cin>>wSle;
    }
    cout<<"What is the markup percentage? ";
    cin>>markup;
    while (markup<0){
        cout<<"Error please choose a positive number.\n";
        cout<<"What is the markup percentage? ";
        cin>>markup;
    }
    cout<<fixed<<setprecision (2);
    cout<<"Items retail cost: $"<<cRetail(wSle,markup,retail);
   
}
float cRetail (float w, float m, float r){
    m/=100.0f;
    r=(w*m)+w;
    return r;
    
}

//*********** problem 3 **********\

void problem3(){
    short times;
    srand(time(0));
    cout<<"This program simulates a coin toss."<<endl;
    cout<<"How many times would you like to flip a coin?"<<endl;
    cin>>times;
    cToss(times);
}

void cToss(int times){
    for(int x=1;x<=times;x++){
        short flip=rand()%2+1;
        if(flip==1)
            cout<<"Heads!"<<endl;
        else if(flip==2)
            cout<<"Tails!"<<endl;
    }
    }

//************** Problem 4 ***********/
void problem4(){
  
    //Declare variables
                unsigned short hour, minutes;
                char A;
                char P;
                //Prompt the user
                cout<<"This program converts from 24-hour to 12-hour"<<endl;
                cout<<"Input a hour from 1 to 24"<<endl;
                cin>>hour;
                cout<<"Input the minutes 00 to 60"<<endl;
                cin>>minutes;
                
                //Determine the hour 1 to 24
                
                //Output the hours in 12-hours notation
                if(hour>12){    
                switch(hour){
                    case 13: cout<<"1:";break;
                    case 14: cout<<"2:";break;
                    case 15:cout<<"3:";break;
                    case 16: cout<<"4:";break;
                    case 17: cout<<"5:";break;
                    case 18:cout<<"6:";break;
                    case 19: cout<<"7:";break;
                    case 20: cout<<"8:";break;
                    case 21:cout<<"9:";break;
                    case 22: cout<<"10:";break;
                    case 23: cout<<"11:";break;
                    case 24:cout<<"12:";break;
                    default:;
                            }
                cout<<minutes;
                cout<<" Pm"<<endl;
                           }
                else if(hour<=12){
                    cout<<hour<<":";
                    cout<<minutes;
                    cout<<" Am"<<endl;
                }
                }
//******************** Problem 5 ***********/
void problem5 (){
    float a,b,c;      
    cout<<"This program calculates the area and perimeter of a Triangle"<<endl;
    cout<<"Side 1: "<<endl;
    cin>>a;
    cout<<"Side 2: "<<endl;
    cin>>b;
    cout<<"Side 3: "<<endl;
    cin>>c;
    area(a,b,c);
    
}

//******************** Problem 6 ***********/
void problem6(){
//Introduce variables
    int hour,minute,wait;  //Hour part of notation,minute part of notation, wait time in minutes
    char choose;
    do{
    cout<<"Current hour time (24-hour notation)"<<endl;
    cin>>hour;
    cout<<"Current minute time : "<<endl;
    cin>>minute;
    cout<<"Wait time in minutes:"<<endl;
    cin>>wait;
    
    waitTime(hour,minute,wait);
    cout<<"Repeat program again? [Y/N]"<<endl;
    cin>>choose;
    }while(choose=='y'||choose=='Y');
}
//******************** Problem 7*************/
void problem7(){
   char choose;
    int a,b,c,d;
    do{
        average( a, b, c, d);
        cout<<"again? [Y/N]"<<endl;
        cin>>choose;
    
    }while(choose=='y'||choose=='Y');
}

//******************** Problem 8*************/
void problem8(){
       float meters, cm, feet, inches;
        char check;

        do {
            getinpt(meters, cm, feet, inches);
            convert(meters, cm, feet, inches);
            givotpt(meters, cm, feet, inches);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
       
}

void getinpt(float& meters, float& cm, float& feet, float& inches){ 
    cout<<"Enter meters to convert it to feet: ";
    cin>>meters;
    cout<<endl<<"Enter centimeters to convert it to inches: ";
    cin>>cm;
}

float convert(float& meters, float& cm, float& feet, float& inches){
    feet = meters / 0.3048;
    inches = cm / 2.54;
    return feet, inches;
}

void givotpt(float meters, float cm, float feet, float inches){
    cout<<meters<<" meters "<<cm<<" centimeters is equivalent to "
            <<feet<<" feet and " <<inches<<" inches"<<endl;
}

//******************** Problem 9*************/
void problem9(){
      float pounds,ounces,kilograms,grams;
        char check;

        do {
            getinpt2(pounds,ounces,kilograms,grams);
            convert2(pounds,ounces,kilograms,grams);
            givotpt2(pounds,ounces,kilograms,grams);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        
}

void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams){ 
    cout<<"Enter pounds to convert it to kilograms: ";
    cin>>pounds;
    cout<<endl<<"Enter ounces to convert it to grams: ";
    cin>>ounces;
}

float convert2(float& pounds, float& ounces, float& kilograms, float& grams){
    kilograms = pounds / 2.2046;
    grams = ounces/.035274;
    return kilograms, grams;
}

void givotpt2(float pounds, float ounces, float kilograms, float grams){
    cout<<pounds<<" pounds "<<ounces<<" ounces is equivalent to "
            <<kilograms<<" kilograms and "<<grams<<" grams"<<endl; 
}

//******************** Problem0*************/
void problem0(){
      float feet, inches, meters, cm;
        char check;

        do {
            getinpt(feet, inches, meters, cm);
            convert(feet, inches, meters, cm);
            givotpt(feet, inches, meters, cm);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
       
}

void getinpt3(float& feet, float& inches, float& meters, float& cm){ 
    cout<<"Enter feet to convert it to meters: ";
    cin>>feet;
    cout<<endl<<"Enter inches to convert it to centimeters: ";
    cin>>inches;
}

float convert3(float& feet, float& inches, float& meters, float& cm){
    meters = feet * 0.3048;
    cm = inches * 2.54;
    return meters, cm;
}

void givotpt3(float feet, float inches, float meters, float centimeters){
    cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters
            <<" meters "<<centimeters<<" centimeters"<<endl;      
}