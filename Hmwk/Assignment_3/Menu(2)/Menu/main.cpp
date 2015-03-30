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
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Title
    cout<<"Homework Assignment 3 Menu. Make a selection"<<endl;
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve Savitch 8th Edition Chapter 3 Problem 1"<<endl;
    cout<<"Type 2 to solve Gaddis 7th Edition Chapter 4 Problem 22"<<endl;
    cout<<"Type 3 to solve Savitch 8th Edition Chapter 3 Problem 5"<<endl;
    cout<<"Type 4 to solve Savitch 8th Edition Chapter 3 Problem 19"<<endl;
    cout<<"Type 5 to solve Savitch 8th Edition Chapter 3 Problem 12"<<endl;
    cout<<"Type 6 to solve Savitch 8th Edition Chapter 3 Problem 2"<<endl;
    cout<<"Type 7 to solve Savitch 8th Edition Chapter 3 Problem 7"<<endl;
    cout<<"Type 8 to solve Savitch 8th Edition Chapter 3 Problem 8"<<endl;
    cout<<"Type 9 to solve Savitch 8th Edition Chapter 3 Problem 19"<<endl;
    cout<<"Type 10 to solve Savitch 8th Edition Chapter 3 Problem 12"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
     cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 1."<<endl;  
                
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
                cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 5."<<endl;
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
            cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 19  "<<endl;
            //Declare variables
    char thPick=23;
    bool computer;
    short nPckRmv;
    
    //Playing the game
    do{
        //Designate the player
        computer=false;
        //Ask player how many tooth picks to remove
        do{
            cout<<"There are "<<static_cast<int>(thPick)<<" left to remove"<<endl;
            cout<<"How many tooth picks do you want to remove"<<endl;
            cout<<"Choose 1,2, or 3"<<endl;
            cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //Remove the number of toothpicks
        thPick-=nPckRmv;
        //Designate the computer
        computer=true;
        //Utilize logic from the book
        if(thPick>4){
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;
        }else if(thPick>=2&&thPick<=4){
            thPick=1;
        }else if(thPick==1){
            thPick=0;
            computer=false;
        }
    }while(thPick>1);
    //Output the winner and loser
    switch(static_cast<int>(computer)){
        case 1:{
            cout<<"Computer wins you lose"<<endl;
            break;
        }
        default: 
                cout<<"Computer loses we win"<<endl;
    }
    
    
            break;
        }
        case'5':{
    cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 12."<<endl;
    //Declare Variables
    float approxPi=1.0f;
    unsigned int terms=1,nTerms;
    //Prompt user for number of terms to use
    do{
        cout<<"How many terms in series to use?"<<endl;
        cout<<"Choose an odd number integer < 2^32 !"<<endl;
        cin>>nTerms;
    }while(!(nTerms%2));
    //Calculate the approximate value of PI
    for(unsigned int denom=3;terms<=nTerms;denom+=4,terms+=2){
        approxPi+=(-1.0f/(denom)+1.0f/(denom+2));
    }
    approxPi*=4;
    //Output the result
    cout<<"Exact value of PI = "<<PI<<endl;
    cout<<"Approximate value of PI = "<<approxPi<<endl;
    
            break;
        }
        case '6':{
     cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 2."<<endl;
     //Define the variables
    float aBal, intrat, totdue, minpay;
    //Ask for the input
    cout<<"Enter the account balance"<<endl;
    cin>>aBal;
    
    
    //multiply the interest rate by the account balance for the interest due
    if (aBal <= 1000)
        intrat=aBal*.015;
    else
        intrat=aBal*.01;
    //The total due is the top section added to the original balance
    if (aBal <= 1000){
        totdue=aBal*.015+aBal;}
    else{
        totdue=aBal*.01+aBal;}
    //Min payment is a bit trickey since theres three options
    minpay=totdue*.1;
    //if the minpay is greater then 10 dollars
    if (minpay>=10)
        minpay=minpay;
    //if the minpay is less then the amount owed total, means it only works 
    //when you are about to close the balance
    else if (totdue<=10)
        minpay=totdue;
    //if the minpay is not going to be closed soon but they still want some
    //money
    else (minpay=10);
    //show the results
    cout<<"Your interest due is $"<<intrat<<endl;
    cout<<"Your total due is $"<<totdue<<endl;
    cout<<"Your minimum payment is $"<<minpay<<endl;
    //Ask to run it again
    cout<<"Would you like to run another amount?"<<endl;
    cout<<"Enter Y for yes and N for no, followed by pressing enter\n";
    char answer;
    cin>>answer;
    while ((answer == 'Y')||(answer == 'y'))
    {
        //Ask for the input
        cout<<"Enter the account balance"<<endl;
        cin>>aBal;
        //multiply the interest rate by the account balance for the interest due
        if (aBal <= 1000)
            intrat=aBal*.015;
        else
            intrat=aBal*.01;
        //The total due is the top section added to the original balance
        if (aBal <= 1000){
            totdue=aBal*.015+aBal;}
        else{
            totdue=aBal*.01+aBal;}
        //Min payment is a bit trickey since theres three options
        minpay=totdue*.1;
        //if the minpay is greater then 10 dollars
        if (minpay>=10)
            minpay=minpay;
        //if the minpay is less then the amount owed total, means it only works 
        //when you are about to close the balance
        else if (totdue<=10)
            minpay=totdue;
        //if the minpay is not going to be closed soon but they still want some
        //money
        else (minpay=10);
        //show the results
        cout<<"Your interest due is $"<<intrat<<endl;
        cout<<"Your total due is $"<<totdue<<endl;
        cout<<"Your minimum payment is $"<<minpay<<endl;
        //Ask to run it again
        cout<<"Would you like to run another amount?"<<endl;
        cin>>answer;
    }
    cout<<"Goodbye"<<endl;

        break;
    }
        case '7':{
    cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 7."<<endl;
            //Declare variables
    unsigned short number;
    //Program Description 
    cout<<"This program turns Arabaic Numerals into Roman Numerals."<<endl;
    //Prompt the user
    cout<<"Input a number from 1000 to 3000:"<<endl;
    cin>>number;
    
    //Determine the number of 1000's
    char thousands=(number-number%1000)/1000;
    
    //Output the thousands in Roman Numerals
    switch(thousands){
    case 3: cout<<"M";
    case 2: cout<<"M";
    default:cout<<"M";
    }
    //Determine the number of 100's
    number-=thousands*1000;
        char hundreds=(number-number%100)/100;
        switch(hundreds){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1:cout<<"C";break;
        default:;
    }
        
    //determine the 10s
    number-=hundreds*100;
    char tens=(number-number%10)/10;
        switch(tens){
        case 9: cout<<"X";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";break;
        default:;
    }
        
    number-=tens*10;
    char ones=number;
        switch(ones){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";break;
        default:;
    }
        
            break;
        }
        case '8':{ 
   cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 8."<<endl;
   //Declare the variables 
    float VlofCrd;//Value of the card
    float TlScr2,TlScr3,TlScr4,TlScr5;//Total Score
    float Fcard,Scard,Tcard,Focard,Ficard;//Number of Cards 2-5
 
    //Calculations 
    TlScr2=Fcard+Scard;
    TlScr3=Fcard+Scard+Tcard;
    TlScr4=Fcard+Scard+Tcard+Focard;
    TlScr5=Fcard+Scard+Tcard+Focard+Ficard;
    top:
    //Number of cards 
    cout<<"2 cards "<<endl; 
    cout<<"3 cards "<<endl;
    cout<<"4 cards "<<endl;
    cout<<"5 cards "<<endl;
    cout<<"Input the Number of cards you have: "<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        
        case 2 :{ //(2 cards)
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            TlScr2=Fcard+Scard;
            
            if (TlScr2 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr2<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                }
        }
            break;
            
        case 3 :{ //(3 cards)
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            cout<<"What is the value of your third cards: ";
            cin>>Tcard;

            TlScr3=Fcard+Scard+Tcard;
            
            if (TlScr3 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr3<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                 }
        }
            break;
            
        case 4 :{ //(4 cards)
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            cout<<"What is the value of your third cards: ";
            cin>>Tcard;
            cout<<"What is the value of your fourth cards: ";
            cin>>Focard;
            TlScr4=Fcard+Scard+Tcard+Focard;
            
            if (TlScr4 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr4<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                 }
        }
            break;
            
        case 5 :{ //(5 cards) 
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            cout<<"What is the value of your third cards: ";
            cin>>Tcard;
            cout<<"What is the value of your fourth cards: ";
            cin>>Focard;
            cout<<"What is the value of your fifth cards: ";
            cin>>Ficard;
            TlScr5=Fcard+Scard+Tcard+Focard+Ficard;
            
            if (TlScr5 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr5<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                 }
        }
            break;
    }
    goto top;
            break;
        }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}  