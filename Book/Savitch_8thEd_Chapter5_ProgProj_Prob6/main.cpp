/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 20, 2015, 9:34 
 *      Purpose: Converting feet/inches into meters/cm
 */

#include <iostream>
using namespace std;

void getinpt(float& feet, float& inches, float& meters, float& cm);
        
float convert(float& feet, float& inches, float& meters , float& cm);

void givotpt(float feet, float inches, float meters, float cm);

int main(){
        float feet, inches, meters, cm;
        char check;

        do {
            getinpt(feet, inches, meters, cm);
            convert(feet, inches, meters, cm);
            givotpt(feet, inches, meters, cm);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
}

void getinpt(float& feet, float& inches, float& meters, float& cm){ 
    cout<<"Enter feet to convert it to meters: ";
    cin>>feet;
    cout<<endl<<"Enter inches to convert it to centimeters: ";
    cin>>inches;
}

float convert(float& feet, float& inches, float& meters, float& cm){
    meters = feet * 0.3048;
    cm = inches * 2.54;
    return meters, cm;
}

void givotpt(float feet, float inches, float meters, float centimeters){
    cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters
            <<" meters "<<centimeters<<" centimeters"<<endl;
}