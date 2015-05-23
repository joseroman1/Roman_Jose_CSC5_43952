/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 22, 2015, 1:34 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants 


//Function Prototype

//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=10;
    int a[SIZE];
    int min,max;
    //Prompt user
    cout<<"Input 10 random numbers. Press return after entering each number."<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];//User input
    }
    min=a[0];
    max=a[0];
    //Finding the max and minimum of the input
    for(int i=1;i<10;i++){
        if(min>a[i]){
            min=a[i];
        }else if(max<a[i]){
            max=a[i];
        }
    }
    //Output the results
    cout<<"Min "<<min<<endl;
    cout<<"Max "<<max<<endl;
    return 0;
}