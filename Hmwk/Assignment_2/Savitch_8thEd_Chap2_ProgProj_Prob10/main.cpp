/* 
 * File:   main.cpp
 * Author: JR
 *Created on March 18, 2015, 1:20 AM
 *      Purpose: Sum of all numbers 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
//Declare variable
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, sumAll=0, posiSum=0, negeSum=0;
    
    cout<<"Enter ten whole numbers separated by spaces.";
    cout<<" They can be negative or positive."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
    
    if (num1>0)
    { posiSum = posiSum + num1;}
    else
    {  negeSum = negeSum + num1;}
    
    if (num2>0)
    { posiSum = posiSum + num2;}
    else
    {negeSum = negeSum + num2;}
    
    if (num3>0)
    { posiSum = posiSum + num3;}
    else
    {negeSum = negeSum + num3;}
    
    if (num4>0)
    { posiSum = posiSum + num4;}
    else
    { negeSum = negeSum + num4;}
    
    if (num5>0)
    { posiSum = posiSum + num5;}
    else
    {  negeSum = negeSum + num5;}
    
    if (num6>0)
    { posiSum = posiSum + num6;}
    else
    { negeSum = negeSum + num6;}
    
    if (num7>0)
    {  posiSum = posiSum + num7;}
    else
    { negeSum = negeSum + num7;}
    
    if (num8>0)
    { posiSum = posiSum + num8;}
    else
    {negeSum = negeSum + num8;}
    
    if (num9>0)
    { posiSum = posiSum + num9;}
    else
    {negeSum = negeSum + num9;}
    
    if (num10>0)
    {posiSum = posiSum + num10;}
    else
    {negeSum = negeSum + num10;}
    
    sumAll = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
    
    cout<<sumAll<<" is the sum of all the numbers entered."<<endl;
    cout<<posiSum<<" is the sum of all the positive numbers entered."<<endl;
    cout<<negeSum<<" is the sum of all the negative numbers entered."<<endl;
    return 0;
}