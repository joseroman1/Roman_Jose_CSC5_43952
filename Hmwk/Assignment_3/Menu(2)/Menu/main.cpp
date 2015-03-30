/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Purpose:  Assignment 3 Homework Menu
 * Problem 1 -> Rock-Paper-Scissor Game
 * Problem 2 -> Cable Bill
 * Problem 3 -> Long Distance Call Calculator
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
    cout<<"Type 3 to solve Savitch 8th Chapter 3 Problem 5"<<endl;
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
    char user1, user2, r, s, p;
    
    cout<<"This program allows you to play a game of rock, "<<endl;
    cout<<"paper, scissors with two players."<<endl;
    cout<<"Input s=scissors r=rock and p=paper"<<endl;
    cout<<"Player 1, enter your choice."<<endl;
    cin>>user1;
    cout<<"Player 2, enter your choice."<<endl;
    cin>>user2;
    
    
    if (user1=='r'&&user2=='s')
        {cout<<"Player 1 wins! Rock crushes scissors!"<<endl;}
    else if (user1=='s'&&user2=='r')
        {cout<<"Player 2 wins! Rock crushes scissors!"<<endl;}
    else if ((user1=='p')&&(user2=='s'))
        {cout<<"Player 2 wins! Scissors cuts paper!"<<endl;}
    else if ((user1=='s')&&(user2=='p'))
        {cout<<"Player 1 wins! Scissors cuts paper!"<<endl;}
    else if ((user1=='p')&&(user2=='r'))
        {cout<<"Player 1 wins! Paper covers rock!"<<endl;}
    else if ((user1=='r')&&(user2=='p'))
        {cout<<"Player 2 wins! Paper covers rock!"<<endl;}
    else 
        {cout<<"It's a draw!"<<endl;}
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
                cout<<"This program wil calculate the cost of your long-distance phone call.\n";
    char choose;
    cout<<"Would you like to proceed?. Type Y for yes or N for no.\n";
    cin>>choose;
    while(choose=='Y'||choose=='y'){
    char day; //Variabll for the day
    int time; //Variable for the time of the day
    int duration;// Duration of call in minutes
    
    cout<<"Input the day of the call in the following format :\n";
    cout<<"For Monday type 'M'"<<endl;
    cout<<"For Tuesday type 'T'"<<endl;
    cout<<"For Wednesday type 'W' "<<endl;
    cout<<"For Thursday type 'TH'"<<endl;
    cout<<"For Friday type 'F' "<<endl;
    cout<<"For Saturday type S"<<endl;
    cout<<"For Sunday type 'A'"<<endl;
    cout<<"This program is case-sensitive, so please use the specified symbols\n";
    cin>>day;
   
    //Time
    cout<<"Input the time of the call in 24 hour notation/military time. "<<endl;
    cout<<"Example. 1330 or 745. etc.  "<<endl;
    cin>>time;
    
    cout<<"What is the duration of the call in minutes?"<<endl;
    cin>>duration;
    
 
    switch(day) {
    case 'M':
    case 'T':
    case 'W':
    case 'P':
    case 'F':
            if(time>=800&&time<=1800){
                float rate = .40*duration; //Calulates the cost of the phone call
                cout<<"the phone call cost $"<<rate<<endl;
                
            }
            else{
                float rate =.25*duration;
                cout<<"the phone call cost $"<<rate<<endl;
            }
        break;
    case 'S':
    case 'A':
            float rate =duration*.15;
            cout<<"the phone call cost $"<<rate<<endl;
            break;
            
      
      
            
    
    }
    cout<<"Would you like to repeat this program? Y/N.\n";
        cin>>choose;
    }
                break;
            }
        case '4':{
            
            break;
        }
        
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}  