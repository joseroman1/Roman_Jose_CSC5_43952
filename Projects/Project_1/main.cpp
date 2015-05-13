/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 4, 2015, 10:33 AM
 *      Purpose: Project 1: Hangman Game
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries


//Global Constants
const char  *WORD;
enum FNDTYPE{NFOUND, FOUND, ARDFOUND};// Compare Results

//Function Prototypes
void rules();//rules of the games
void rGame(char fBlank[],int,char,int,int);

//Execution Begins Here!
int main (int argc, char** argv){
    //Initialize the random seed
    srand (time(NULL));
    
    //Declare Variables
    char pGuess;//Player Guess
    int score   =0;//Player Score
    int strikes =0;//Guessed Wrong
    int hints   =0;//Hints at the player
    
    const int MLNIF =200; //Max lines in file
    string wArray[MLNIF];
    int wCount =0;//Word Count
    ifstream fin("HangmanWords.txt");//File name for the hangman words
    if (fin.is_open())
    {
        while(!fin.eof()&& wCount < MLNIF){
            getline(fin, wArray[wCount]);
            wCount++;
        }
    }
    else
        cout<<"File was not opened"<<endl;//Input this if file is not found
    int index = rand ()%wCount;
    WORD= wArray[index].c_str();
    int wLen= strlen(WORD);
    return 0;
}


//Rules of the game
void rules(){
    cout<<"Welcome to the Hangman Game..."<<endl;
    cout<<"To win the game you need to guess the random word."<<endl;
    cout<<"Rules:"<<endl;
    cout<<"Rule 1. You will only have seven chances to guess the random word"<<endl;
    cout<<"Rule 2. If you guess the correct word before the seven chances you"<<endl;
    cout<<"         you will earn 10 points"<<endl;
    cout<<"Rule 3. I can give you only one hint but I will do deduct five points."<<endl;
    
}
void rGame(){
    
}