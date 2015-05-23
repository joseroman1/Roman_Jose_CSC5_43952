/* 
 * File:   main.cpp
 * Author: JR
 *
 * Created on April 24, 2015, 12:45 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void cToss(int);//Coin Toss

int main(int argc, char** argv) {
    short times;
    srand(time(0));
    cout<<"This program simulates a coin toss."<<endl;
    cout<<"How many times would you like to flip a coin?"<<endl;
    cin>>times;
    cToss(times);
    return 0;
}

void cToss(int times){
    for(int x=1;x<=times;x++){
        short flip=rand()%2+1;
        if(flip==1)
            cout<<"Heads!"<<endl;
        else if(flip==2)
            cout<<"Tails!"<<endl;
    }
}

