/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 21, 2015, 1:43 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int cNumber(int [], int);
void printArray(int [],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE = 5;
    int array[SIZE];
    int nof2 = 0;//Number of two
    
    cout<<"Give me "<<SIZE<<" Numbers. Press Return after entering each number"<<endl;
    cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];
    
    //Print array
    printArray (array, SIZE);
    
    //Count the number of two
    nof2 = cNumber(array, SIZE);
    cout<<"The number of 2's in the array is : "<<nof2<<endl;
    
    return 0;
}

void printArray(int a[],int SIZE){
    for(int i=0;i<SIZE;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int cNumber(int a[],int SIZE){
    int counter =0;
    for (int i=0;i<SIZE;i++){
        if(a[i] == 2)
            counter++;
    }
    return counter;
    
}