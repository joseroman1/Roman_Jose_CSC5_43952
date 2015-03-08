      /* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 4, 2015, 9:40 AM
 *       Purpose: Homework Assignment
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    int NmbPods, PeaPrPd, TtlPea;
    NmbPods;//Number of Pods
    PeaPrPd;//Peas Per Pod
    TtlPea;//Total Peas
    cout<< "Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>> NmbPods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>> PeaPrPd;
    TtlPea = NmbPods * PeaPrPd;
    cout<<"If you have ";
    cout<<  NmbPods;
    cout<<" pea pods\n";
    cout<< "and ";
    cout<< PeaPrPd;
    cout<< " peas in each pod, then\n";
    cout<<"you have ";
    cout<<TtlPea;
    cout<< " peas in all the pods.\n";
    //Exit right stage!

    return 0;
}

