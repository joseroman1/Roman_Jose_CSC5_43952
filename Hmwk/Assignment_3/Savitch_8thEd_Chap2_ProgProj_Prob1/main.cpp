/* File:   main.cpp
 * Author: Jose Roman
 * Created on March 23, 2015, 10:19 AM
 * Purpose: Paper-Rock-Scissor
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 


//Global Constants


//Function Prototypes


//Execution begins here!
int main(int argc, char** argv) {
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
    
    
    return 0;
}
