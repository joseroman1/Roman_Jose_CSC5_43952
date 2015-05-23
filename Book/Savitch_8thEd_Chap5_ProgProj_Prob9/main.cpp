/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 22, 2015, 12:18 AM
 *      Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams);
        
float convert2(float& pounds, float& ounces, float& kilograms, float& grams);

void givotpt2(float pounds, float ounces, float kilograms, float grams);

//Execution Begins Here!
int main(){
        float pounds,ounces,kilograms,grams;
        char check;

        do {
            getinpt2(pounds,ounces,kilograms,grams);
            convert2(pounds,ounces,kilograms,grams);
            givotpt2(pounds,ounces,kilograms,grams);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
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