/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on March 30, 2015, 9:35 PM
 *      Purpose: Long Distance Call Calculator
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 


//Global Constants


//Function Prototypes


//Execution begins here!
int main(int argc, char** argv) {
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
    return 0;
}

