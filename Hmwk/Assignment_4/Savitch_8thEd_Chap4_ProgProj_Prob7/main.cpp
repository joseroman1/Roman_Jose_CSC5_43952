/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 8, 2015, 12:20 AM
 *      Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2

//Function Prototype
// F            m1    m2    d
float atrForc(float,float,float);
//Execution Begins here!
int main(int argc, char** argv) {
    char choice;
    do{
    //Declare Variable 
    float mass1, mass2, d;
    
    //Prompt for inputs
    cout<<"Enter the mass of body 1 (grams)"<<endl;
    cin>>mass1;
    cout<<"Enter the mass of body 2 (grams)"<<endl;
    cin>>mass2;
    cout<<"Enter the distance between mass 1 and mass 2 (cm):"<<endl;
    cin>>d;
    float force=atrForc(mass1,mass2,d);
    cout<<"The attractive force (dynes) is: "<<force<<endl;
    cout<<"Would you like to repeat this program?"<<endl;
    cout<<"Type Y for yes or N for no:"<<endl;
    cin>>choice;
    //Output 
    }while(choice=='y'||choice=='Y');
    return 0;
}
           

float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}
