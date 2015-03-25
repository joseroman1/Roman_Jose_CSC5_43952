/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Purpose:  Assignment 3 Homework Menu
 * Problem 1 -> Rock-Paper-Scissor Game
 * Problem 2 -> Cable Bill
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 23rd, 2015
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Title
    cout<<"Homework 3 Assignment Menu. Make a selection"<<endl;
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve Savitch Chapter 3 Problem 1"<<endl;
    cout<<"Type 2 to solve Gaddis Chapter 4 Problem 22"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type 5 to solve problem 5"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                //Declare Variables
    char paper,rock,scissor, input1,input2;
    
    // Explanation to the rules
    cout<<"This program will score a Rock-Paper-Scissor game between";
    cout<<" two users. "<<endl;
    cout<<"Each user will input R for rock, P for paper, and S for scissor.";
    cout<<" when prompt to."<<endl;
    //Output Prompt
    cout<<"First player input R for rock, P for paper or S for scissor"<<endl;
    cin>>input1;

    
                break;
            }
            case '2':{
                //Declare Variables
    ofstream out;//Output the results in a file
    float vwdHrs;//Hours viewed (hrs)
    char package;//Package AaBbCc
    const int SIZE=40;//Max size of name= 39 characters
    char name[SIZE];//Customer Name
    float bill;// Bill
    //Open the file
    out.open("Cable.dat");
    //Prompt the user for inputs
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customer name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    
//Calculate the Bill
    switch (package){
        case 'A':
        case 'a':{
            bill=9.95;
            if(vwdHrs>10)bill+2*(vwdHrs-10);
            break;
     
    }
    case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)bill+(vwdHrs-20);
            break ;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
           
        default: cout<<"Wrong Package chosen"<<endl;
   };
    
   //Output the results to the screen
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your Cable Bill From CSC5 RCC Programming Class"<<endl;
    out<<"Customer Name: "<<name<<endl;
    out<<"Package: "<<package<<endl;
    out<<"Hours Viewed: "<<vwdHrs<<endl;
    out<<"Amount Owed: "<<bill<<endl;
    
    //Close the file
    out.close();
                break;
            }
            case '3':{
                float quot=1.0f/2/3/4/5/6/7/8/9/10;
                cout<<endl;
                cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                cout<<endl;
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}