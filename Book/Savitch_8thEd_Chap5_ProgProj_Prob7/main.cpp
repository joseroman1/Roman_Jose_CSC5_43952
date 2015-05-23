/* 
 * File:   main.cpp
 * Author: JR
 *
 * Created on April 24, 2015, 3:54 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getinpt(float& meters, float& cm, float& feet, float& inches);
        
float convert(float& meters, float& cm, float& feet, float& inches);

void givotpt(float meters, float cm, float feet, float inches);

//Execution Begins Here!
int main(){
        float meters, cm, feet, inches;
        char check;

        do {
            getinpt(meters, cm, feet, inches);
            convert(meters, cm, feet, inches);
            givotpt(meters, cm, feet, inches);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
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
