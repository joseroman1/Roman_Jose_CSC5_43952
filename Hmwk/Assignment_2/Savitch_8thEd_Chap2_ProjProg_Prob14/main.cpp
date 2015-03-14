/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on March 13, 2015, 2:48 PM
 *     Purpose: Mad Lib Game
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
 //Declare Variables
    char teacher[15], Name[15], number[3], food[15], adj[15], color[10], animal[15]; 
    
    cout<<"This program allows you to play a game of Mad Lib."<<endl;
    cout<<"What is the first or last name of your professor?"<<endl;
    cin>>teacher;
    cout<<"What is your first name?"<<endl;
    cin>>Name;
    cout<<"Name any food."<<endl;
    cin>>food;
    cout<<"Enter a number between 100 and 120."<<endl;
    cin>>number;
    cout<<"Give an adjective."<<endl;
    cin>>adj;
    cout<<"Name a color."<<endl;
    cin>>color;
    cout<<"Finally, name an animal."<<endl;
    cin>>animal;

    //Paragraph where variables will be inserted
cout<< ""<<endl;
cout<<"Dear Instructor "<<teacher<<", "<<endl;
cout<< ""<<endl;
cout<<"I am sorry that I am unable to turn in my homework at this time."<<endl;
cout<<"First, I ate a rotten "<<food;
cout<<", which made me turn "<<color;
cout<<" and extremely ill."<<endl;
cout<<"I came down with a fever of "<<number;
cout<<". Next, my "<<adj;
cout<<" pet "<<animal;
cout<<" must have"<<endl;
cout<<"smelled the remains of the food on my homework, because he ate it."<<endl;
cout<<"I am currently rewriting my homework and hope you will accept it late."<<endl;
cout<< ""<<endl;
cout<<"Sincerely, "<<endl;
cout<<Name<<endl;       
   
    return 0;
}