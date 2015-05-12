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
    
    const int MLNIF =300; //Max lines in file
    string wordArray[MLNIF];
    int wCount =0;//Word Count
    ifstream fin("HangmanWords.txt");
    if (fin.is_open())
    {
        while(!fin.eof()&& wCount < MLNIF){
            getline(fin, wordArray[wCount]);
            wCount++;
        }
    }
    else
        cout<<"File was not opened"<<endl;
    int index = rand ()%wCount;
    WORD= wordArray[index].c_str();
    int wLen= strlen(WORD);
    return 0;
}