/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 24, 2015, 12:58 PM
 */

//System Library
#include <iostream>
using namespace std;

//User Library


//Global Constants

//Function Prototypes
float fallingDistance(float);

int main(int argc, char** argv) {
    float dista, time;
    
    
    //Loop
    for(time=1; time<=10; time++)
    {
    //Calculate the distance
    dista=fallingDistance(time);
    
    //Output the distance
    cout<<"The falling distance of "<<time<<" seconds is "<<dista<<" meters"<<endl;
    }
}
//****************************************************************************************************************************************

float fallingDistance(float time){
    const float G=9.8;
    return 0.5*G*time*time;
    return 0;
}

