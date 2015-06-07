/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 27, 2015, 8:27 AM
 *  Purpose: Finish the project 1 and make it better -> Hangman
 */


//************************************************************************//

//Create a better game using structures and arrays
//and other things that we have learn in the class.
//This project have to be able to repeat the game when the game ends 
//This project has to display the rules of the games
//This game have to let the player use a hint
//Let the player end the game whenever the player wants to.
//Use c++ websites and YouTube to finish the code

//************************************************************************//

//System Libraries 
#include <iostream> //Read the inputs
#include <iomanip> //Format the Output
#include <string.h>
#include <fstream> //Read and write files
#include <cstdlib> //Rand 
using namespace std;

//User Libraries
#include "GamerGame.h"
#include "Gamer.h"
#define MaxWordLength 50 

//Global Constants
char WORD[MaxWordLength];
enum FNDTYPE {NFOUND, FOUND, ARDFOUND};// Compare Results

//Function Prototypes
void ranFile(int &);// Random word from file
void fBlanks(char [],int);//How many blanks does the user has to fill
void iGamer(Gamer *);//Initialize player
void runGame(GamerGame *,Gamer *);//Run the game
void display();//Display the rules of the games to the player
void display(char [],int);//Display's an array
void display(Gamer *,bool);// Output if the player won or lost
void iHangman(string [][COL]);//Initialize the hangman drawing 
void dHangman(GamerGame *,Gamer *);//The system draws a Hangman Stick
void Hint(Gamer *, int);// Hint for the gamer
void rGame(char fBlank[],int,char,int,int,int);//Run the game
void display(char fBlank[], int);// Fill in the blanks
FNDTYPE fLetter(char,char fBlank[]);//Blanks to be filled
bool bonus(int);//Finish the word in seven chances
void display(bool,int,int);
void oFile(string,int,int);// Output the result in a file
void pSort(Gamer *);//Sort the player results
bool repeatG();//Return whether or not the player wants to run the game again 

//Execution Begins Here!
int main (int argc, char** argv){
    //Initialize the random seed
    srand (time(NULL));
    
    //Declare Variables
    GamerGame *game;
    Gamer     *gamer;//Gamer Database
    int wLength = 0;//The length of the random word
    
   //Create a new file
    ofstream hangmanfile;//Output the results of the game
    hangmanfile.open("game.txt");
    
    //Display the rules
    display();
    
    bool gRepeat;//Repeat the game
    gamer = new Gamer;//Initialize the database
    while (gRepeat){
        iGamer(gamer);
        ranFile(wLength);
        game = new GamerGame(wLength);//Initialize the game
        fBlanks(game->fBlanks, game->wLenght);
        runGame(game, gamer);
        
        //Put the score in a vector
        gamer->aScores.push_back(gamer->cScore);
        gamer->aWords.push_back(WORD);
        gamer->aResults.push_back(gamer->cResult);
        
        if(!repeatG())
            gRepeat = false;
        else
            cout<<endl;
    }
    cout<<endl;
    cout<<"The results were outputed to the game.text file"<<endl;
    pSort(gamer);//Sort the player results
    oFile(gamer, hangmanfile);//output the results to the file
    
    //Close the hangman file
    hangmanfile.close();
}

//************************************************************//

//This gets a random word from the "HangmanWords.text fille

//************************************************************//

void ranFile(int &wLenght){
    const int MLNIF = 300; //Max lines in file
    string wArray[MLNIF];  //Array of words from file
    int wCount = 0;// the number words
    ifstream fin("HangmanWords.txt");//File name for the hangman words
                                     //The system will choose a random word
                                     //from the file
    if (fin.is_open()){
        
        while(!fin.eof() && wCount < MLNIF){
            getline(fin, wArray[wCount]);
            wCount++;
        }
    }
    
    //If the file is not found
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
    cout<<"Good Luck!! May the odd be in your favor.."<<endl;
    cout<<endl;
    
}


void rGame(char fBlank[],int size,char pGuess, int hints,int strikes,int score){
    //Input the rules of the games
    display();
    //Display how many letters in a word
    display(fBlank, size);
    
    bool cWord = false;//
    while (cWord == false){
      //Ask for the user's guess
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