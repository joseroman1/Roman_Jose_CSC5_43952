/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 9, 2015, 1:41 PM
 *      Purpose: Distance Traveled
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    float Speed,hours,dist;
    cout<<"I will calculate the distance you have traveled. "<<endl;
    cout<<"Enter the speed of your vehicle (in Miles per Hours)"<<endl;
    cin>>Speed;
    cout<<"Then input how many hours you have traveled.(Greater than 1 hour)"<<endl;
    cin>>hours;
    dist=Speed*hours;
    if(Speed<0 || hours<=1)
        cout<<"Error. Please enter positive speeds and greater than or equal to 1."<<endl;
    else{
        cout<<"  Hour     Distance Traveled\n ----------------------------"<<endl;
        for(int x=1;x<=hours;x++){
                dist=Speed*x;
                cout<<"    "<<x<<"\t  "<<setw(10)<<right<<dist<<" miles"<<endl;
        }
    }
    return 0;
}
