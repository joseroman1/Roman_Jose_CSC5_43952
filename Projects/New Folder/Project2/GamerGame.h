/* 
 * File:   GamerGame.h
 * Author: JR
 *
 * Created on June 5, 2015, 11:48 PM
 */

#ifndef GAMERGAME_H
#define	GAMERGAME_H

#define ROW 6
#define COL 2

struct GamerGame{
    int wLenght;//Word Lengths
    char *fBlanks;//Fill the blanks
    std::string HangmanGame[ROW][COL];
    
    //Initializes Variables
    GamerGame(int w){
        wLenght =w;
        fBlanks = new char[w];
        for (int i=0;i<ROW;i++)//Initialize the hangman string to empty
            for (int j=0;j<COL;j++)
                HangmanGame[i][j] = "";
    }
    
    
};


#endif	/* GAMERGAME_H */

