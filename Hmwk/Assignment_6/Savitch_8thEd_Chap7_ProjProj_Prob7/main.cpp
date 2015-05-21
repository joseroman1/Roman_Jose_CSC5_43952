/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 20, 2015, 6:53 PM
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes 
void input(char [],int);//Prompt the user for number
void chInt(const char [],int,int[]);//Change char array to int array
void reverse(int [],const int);//and two number
void add(int [],const int [],int,const int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=25;
    char ipchar1[SIZE];//First input from user
    char ipch2[SIZE]={};//2nd Input from user
 int input1[SIZE]={};//First Input from user
 int input2[SIZE]={};//2nd Input from user
 int result [SIZE]={};//the result of the sum
 //Prompt user for 2 numbers and store it into char array
 cout<<"The number has to be less than 20 integers"<<endl;
 input(ipchar1,1);
 input(ipch2,2);
 //store the number to integer array
 chInt(ipchar1,strlen(ipchar1),input1);
 chInt(ipch2,strlen(ipch2),input2);
 cout<<endl;
 //Reverse the array
 reverse(input1,strlen(ipchar1));
 reverse(input2,strlen(ipch2));
 //add two numbers from array and store into another array
 add(result,input1,strlen(ipchar1),input2,strlen(ipch2));
 reverse(result,SIZE);//reverse the result
 //output the result of addition
 if(result[4]!=0) { //when rs[5]!=0, digit of result greater than 20
 cout<<"The result is overflow"<<endl;
 } else { 
 for(int i=0;i<strlen(ipchar1);i++) {
 cout<<ipchar1[i];
 }
 cout<<"+";
 for(int i=0;i<strlen(ipch2);i++) {
 cout<<ipch2[i];
 }
 cout<<"=";
 bool zero=false;
 for(int i=0;i<SIZE;i++) {
 cout<<"";
 if(result[i]!=0) zero=true;
 if(zero) cout<<result[i];
 }
 } 
 //Exit stage right
 return 0;
}
void input(char ip[],int x) {
 bool digit;
 do {
 cout<<"Input number "<<x<<": ";
 cin>>ip;
 digit=true;
 for(int i=0;i<strlen(ip);i++) {
 if(!isdigit(ip[i])) digit=false;
 }
 if(!digit||strlen(ip)>20)
 cout<<"Please input the number less than 20-digit"<<endl;
 }while(!digit||strlen(ip)>20);
}
//change char array to int array
void chInt(const char ch[],int SIZE,int a[]) {
 for(int i=0;i<SIZE;i++) {
 a[i]=static_cast<int>(ch[i]-48);
 }
}

void reverse(int ip[],const int n) {
 int rv[n];//declare a temp array
 //assign the inverted original array to temp array
 for(int i=1;i<=n;i++) {
 rv[i-1]=ip[n-i];
 }
 //assign the temp array to original array
 for(int i=0;i<n;i++) {
 ip[i]=rv[i];
 }
}
void add(int rs[],const int input1[],int n1,const int input2[],int n2) {
 int n=(n1>=n2?n1:n2);
 //add digit by digit,when one digit over 9,this digit minus 10,next digit+1
 for(int i=0;i<n;i++) {
 rs[i]=rs[i]+input1[i]+input2[i];
 if(rs[i]>=10) {
 rs[i]-=10;
 rs[i+1]+=1;
 }
 }
}
