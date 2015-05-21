/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 20, 2015, 12:09 AM
 *      Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void swapVal(int &, int &);
void sort(int [],int);

//Execution begins here!
int main(int argc, char** argv) {
    const int SIZE =10;
    int a[SIZE]={7, 8, 9, 6, 4, 1, 2, 3, 0, 5};
    cout<<"Unsorted integers "<<endl;
    for (int i=0;i<SIZE;i++)
        cout<<a[i]<< " ";
        cout<<endl;
        sort(a, SIZE);
        cout<< "In sorted order the integer are: "<<endl;
        for(int i=0;i<SIZE;i++)
            cout<<a[i]<< " ";
        cout<<endl;
        return 0;
}
void swapVal(int & val1, int& val2){
    int temp;
    temp=val1;
    val1=val2;
    val2=temp;
}
void sort(int *arr,int lenght){
    int i,j;
    for (i=1;i<lenght;i++){
        j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swapVal(arr[j],arr[j-1]);
            j--;
            
        }
    }
}