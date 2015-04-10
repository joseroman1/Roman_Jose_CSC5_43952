/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 5, 2015, 10:29 PM
 *      Purpose: Mileages per litter
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries


//Global Constant 
const float LGAL=0.264179;//Liters per gallon

//Function Prototype


//Execution Begins Here!
int main(int argc, char** argv) {
 //Declare Variables
    float lGas;// Liters to gas
    float cMiles;//Car miles
    float gGas;//Gallons of gas
    float mpg;
    float lGas2;// Liters to gas
    float cMiles2;//Car miles
    float gGas2;//Gallons of gas
    float mpg2;
    float fnMPG(float,float);
    
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
    return 0;
}

float fnMPG (float x,float y){
    return x/y;
}

