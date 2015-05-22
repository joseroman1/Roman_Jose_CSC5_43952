/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 21, 2015, 2:13 PM
 */

//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries

//Global Constants

//Function Prototypes
void delete_repeats(char [],int);
void printArray(char [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    char SIZE=10;
    char array[SIZE];
    array[0] = 'a';  
    array[1] = 'b';
    array[2] = 'a';
    array[3] = 'c';
    int sizes =4;
    cout<<"Before removing: ";
    printArray(array,sizes);
    delete_repeats(array,sizes);
    cout<<"After removing: ";
    printArray(array,sizes);

    return 0;
}
void printArray(char a[],int sizes){
    for(int i=0;i<sizes;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void delete_repeats(char a[],int sizes){
//Go through and find the repeated characters
for(int i=0;i<sizes;i++){
    for(int j=i+1;j<sizes;j++){
        //.if the character is repeated
        if(a[i] == a[j])
            a[j]= 0;
        else 
            continue;
    }
}
 //Go throught and find the deleted character
for(int i = 0;i<sizes;i++){
    //empty space move it forward
    if(a[i] == 0){
        a[i] = a[i+1];
        a[i+1] = 0;
    }
    else
        continue;
}
}
    
