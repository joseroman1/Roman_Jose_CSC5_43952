/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 22, 2015, 12:27 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float cRetail (float, float, float);

//Execution begins here
int main(int argc, char** argv) {
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
    return 0;
}
float cRetail (float w, float m, float r){
    m/=100.0f;
    r=(w*m)+w;
    return r;
}