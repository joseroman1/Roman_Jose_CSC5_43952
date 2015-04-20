/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 20, 2015, 8:13 AM
 *      Purpose: Function many types
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float sum1=0,sum2=0,exSum1,exSum2;
    float val1=0.1f,val2=0.75f;
    int nxSum=1e7;
    //Calculate the sum
    for(int i=1;i<=nxSum;i++){
        sum1+=val1;
        sum2+=val2;
    }
    //exact sums are 
    exSum1=nxSum*val1;
    exSum2=nxSum*val2;
    //Compare the results
    cout<<"Exact Sum 1 = "<<exSum1<<endl;
    cout<<"Summed Sum1  = "<<sum1<<endl;
    cout<<"Percentage Error = "<<(exSum1-sum1)/exSum1*10<<endl;
    cout<<"Exact Sum 2 = "<<exSum2<<endl;
    cout<<"Summed Sum 2  = "<<sum2<<endl;
    cout<<"Percentage Error = "<<(exSum2-sum2)/exSum2*10<<endl;
    
    return 0;
}