/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 20, 2015, 9:34 
 *      Purpose: Converting feet/inches into meters/cm
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
float ftToMt = .3048;  //.3048 meter in one foot
float inToCe = 2.54; //2.54 centimeters in one inch

//Function Prototype to perform calculation
void convert(float &ft,float &inch){
    ft*=ftToMt;
    inch*=inToCe;
    
}
void output(float meter,float cm){
    cout<<"It is "<<meter<<" meters and "<<cm<<" centimeters "<<endl;
}
int main(){
    float ft,inch;
    char choose;
    do{
    cout<<"measurement in feet: "<<endl;
    cin>>ft;
    cout<<"Measurement in inches: "<<endl;
    cin>>inch;
    convert(ft,inch);
    output(ft,inch);
    cout<<"Repeat program again? [Y/N]"<<endl;
    cin>>choose;
    }while(choose=='y'||choose=='Y');
    return true;
    
}