/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 29, 2015, 5:46 PM
 *      Purpose: Celsius and Fahrenheit 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
//find the point at which celsius and fahrenheit are the same
                int celsius=100;
                int fahrenheit;
                do{
                    fahrenheit=(9*celsius)/5+32;
                    celsius--;        
                }while(celsius!=(fahrenheit-1));
                cout<<"Celsius = Fahrenheit at the temperature "<<fahrenheit<<" degrees.";
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                
    return 0;
}

