/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Purpose:  Assignment 3 Homework Menu
 * Problem 1 -> Rock-Paper-Scissor Game.
 * Problem 2 -> Cable Bill.
 * Problem 3 -> Long Distance Call Calculator.
 * Problem 4 -> The Toothpick Game.
 * Problem 5 -> Area of Rectangles 
 * Problem 6 -> Interest Due
 * Problem 7 -> Arabic Numerals into Roman Numerals
 * Problem 8 -> Find a four digit number that passes the conditions.
 * Problem 9 -> Minimum and Maximum
 * Problem 0 -> BMR Calculator
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


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Title
    cout<<"Homework Assignment 3 Menu. Make a selection:"<<endl;
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve Savitch 8th Edition Chapter 3 Problem 1"<<endl;
    cout<<"Type 2 to solve Gaddis 7th Edition Chapter 4 Problem 22"<<endl;
    cout<<"Type 3 to solve Savitch 8th Edition Chapter 3 Problem 5"<<endl;
    cout<<"Type 4 to solve Savitch 8th Edition Chapter 3 Problem 19"<<endl;
    cout<<"Type 5 to solve Gaddis 8th Edition Chapter 4 Problem 4"<<endl;
    cout<<"Type 6 to solve Savitch 8th Edition Chapter 3 Problem 2"<<endl;
    cout<<"Type 7 to solve Savitch 8th Edition Chapter 3 Problem 7"<<endl;
    cout<<"Type 8 to solve Savitch 9th Edition Chapter 3 Problem 13"<<endl;
    cout<<"Type 9 to solve Gaddis 8th Edition Chapter 4 Problem 1"<<endl;
    cout<<"Type 0 to solve Savitch 8th Edition Chapter 3 Problem 17"<<endl;
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
               cout<<"You have chosen Gaddis 7th Edition Chapter 4 Problem 22."<<endl;    
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
            cout<<"You have chosen Gaddis 8th Edition Chapter 4 Problem 4."<<endl;
            //Declare variables
            float L1, W1, L2, W2, A1, A2;
            //Prompt for Input
            cout<<"This program will determine which rectangle has the greater Area."<<endl;
            cout<<"Enter length of First rectangle."<<endl;
            cin>>L1;//Length of first rectangle 
            cout<<"Enter width of First rectangle."<<endl;
            cin>>W1;//Width of first rectangle
            cout<<"Enter length of Second rectangle."<<endl;
            cin>>L2;//Length of Second rectangle
            cout<<"Enter width of Second rectangle."<<endl;
            cin>>W2;//Width of Second rectangle

            //Calculate Area
            A1=L1*W1;//Area of first rectangle
            A2=L2*W2;//Area of Second rectangle
            //Output results with IF
            if(A1>A2)
                cout<<"First rectangle has greater area."<<endl;
                else if(A1==A2)
                cout<<"Both rectangles have equal area."<<endl;
                else
                cout<<"Second rectangle has greater area."<<endl;

                    break;
                }

                case '6':{
                //Define the variables
                 float aBal, iRate, tDue, mPay;
                 //Ask for the input
                 cout<<"Enter the account balance"<<endl;
                 cin>>aBal;
                 //multiply the interest rate by the account balance for the interest due
                 if (aBal <= 1000)
                 iRate=aBal*.015;
                 else
                 iRate=aBal*.01;
                 //The total due is the top section added to the original balance
                 if (aBal <= 1000){
                 tDue=aBal*.015+aBal;}
                 else{
                 tDue=aBal*.01+aBal;}
                 //Min payment is a bit trickey since theres three options
                 mPay=tDue*.1;
                 //if the mPay is greater then 10 dollars
                 if (mPay>=10)
                 mPay=mPay;
                 //if the mPay is less then the amount owed total, means it only works 
                 //when you are about to close the balance
                 else if (tDue<=10)
                 mPay=tDue;
                 //if the mPay is not going to be closed soon but they still want some
                 //money
                 else (mPay=10);
                 //show the results
                 cout<<"Your interest due is $"<<iRate<<endl;
                 cout<<"Your total due is $"<<tDue<<endl;
                 cout<<"Your minimum payment is $"<<mPay<<endl;



                break;
            }

                case '7':{
            cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 7."<<endl;
                    //Declare variables
            unsigned short number;
            //Program Description 
            cout<<"This program turns Arabic Numerals into Roman Numerals."<<endl;
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
           cout<<"You have chosen Savitch 9th Edition Chapter 3 Problem 13"<<endl;
           //Loop for all possible digits
            for(int d1000=0;d1000<=9;d1000++){
            for(int d100=0;d100<=9;d100++){
                 for(int d10=0;d10<=9;d10++){
                   for(int d1=0;d1<=9;d1++){   
                       if((d1000==3*d10) &&
                               (d1%2==1) &&
                               ((d1000+d100+d10+d1)==27)&&
                           (d1!=d10&&d1!=d100&&d1!=d1000&&
                                   d10!=d100&&d10!=d1000&&d100!=d1000)){
                           cout<<"The Address Number = ";
                           cout<<d1000<<d100<<d10<<d1<<endl;
                       }
                   }
                 }
            }
            }
                    break;
                }

                case '9':{
            cout<<"You have chosen Gaddis 8th Edition Chapter 4 Problem 1"<<endl;        
           //Declare Variables
            int X;
            int Y;
        //input the number
        cout<<"This program finds which number is the largest or if they are equal."<<endl;
        cout<<"What is the first number that you want to input?\n"<<endl;
        cin>>X;
        cout<<"What is the second number that you want to input?\n"<<endl;
        cin>>Y;
        //output the answer
        cout<<"First number is "<<X<<" and the second number is "<<Y<<endl;
        if (X > Y)
        cout << X << " is the larger number." << endl;

        else if (Y > X)
        cout << Y << " is the larger number." << endl;

        else 
        cout << "Both numbers are equal." <<endl;
                    break;
                }

                case '0':{
            cout<<"You have chosen Savitch 8th Edition Chapter 3 Problem 17"<<endl;
            cout<<"This program will calculate how many chocolate bars you should eat to maintain your body weight"<<endl;
            //Declare Values
            float height, weight, age;
            unsigned char cBar = 230; //calories
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
                cout<<"Eat about "<<(men+men*.20)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }

            if(sex=='f'&&choose=='a') {
                cout<<"Eat about "<<(women+women*.20)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }
            if(sex=='m'&&choose=='b'){
                cout<<"Eat about "<<(men+men*.3)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }

            if(sex=='f'&&choose=='b') {
                cout<<"Eat about "<<(women+women*.3)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }
            if(sex=='m'&&choose=='c'){
                cout<<"Eat about "<<(men+men*.4)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }

            if(sex=='f'&&choose=='c') {
                cout<<"Eat about "<<(women+women*.4)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }
            if(sex=='m'&&choose=='d'){
                cout<<"Eat about "<<(men+men*.5)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }

            if(sex=='f'&&choose=='d') {
                cout<<"Eat about "<<(women+women*.5)/cBar<<" chocolate bars to maintain your body weight"<<endl;
            }

                    break;
                }
                    default:{
                            cout<<"Exit?"<<endl;
                    }
            };
    return 0;
}  