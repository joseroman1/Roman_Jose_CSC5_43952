/* 
 * File:   main.cpp
 * Author: JR
 * Created on May 25, 2015, 9:25 PM
 *      Purpose: Project 2
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
const char *WORD;
enum FNDTYPE {NFOUND, FOUND, ARDFOUND};// Compare Results

//Function Prototypes
void display();//rules of the games
void rGame(char fBlank[],int,char,int,int,int);
void display(char fBlank[], int);// Fill in the blanks
FNDTYPE fLetter(char,char fBlank[]);//Blanks to be filled
bool bonus(int);//Finish the word in seven chances
void display(bool,int,int);
void oFile(string,int,int);// Output the result in a file

//Execution Begins Here!
int main (int argc, char** argv){
    //Initialize the random seed
    srand (time(NULL));
    
    //Declare Variables
    char pGuess;//Player Guess
    int score   =0;//Player Score
    int strikes =0;//Guessed Wrong
    int hints   =0;//Hints at the player
    
    const int MLNIF = 300; //Max lines in file
    string wArray[MLNIF];
    int wCount = 0;//Word Count
    ifstream fin("HangmanWords.txt");//File name for the hangman words
    if (fin.is_open()){
        
        while(!fin.eof() && wCount < MLNIF){
            getline(fin, wArray[wCount]);
            wCount++;
        }
    }
    else
        cout<<"File was not opened"<<endl;//Input this if file is not found
    //Random Word from file
    int index = rand() % wCount;
    WORD = wArray[index].c_str();
    int wLen = strlen(WORD);
    
    //Input player guesses in a string
    string space;
    for (int i = 0;i < wLen; i++)
        space += "_";
    const char *blanks = space.c_str();//Empty string
    char fBlank[wLen];
    strcpy(fBlank,blanks);
    rGame(fBlank,wLen,pGuess,hints,strikes,score);
    
    return 0;
}


//Rules of the game
void display(){
    cout<<"Welcome to the Hangman Game..."<<endl;
    cout<<"To win the game you need to guess a random word."<<endl;
    cout<<"Rules:"<<endl;
    cout<<"Rule 1. You will only have seven chances to guess the random word"<<endl;
    cout<<"Rule 2. If you guess the correct word before the seven chances you"<<endl;
    cout<<"         you will earn 10 points"<<endl;
    cout<<"Rule 3. You are allowed for only one hint but I will deduct five points."<<endl;
    cout<<"Rule 4. For each correct letter from the random word you earn five points."<<endl;
    cout<<"Rule 5. For each incorrect letter from the random word I will deduct you 1 point."<<endl;
    cout<<"Rule 6. Good Luck!! May the odd be in your favor.."<<endl;
    cout<<endl;
    
}


void rGame(char fBlank[],int size,char pGuess, int hints,int strikes,int score){
    //Input the rules of the games
    display();
    //Display how many letters in a word
    display(fBlank, size);
    
    bool cWord = false;//
    while (cWord == false){
      
        cout<<"Your Guess? ";
        cin>>pGuess;
    
         
   
        
        if(pGuess == '?'){
            if(hints == 0){
                int vowels=0;
                for(int i=0;i<size;i++){
                    switch(WORD[i]){
                        case 'a':{vowels++;break;}// vowels++ means vowels=vowels+1;
                        case 'i':{vowels++;break;}
                        case 'u':{vowels++;break;}
                        case 'e':{vowels++;break;}
                        case 'o':{vowels++;break;}
                        default:break;
                    };
                }
                cout<< vowels <<" vowel(s) is this word."<<endl;
                cout<< "-5 points"<<endl;
                score -=5;
            }
            else 
                cout<<"No more hints are available."<<endl;
            hints++;
        }
        else{
            FNDTYPE result= fLetter(pGuess, fBlank);
            if(result == NFOUND){
                cout<<"Incorrect! -1 point."<<endl;
                score--;
                strikes++;
            }
            else{
                if(result == FOUND){
                    cout<<"Correct! +5 points.";
                    score += 5;
                }
                else
                    cout<<"Letter was already found.";
            }
            cout<<endl<<endl;
                
                        
        //Where the word was filled
        display(fBlank, size);
        
        string uWord = fBlank;
        string coWord = WORD;
        if(uWord == coWord)
            cWord = true;
        else//
        {
            if(strikes == 7)
                break;
        }
    }        
    
}
//Display results to user
display(cWord, strikes, score);
}


//
void display(char fBlank[],int size){
    //Display the blanks
    for(int i=0;i<size;i++)
        cout<< " " <<fBlank[i];
    cout<<endl;
}
//Letter given by the user
FNDTYPE fLetter(char pGuess,char fBlank[]){
    char *cPter = strchr(fBlank, pGuess);// Pointers
    if(cPter != NULL)
        return ARDFOUND;
    
    cPter=strchr(WORD,pGuess);
    if(cPter == NULL)
        return NFOUND;
    
    while(cPter != NULL){
        int iFound= cPter - WORD;
        fBlank[iFound]= pGuess;
        cPter = strchr( cPter + 1,pGuess);
    }
    return FOUND;
        
    }
//If the player completed the word in seven chances
bool bonus(int strikes){
    if(strikes < 7)
        return true;
    else
        return false;
}
//Display results and Output Results
void display(bool cWord,int strikes, int score){
    cout<<endl;
    if(cWord == false){
        cout<< "You Lose!";
        cout<< " The word was "<<WORD;
        oFile("Lost", strikes, score);
    }
    else
    {
        if(bonus(strikes)){
            cout<< "Congratulation! You completed the word before 7 strikes! "<<endl;
            cout<< "+10 points!";
            score+=10;
       
    }
    else
    cout<< "You have completed the game! Congratulations!";
oFile("Won",strikes,score);
}
}

void oFile(string results,int strikes,int score){
    ofstream out;
    out.open("game.txt");
    out<<"You "<<results<<" the game!"<<endl;
    out<<"The word was " <<WORD      <<endl;
    out << "You used up "   << strikes       << " strikes" << endl;
    out<< "Your score = "  << score         << endl;
    out.close();
    // Tell User their result was outputted to a file
    cout << endl;
    cout << "Your score was printed to a file";
    cout << "...Go check out your score!" << endl;
    
}