/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Miles per Gallon
 * Problem 2 -> Miles per Gallon Compare
 * Problem 3 -> Stock Share
 * Problem 4 -> Inflation Calculator
 * Problem 5 -> Distance Traveled
 * Problem 6 -> Pennies Pay Problem
 * Problem 7 -> Force Attraction
 * Problem 8 -> Fried Twikies Machine
 * Problem 9 -> Time Calculator
 * Problem 0 -> Percentage increase of a club
 * Modified on Apr 6th, 2015
 *      Add repetition with a do-loop
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cmath>
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
float fnMPG(float,float);
float fnMPG2(float,float);
float infla (float a,float b);
// F            m1    m2    d
float atrForc(float,float,float);


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
        cout<<"Type 3 to solve Savitch 8th Ed. Chapter 4 Problem 3 "<<endl;
        cout<<"Type 4 to solve Savitch 8th Ed. Chapter 4 Problem 4"<<endl;
        cout<<"Type 5 to solve Gaddis 7th Ed. Chapter 5 Problem 6"<<endl;
        cout<<"Type 6 to solve Gaddis 8th Ed. Chapter 5 Problem 7"<<endl;
        cout<<"Type 7 to solve Savitch 8th Ed. Chapter 4 Problem 7"<<endl;
        cout<<"Type 8 to solve Savitch 8th Ed. Chapter 4 Problem 15"<<endl;
        cout<<"Type 9 to solve Savitch 8th Ed. Chapter 4 Problem 16"<<endl;
        cout<<"Type 0 to solve Gaddis 8th Ed. Chapter 5 Problem 5"<<endl;
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
    
        float lGas;// Liters to gas
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
    cout<<"Good-bye."<<endl;
}

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
    mpg= fnMPG (cMiles,gGas);
    cout<<"How many liters of gasoline has the second car consumed? "<<endl;
    cin>> lGas2;    
    cout<<"How many miles has the second car driven?"<<endl;
    cin>> cMiles2;
    gGas2= lGas2 * LGAL;
    mpg2= fnMPG (cMiles2,gGas2);
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

float fnMPG2(float x,float y){
    return x/y;
}

//*********** problem 3 **********\

void problem3(){
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
    
    }

//************** Problem 4 ***********/
void problem4(){
   float start; //Initial price of item
    float end;   //End price of the item  
    string repeat; 
    
    cout<<"This program calculates the rate of inflation."<<endl;
    cout<<"Choose an item and compare its price between a period of time"<<endl;
    
    do{
    cout<<"What was the price of the item one year ago? $";
    cin>>start;
    cout<<"What is the price of the item right now? $";
    cin>>end;
    
    float inf= infla (start,end);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<" The rate of inflation is "<<abs(inf)<<"%."<<endl;
    cout<<"Note: If the price change decreased, then it is the rate of deflation."<<endl;
    cout<<"Would you like to calculate another Inflation Rate?(Y/N):";
    cin>> repeat;
    }while(repeat!="N");
    cout<<"Good-bye."<<endl;
    
}
float infla (float a,float b)
{
    float r;
    r= (b-a)/a*100;
    return r; 
    
                }
//******************** Problem 5 ***********/
void problem5 (){
    float Speed,hours,dist;
    cout<<"I will calculate the distance you have traveled. "<<endl;
    cout<<"Enter the speed of your vehicle (in Miles per Hours)"<<endl;
    cin>>Speed;
    cout<<"Then input how many hours you have traveled.(Greater than 1 hour)"<<endl;
    cin>>hours;
    dist=Speed*hours;
    if(Speed<0 || hours<=1)
        cout<<"Error. Please enter positive speeds and greater than or equal to 1."<<endl;
    else{
        cout<<"  Hour     Distance Traveled\n ----------------------------"<<endl;
        for(int x=1;x<=hours;x++){
                dist=Speed*x;
                cout<<"    "<<x<<"\t  "<<setw(10)<<right<<dist<<" miles"<<endl;
}
    }
}

//******************** Problem 5 ***********/
void problem6(){
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
}
//******************** Problem 6*************/
void problem7(){
    char choice;
    do{
    //Declare Variable 
    float mass1, mass2, d;
    
    //Prompt for inputs
    cout<<"Enter the mass of body 1 (grams)"<<endl;
    cin>>mass1;
    cout<<"Enter the mass of body 2 (grams)"<<endl;
    cin>>mass2;
    cout<<"Enter the distance between mass 1 and mass 2 (cm):"<<endl;
    cin>>d;
    float force=atrForc(mass1,mass2,d);
    cout<<"The attractive force (dynes) is: "<<force<<endl;
    cout<<"Would you like to repeat this program?"<<endl;
    cout<<"Type Y for yes or N for no:"<<endl;
    cin>>choice;
    //Output 
    }while(choice=='y'||choice=='Y');
}
           

float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}

//******************** Problem 8*************/
void problem8(){
     //Declare variables
    const int SIZE=80;
    char input[SIZE]="";
    unsigned short totChng=0,pTwnke=350;
    char nQtrs,nDimes,nNikels;
    //Prompt user for input
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This a Fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkies Cost $3.50"<<endl;
    cout<<"Input your change as "<<endl;
    cout<<"Dollar, Quarter, Dime, Nickels"<<endl;
    do{
        cout<<endl<<"Input coins/change"<<endl;
        cin>>input;
        if(strcmp(input,"Dollar")==0){
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
        cout<<"Total Change = $"<<totChng/100.0f<<endl;
    }while(totChng<pTwnke);
    //Give Twinkie
    cout<<endl<<"Here is your Fried Twinkie"<<endl;
    //Calculate the change
    totChng-=pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //How many Quarters
    nQtrs=totChng/25;
    if(nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters Change"<<endl;
    //How many Dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if(nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    //How many Nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if(nNikels>0)cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;
}
//******************** Problem9*************/
void problem9(){
 int strHrs,strMins,strIsAm=false;
    int endHrs,endMins,endIsAm=false;
    char ap,dummy;
    //Prompt for the start time
    cout<<"Input the Start Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>strHrs>>strMins>>ap>>dummy;
    if(ap=='A'||ap=='a')strIsAm=true;
    //Prompt for the end time
    cout<<"Input the End Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>endHrs>>endMins>>ap>>dummy;
    if(ap=='A'||ap=='a')endIsAm=true;
    //Calculate the minutes for each
    if(!strIsAm)strHrs+=12;
    int strTime=strHrs*60+strMins;
    if(!endIsAm)endHrs+=12;
    int endTime=endHrs*60+endMins;
    int diffMin=endTime-strTime;
    if(diffMin<0)diffMin+=24*60;
    int hrs=diffMin/60;
    int min=diffMin-hrs*60;
    //Output the results
    cout<<"The difference in Time = ";
    cout<<(hrs<10?'0':'\0')<<hrs<<":"
        <<(min<10?'0':'\0')<<min<<endl;   
}
//******************** Problem0*************/
void problem0(){
            float yrCst = 2500;
            float increas =.04; // percent of increase yearly
            float yrs = 1;
            float newCost = yrCst*pow(1+increas,yrs);
            // output the results
            cout<<"Country club prices will be going up"<<endl;
            cout<<"4 percent for the next 6 years"<<endl;
            cout<<"Year             Price"<<endl;
            cout<<"__________________________"<<endl;
            while(yrs<=6){
            float newCost = yrCst*pow(1+increas,yrs);
            cout<<"Year "<<yrs<<" will cost $"<<newCost<<endl;
            yrs++;
}
}