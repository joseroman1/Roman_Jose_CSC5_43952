/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 18, 2015, 12:31 am
 *    Purpose: Retroactive salary
 * */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float INC = 0.076;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int pSal; //user previous salary
    float pDue, nAnual, nMonth; // retroactive pay due, new Annual salary, new monthly
    string input;
   
    cout<<"Your company has earned a 7.6% retroactive pay increase for the last 6 months!"<<endl;
    cout<<"Please input your annual salary (xxxxxxx): "<<endl;
    cin>>pSal;
    
    //Calculate
    pDue=((pSal*INC)/2);
    nAnual=pSal+(pSal*INC);
    nMonth=nAnual/12;
   
    //Output
    cout<<"The pay increase due for the last 6 months is $"<<pDue<<endl;
    cout<<"Your new annual salary will be $"<<nAnual<<" a year."<<endl;
    cout<<"Which means your monthly salary will be $"<<nMonth<<endl;
    
    
    //Exit Stage Right
    // Ask to repeat
    cout<< "Would you like the repeat calculation: "<<endl;
    cin  >> input;

    if (input == "yes")
        main(argc, argv);
    else if (input == "no")
        return 0;
    else
    {
        cout<< "What was that? yes or no: "<<endl;
        cin  >> input;
    }
    
    return 0;
}