/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 20, 2015, 7:39 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes
float calSD(const float [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable
    const int SIZE=100;// the size of the array
    float array[SIZE];
    int number;//number that the user wants to input
    float sd;//standard deviation
    
    //Prompt the user for input
    cout<<"Input the number of inputs you would"<<endl;
    cout<<"like to calculate standard deviation"<<endl;
    cout<<"Note: An positive integer less than 100"<<endl;
    cin>>number;
    
    //Prompt user for input the element of array
    cout<<"Please fill the array"<<endl;
    for(int i=0;i<number;i++){
        cout<<(i+1)<<": ";
        cin>>array[i];
    }
    sd=calSD(array,number);
    cout<<"The standard deviation of these number is "<<sd<<endl;
    return 0;
}
float calSD(const float a[],int n){
        float average = 0;//average
        float sd=0;
        float temp=0;
        for(int i=0;i<n;i++){
            average+=a[i];
        }
        average/=n;//Average
        //Record calculation with temp
        for(int i=0;i<n;i++){
            temp+=(a[i]-average)*(a[i]-average);
        }
        sd=sqrt(temp/n);
        return sd;
    }
   