/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 20, 2015, 12:43 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void delRep(char [], int);
bool findCha(char,char [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    char a[81]=
    "mary had a little lam.its fleece was white as snow";
    int size=53;
    cout<<"Before : SIZE="<<size<<endl;
    for (int i=0;i<size;i++){
        cout<<a[i];
    }
    cout<<endl;
    //Function Call
    delRep(a,size);
    cout<<" After :size="<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
bool findCha(char target,char a[],int size){
    for(int i=0;i<size;i++){
        if(a[i]==target)
            return true;
    }
    return false;
}
void delRep(char a[],int posiuse){
    int nSize=0;
    for(int i=0;i<posiuse;i++){
        if(!findCha(a[i],a,nSize)){
            a[nSize]=a[i];
            nSize++;
        }
    }
    posiuse=nSize;
}