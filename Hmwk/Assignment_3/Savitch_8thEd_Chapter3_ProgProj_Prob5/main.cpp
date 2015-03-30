/* 
 * File:   main.cpp
 * Author: JR
 *Created on March 29, 2015, 5:58 PM
 *     Purpose: Astrology Program.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
int month, day;
    
    cout<<"Enter the month that you were born. "<<endl;
    cin>>month;
    
    switch (month)
    {
    case 1:
        cout<<"The month you chose was January."; 
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
            if (day>=1&&day<20)
                cout<<"You are a Capricorn!"<<endl;
            else 
                cout<<"You are an Aquarius!"<<endl;
        break;
        
    case 2:
        cout<<"The month you chose was February."<<endl; 
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
            if (day>=1&&day<19)
                cout<<"You are an Aquarius!"<<endl;
            else
                cout<<"You are a Pisces!"<<endl;       
        break;   
        
    case 3:
        cout<<"The month you chose was March."<<endl;   
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<21)
            cout<<"You are a Pisces!"<<endl;
        else
             cout<<"You are an Aries!"<<endl;
        break;  
        
    case 4:
        cout<<"The month you chose was April."<<endl; 
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are an Aries!"<<endl;
        else
             cout<<"You are a Taurus!"<<endl;
        break; 
        
    case 5:
        cout<<"The month you chose was May."<<endl;
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Taurus!"<<endl;
        else
             cout<<"You are a Gemini!"<<endl;
        break; 
        
    case 6:
        cout<<"The month you chose was June."<<endl;   
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Gemini!"<<endl;
        else
             cout<<"You are a Cancer!"<<endl;
        break; 
        
    case 7:
        cout<<"The month you chose was July."<<endl; 
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Cancer!"<<endl;
        else
             cout<<"You are a Leo!"<<endl;
        break; 
        
    case 8:
        cout<<"The month you chose was August."<<endl;     
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Leo!"<<endl;
        else 
             cout<<"You are a Virgo!"<<endl;
        break; 
        
    case 9:
        cout<<"The month you chose was September."<<endl; 
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Virgo!"<<endl;
        else
             cout<<"You are a Libra!"<<endl;
        break;  
        
    case 10:
        cout<<"The month you chose was October."<<endl;
        cout<<"Enter the day you were born."<<endl;
        cin>>day;   
        if (day>=1&&day<20)
             cout<<"You are a Libra!"<<endl;
        else
             cout<<"You are a Scorpio!"<<endl;
        break;   
        
    case 11:
        cout<<"The month you chose was November."<<endl;  
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Scorpio!"<<endl;
        else
             cout<<"You are a Sagittarius!"<<endl;
        break;    
        
    case 12:
        cout<<"The month you chose was December."<<endl; 
        cout<<"Enter the day you were born."<<endl;
        cin>>day;
        if (day>=1&&day<20)
             cout<<"You are a Sagittarius!"<<endl;
        else
             cout<<"You are a Capricorn!"<<endl;
        break;    
        
    }
    
    
    
    return 0;
}

