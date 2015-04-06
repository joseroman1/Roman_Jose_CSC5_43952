/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 5, 2015, 10:29 PM
 *      Purpose: Mileages per litter
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constant 
const float LGAL=0.264179;//Liters per gallon

//Function Prototype


//Execution Begins Here!
int main(int argc, char** argv) {
 //Declare Variables
    char car1,car2;
    float lGas;// Liters to gas
    float cMiles;//Car miles
    float gGas;//Gallons of gas
    float mpg;
    float fnMPG(float,float);
    string repeat;
    cout<<"This program compares the MPG of two cars:"<<endl;
    //Ask for inputs
    do{
    cout<<"How many liters of gasoline has car 1 consumed? "<<endl;
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
    return 0;
}

float fnMPG (float x,float y){
    return x/y;
}

