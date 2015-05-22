/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 21, 2015, 12:43 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool fLast(int [],int);
void printArray(int [],int);

int main(int argc, char** argv) {
    int SIZE=5;
    int array[SIZE];
    
    cout<<"Give me "<<SIZE<<" numbers. Press return after entering each number"<<endl;
    cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];
    
    //Print Array
    printArray(array, SIZE);
    //Find digit 2
    fLast(array, SIZE);

    return 0;
}
void printArray(int a[], int SIZE){
    for(int i=0;i<SIZE;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
bool fLast(int a[],int SIZE){
    bool sWith = false;//starts with
    bool eWith = false;//Ends with
    bool hTwo = false;// has two
    
    for(int i=0;i<SIZE;i++){
        if (i == 0){//check if the array starts with two
            if(a[i] == 2)
                sWith =true;
        }
        else if (i == (SIZE-1)){//
            if(a[i] == 2)
                eWith = true;
        }
        else continue;
    }
    if (sWith && eWith){
        cout<<" Array both starts and ends with a digit of 2."<<endl;
        hTwo = true;
    }
    else if (sWith){
        cout<<"Array starts with a digit of 2."<<endl;
       hTwo = true;
    }
    else if (eWith){
        cout<<"Array ends with a digit of 2."<<endl;
        hTwo = true;
    }
    else 
        cout<<"Array does not start or end in a digit of 2";
    return hTwo;
}
