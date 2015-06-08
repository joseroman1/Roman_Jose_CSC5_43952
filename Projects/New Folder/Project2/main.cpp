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
#include <string>
#include <fstream> //Read and write files
#include <vector>
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
void sBlanks(char [],int);//How many blanks does the user has to fill
void iGamer(Gamer *);//Initialize player
void rGame(GamerGame *,Gamer *);//Run the game
void display();//Display the rules of the games to the player
void display(char [],int);//Display's an array
void display(Gamer *,bool);// Output if the player won or lost
void iHangman(string [][COL]);//Initialize the hangman drawing 
void dHangman(GamerGame *,Gamer *);//The system draws a Hangman Stick
void Hint(Gamer *, int);// Hint for the gamer
int search(char [],char,int);
FNDTYPE fLetter(char [],char);//Search for the letter given for the user
void fLetter(GamerGame *,Gamer *,char);//
void pSort(Gamer *);//Sort the player results
int gValue(vector<int>&,int);//Get index of largest value..selection short
void swap(vector<int> &, int, int);    
void swap(vector<string> &, int, int);  
void oFile(Gamer *, ofstream &);// Output the result in a file
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
    
    bool gRepeat = true;//Repeat the game
    gamer = new Gamer;//Initialize the database
    while (gRepeat){
        iGamer(gamer);
        ranFile(wLength);
        game = new GamerGame(wLength);//Initialize the game
        sBlanks(game->fBlanks, game->wLenght);
        rGame(game, gamer);
        
        //Put the score in a vector
        gamer->aScores.push_back(gamer->score);
        gamer->aWords.push_back(WORD);
        gamer->aResults.push_back(gamer->cResult);
        
        if( !repeatG() )
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

void ranFile(int &wLength){
    const int MLNIF = 300; //Max lines in file
    string wArray[MLNIF];  //Array of words from file
    int wCount = 0;// the number words
    ifstream fin("HangmanWords.txt");//File name for the hangman words
                                     //The system will choose a random word
                                     //from the file
   
    //The system checks if the file opens or not
    if (fin.is_open()){
        while(!fin.eof() && wCount < MLNIF){
            getline(fin, wArray[wCount]);//Read a complete line from the array
            wCount++;
        }
    }
    //If the file is not found
    else
        cout<<"File was not opened"<<endl;//Input this if file is not found
    
    //Random Word from file
    int index = rand() % wCount;
    strcpy(WORD, wArray[index].c_str());//Set the rand word from the file
    wLength = strlen(WORD); //The length  of the chosen word
    
}
  //**********************************************************
    
    //Put the lines from the chosen words
    
   //**********************************************************
   
    void sBlanks(char fBlanks[],int wLength){
    //Input player guesses in a string
    string space;  
    for (int i = 0; i < wLength; i++)
        space += "_";
    
    const char *blanks = space.c_str();//Make an Empty string
    strcpy(fBlanks,blanks);
}
 
//*******************************************************************

// Initialize all the variables in the Gamer structure

//*****************************************************************

void iGamer(Gamer *gamer){ 
     gamer->score = 0; 
     gamer->chances = 0; 
     gamer->hints  = 0; 
     gamer->cResult = ""; 
 } 

//**********************************************************

//Run the Game

//**********************************************************

void rGame(GamerGame *game, Gamer *gamer){
    //Declare Variables
    char pGuess;// The player guess
    
    iHangman(game->HangmanGame);
    display(game->fBlanks,game->wLenght);
    
  
    bool pWord = false;//True if the gamer completes the word
    do{
        //Prompt the user for input
        cout<<"Your Guess? ";
        cin>>pGuess;
        //If the gamer asked for a hint
        if (pGuess == '?')
            Hint(gamer,game->wLenght);
        else if(pGuess == '#')//End the game when the gamer types '#"
            break;
        else
            fLetter(game,gamer,pGuess);
        
        //Check if the blanks are filled and matches the random word
        string uWord = game->fBlanks;//Player's word
        string rWord =WORD;//Random word
        
        if(uWord == rWord) //If blanks matched the random
            pWord = true;
        else//blanks were not filled
        {
            if(gamer->chances == 6)//Check if the user used the chances
                break;
        }
        display(game->fBlanks,game->wLenght);//Display the Blanks
    }
    while(pWord == false);
    
    display(gamer,pWord);// Display results to the gamer
}

//************************************************************
  
// The Rules of the Game
    
//**************************************** ********************   
  
void display(){
    cout<<"Welcome to the Hangman Game..."<<endl;
    cout<<"To win the game you need to guess a random word."<<endl;
    cout<<"Rules:"<<endl;
    cout<<"Rule 1. You will only have six chances to guess the random word"<<endl;
    cout<<"Rule 2. You are allowed for only one hint but I will deduct five points."<<endl;
    cout<<"        Press '?' for the hint and press return."<<endl;
    cout<<"Rule 3. For each correct letter from the random word you earn five points."<<endl;
    cout<<"Rule 4. For each incorrect letter from the random word I will deduct you 1 point."<<endl;
    cout<<"Rule 5. To end the game type '#' and press return."<<endl;
    cout<<"Good Luck!! May the odd be in your favor.."<<endl;
    cout<<endl;
    
}

//****************************************************

//Display the fill in the blanks

//***************************************************

void display(char fBlanks[], int wLength){
    // Display the blanks
    cout << endl;
    for(int i = 0; i < wLength; i++)
        cout<< " " << fBlanks[i];
    cout<<endl;
}

//***********************************************************

//The results of the user when the game ended.

//**********************************************************
void display(Gamer *gamer,bool pWord){
    cout << endl;
    // Set Score and Output results
    if (pWord == false) // Word wasn't completed
    {
        cout << "You Lose! The word was " << WORD;
        gamer->cResult = "Lost";
    }
    else // Word was completed
    {
        cout << "You have completed the game! Congratulations!";
        gamer->cResult = "Won";
    }
    cout << endl;
    cout << "Current Score:  " << gamer->score;
}

//**************************************************************

//Initialize the hangman drawing

//**************************************************************

void iHangman(string HangmanGame[][COL])
{
    HangmanGame[0][0] = "  _____"; HangmanGame[0][1] = "_____";
    HangmanGame[1][0] = "  |    "; HangmanGame[1][1] = "    |";
    HangmanGame[2][0] = "  |    "; HangmanGame[2][1] = "   ";
    HangmanGame[3][0] = "  |    "; HangmanGame[3][1] = "   ";
    HangmanGame[4][0] = "  |    "; HangmanGame[4][1] = "   ";
    HangmanGame[5][0] = "__|____"; HangmanGame[5][1] = "________";
}

//*********************************************************************

//Output the parts of the hangman as the player's guess is wrong

//******************************************************************

void dHangman(GamerGame *game, Gamer *gamer)
{
    string head     = "( )";
    string leftArm  = "/";
    string body     = "|";
    string rightArm = "\\";
    string leftLeg  = "/";
    string rightLeg = " \\";
    bool cDrawing = false;//Completed drawing
    
    switch (gamer->chances){
        case 0:  break;
        case 1:  { game->HangmanGame[2][1] += head;     break; };
        case 2:  { game->HangmanGame[3][1] += leftArm;  break; };
        case 3:  { game->HangmanGame[3][1] += body;     break; };
        case 4:  { game->HangmanGame[3][1] += rightArm; break; };
        case 5:  { game->HangmanGame[4][1] += leftLeg;  break; };
        case 6:  { game->HangmanGame[4][1] += rightLeg; break; };
        default: { cDrawing = true; break;         };
    };
    
    // Display Drawing if not complete
    if (cDrawing == false){
        for (int i = 0; i < ROW; i++){
            for (int j = 0; j < COL - 1; j++)
                cout << game->HangmanGame[i][j] 
                     << game->HangmanGame[i][j+1]<<endl;
        }
    }
}

//*****************************************************************

//Hint to the player

//****************************************************************

void Hint(Gamer *gamer,int wLength){
    //If gamer asks for a hint
    if(gamer->hints == 0){
       int vowels=0;//Number of vowels in the random word
       //Count many vowels does the random word has
       for(int i=0;i<wLength;i++){
            switch(WORD[i]){
            case 'a':{vowels++;break;}// vowels++ means vowels=vowels+1;
            case 'i':{vowels++;break;}
            case 'u':{vowels++;break;}
            case 'e':{vowels++;break;}
            case 'o':{vowels++;break;}
            default:break;
                    };
                }
       gamer->score -=5; 
       cout<< vowels <<" vowel(s) is this word."<<endl;
       cout<<"Current Score: "  <<gamer->score;
       }
       else 
           cout<<"No more hints."<<endl;
        gamer->hints++;
        }


//*************************************************************

//Linear Search for target in a character array

//*************************************************************)
int search(char a[], char target, int index = 0)
{
    int size = strlen(a);
    for (int i = index; i < size; i++)
    {
        if (target == a[i])
            return i;
    }
    return -1;
}

FNDTYPE fLetter(char fBlanks[], char pGuess){
    // Check first if letter was already found
    int i = search(fBlanks, pGuess);
    if (i != -1) // if not NULL
        return ARDFOUND;

    // Check if letter was not found in fills
    i = search(WORD, pGuess);
    if (i == -1) // if null
        return NFOUND; 

    // Check if letter was found in the WORD
    while (i != -1)
    {
        int indexFound = i;
        fBlanks[indexFound] = pGuess; // fill in the blanks
        i = search(WORD, pGuess, i+1);
    }
    return FOUND;
}



//*********************************************************************

//Increments/Decrements score or chances depending on search results

//*********************************************************************
void fLetter(GamerGame *game,Gamer *gamer,char pGuess){
    //Find the letter guessed by the player in the random word
            FNDTYPE result = fLetter(game->fBlanks, pGuess);
            if(result == NFOUND){
                gamer->score--;
                gamer->chances++;
                //Draw a hangman part when the player's guess is wrong
                dHangman(game,gamer);
            cout<<"Incorrect! -1 point."<<endl;
            cout<<"Current score: "<< gamer->score<<endl;
            
            }
            else{
                if(result == FOUND){
                    gamer->score +=5;
                    cout<<"Correct! +5 points.";
                    cout<<"Current Score: "<< gamer->score<<endl;
                }
                else
                    cout<<"Letter was already found."<<endl;
            }
}


//***********************************************************

//Selection Sorts gamer:scores,words,results

//***********************************************************

void pSort(Gamer  *gamer) 
{     
    int inValue; //Index of large value
    int size = gamer->aScores.size();
    
    for (int index = 0; index < (size-1); index++)
    {
        inValue = gValue(gamer->aScores, index);
        swap(gamer->aScores,  index, inValue);
        swap(gamer->aWords,   index, inValue);
        swap(gamer->aResults, index, inValue);
    }
}

//*****************************************************

//Grabs the index of the largest value in vector

//****************************************************
int gValue(vector<int> &aScores, int index) 
{
    int larger = aScores[index];
    int inValue = index;//Index of the current value

    // Go through the array and compare the next values in the array
    // to the current smaller value.
    for (int nextIndex = index + 1; nextIndex < aScores.size(); nextIndex++)
    {
        // If the value of smaller is greater than that of a[nextIndex]
        // assign smaller to the next index's value and
        // assign the index of the smaller value to be the next index.
        if (larger < aScores[nextIndex])
        {
            larger = aScores[nextIndex];
            inValue = nextIndex;
        }
    }
    return inValue;
}

//**********************************************************

//Swap values in a vector

//**********************************************************

void swap(vector<int> &a, int i, int j) 
{
   // swaps values.
   int temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}

//***************************************************************

//Swaps values in a vector

//******************************************************************

void swap(vector<string> &a, int i, int j) 
{
   // swaps values.
   string temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}

//*********************************************************************

//Write in a file

//********************************************************************
void oFile(Gamer *gamer, ofstream &hangmanfile)
{
    // Output a file when game is complete
    hangmanfile << "Your Results per Game Played: " << endl << endl;
    hangmanfile << setw(15) << left << "Word";
    hangmanfile << setw(10) << left << "Result"; 
    hangmanfile << setw(4)  << "Score" << endl;
    
    for (int i = 0; i < gamer->aScores.size(); i++)
    {
        hangmanfile<< setw(15) << left << gamer->aWords[i];
        hangmanfile << setw(10) << left << gamer->aResults[i]; 
        hangmanfile << setw(4)  << gamer->aScores[i] << endl;
    }
    hangmanfile<< endl;
}

//*********************************************************

//Ask the player if they want to repeat the code

//*********************************************************

bool repeatG()
{
    cout << endl << endl;
    bool valid = false;
    while ( !valid )
    {
        char choice;
        cout << "Play Again(y/n)? ";
        cin  >> choice;  

        switch(choice)
        {
            case 'Y':
            case 'y': { valid = true; return true;  break; }
            case 'N':
            case 'n': { valid = true; return false; break; }
            default:  { break; }
        };
    } 
    return false;
}
