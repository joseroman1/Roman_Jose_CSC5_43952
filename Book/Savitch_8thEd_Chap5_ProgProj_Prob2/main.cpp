/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 20, 2015, 10:30 PM
 *      Purpose: Waiting time
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Function to calculate wait time
void waitTime(int &Hour, int &Min,int wait){
    float addHr= Hour;
    float addMin= Min+ (wait);
    if(addMin>=60) addHr=Hour+(Min+wait)/60;
    if(addMin>=60) addMin =  (Min+wait)%60;
    
 
    cout<<"Time the wait time is over: "<<addHr<<":"<<addMin<<endl;
    
}
//Executiton Begins hHere!
int main(int argc, const char * argv[]) {
    //Introduce variables
    int hour,minute,wait;  //Hour part of notation,minute part of notation, wait time in minutes
    char choose;
    do{
    cout<<"Current hour time (24-hour notation)"<<endl;
    cin>>hour;
    cout<<"Current minute time : "<<endl;
    cin>>minute;
    cout<<"Wait time in minutes:"<<endl;
    cin>>wait;
    
    waitTime(hour,minute,wait);
    cout<<"Repeat program again? [Y/N]"<<endl;
    cin>>choose;
    }while(choose=='y'||choose=='Y');
    return 0;
}