/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on April 20, 2015, 10:14 PM
 *      Purpose: Area of a triangle
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants

//Function that calculates area of a triange
void area(float a,float b,float c){
    float s = (a+b+c)/2;
    if(a>s||b>s||c>s) cout<<"Invalid Parameters";
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    float perime= (a+b+c);
    cout<<"Area is "<<area<<endl;
    cout<<"Perimeter is "<<perime<<endl;
}
//Execute and test function
int main(int argc, const char * argv[]) {
    float a,b,c;      
    cout<<"This program calculates the area and perimeter of a Triangle"<<endl;
    cout<<"Side 1: "<<endl;
    cin>>a;
    cout<<"Side 2: "<<endl;
    cin>>b;
    cout<<"Side 3: "<<endl;
    cin>>c;
    area(a,b,c);
    

    return 0;
}
