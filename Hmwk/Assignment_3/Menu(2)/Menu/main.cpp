/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 23rd, 2015
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type A to solve problem 1"<<endl;
    cout<<"Type B to solve problem 2"<<endl;
    cout<<"Type C to solve problem 3"<<endl;
    cout<<"Type D to solve problem 4"<<endl;
    cout<<"Type F to solve problem 5"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case 'A':{
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
            case 'B':{
                int prod=1*2*3*4*5*6*7*8*9*10;
                cout<<endl;
                cout<<"Solution n!(1->10)="<<prod<<endl;
                cout<<endl;
                break;
            }
            case 'C':{
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