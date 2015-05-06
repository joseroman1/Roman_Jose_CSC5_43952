/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 6, 2015, 9:01 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void filAray(int [], int);
void prntAry (int [], int,int);
void linSrch(int [], int,int);
void markSrt(int [], int);


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=100;
    int array [SIZE];
    //Fill the array
    
    //Exit right stage!
    return 0;
}
void linSrch(int a[], int n,int val){
    int found=-1;
    for (int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
}
void markSrt(int a[], int n){
    for (int pos=0;pos<n-1;pos++){
        for(int lst=pos;lst<n-1;lst++){
            if(a[pos]>a[lst]);
            int temp=a[pos];
            a[pos]=a[lst];
            a[lst]=temp;
            
            
        }
        
    }
    
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
}
void filAray(int a[], int n){
    for (int i=0;i<n;i++){
        a[i]=rand()%90+10;//2 digit number
        
    }
}