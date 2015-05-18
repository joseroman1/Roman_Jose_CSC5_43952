/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 18, 2015, 9:40 AM
 *      Purpose: Advice on Writing
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
int main(int argc, char** argv) {
    string advice;
    ifstream fin;
    ofstream fout;
    
    //Connect to the file
    fin.open("advice.txt");
    
    //Checks whether the file exits or not
    if(fin.fail())
    {
        //if file doesn't exist then create a new file with the given name
        fout.open("advice.txt");
    }
    //Display this advice when is creates the new file
    cout<<"Early to bed and early to rise"<<endl;
    //Ask user to write any advice and saves it in the file
    cout<<"Enter the advice by the user"<<endl;
    //Stores user entered advice until the user press the return key two times
    do{
        getline(cin,advice);
        fout<<advice;
        fout<<endl;
    }while(advice!="\0");
    //Close the file
    fout.close();
    
     char next;
    //ifstream open a file to input from the file
    fin.get(next);
    //Input each character from the file and input it to the display
    while(!fin.eof()){
        cout<<next;
        fin.get(next);
   }
    //Open the file given by user for output to the file
    fout.open("advice.txt");
    //Ask user to input a new advice and delete previous advice and stores the new advice
    cout<<"Enter the advice by the user"<<endl;
    //Stores the user new entered advices until the user press two times the return key
    do{
        getline(cin,advice);
        fout<<advice;
        fout<<endl;
    }while(advice!="\0");
    //closing a file disconnect the stream from the file
    fin.close();
    fout.close();
    return 0;
}

