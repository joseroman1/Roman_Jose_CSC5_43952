/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 29, 2015, 6:06 PM
 *      Purpose: BMR Calculator
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

float const chocbar = 230; //calories

int main(int argc, const char * argv[]) {
    
    cout<<"This program will calculate how many chocolate bars you should eat to maintain your body weight"<<endl;
    float height, weight, age;
    
    cout<<"What is your height(in inches)? ";
    cin>>height;
    
    cout<<"What is your weight in pounds? ";
    cin>>weight;
    
    cout<<"What is your age(in years, of course)? ";
    cin>>age;
    
    float men =  (655+ (4.3*weight)+(4.7*height)-(4.7*age));//formual for men
    float women =(66+(6.3*weight)+(12.9*height)-(6.8*age)); //formula for women
    
    char sex; // The sex of the human, wether male or female
    
    cout<<"what is your sex?"<<endl;
    cout<<"if male type m, if feale type f."<<endl; //to limit user error
    cin>>sex;
    char choose;
    cout<<"Choose either a,b,c, or d based on the following selection.\n";
    cout<<" Are you:"<<endl;
    cout<<"a. Sedentary"<<endl;
    cout<<"b. Somewhat active (exercise occasionally)"<<endl;
    cout<<"c. Active(exercise 3-4 days a week)"<<endl;
    cout<<"d. Highly Active(Exercise everyday)"<<endl;
    cin>>choose;
    
    cout<<fixed<<showpoint<<setprecision(0);
    if(sex=='m'&&choose=='a'){
        cout<<"Eat about "<<(men+men*.20)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    
    if(sex=='f'&&choose=='a') {
        cout<<"Eat about "<<(women+women*.20)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    if(sex=='m'&&choose=='b'){
        cout<<"Eat about "<<(men+men*.3)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    
    if(sex=='f'&&choose=='b') {
        cout<<"Eat about "<<(women+women*.3)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    if(sex=='m'&&choose=='c'){
        cout<<"Eat about "<<(men+men*.4)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    
    if(sex=='f'&&choose=='c') {
        cout<<"Eat about "<<(women+women*.4)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    if(sex=='m'&&choose=='d'){
        cout<<"Eat about "<<(men+men*.5)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    
    if(sex=='f'&&choose=='d') {
        cout<<"Eat about "<<(women+women*.5)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
    }
    
    return 0;
}
    