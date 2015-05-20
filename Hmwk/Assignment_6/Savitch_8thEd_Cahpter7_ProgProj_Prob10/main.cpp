/* 
 * File:   main.cpp
 * Author: rcc
 * Created on May 20, 2015, 9:35 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void board(char []);

//Execution Begins Here!
int main(int argc, char** argv) {
    char SIZE=9;
    int board[SIZE];
    int i;
    int nMoves=0;
    char wTurn;
    int move;
    for (i=0;i<9;i++){
        board[i]= 'i' + i;
    }
    

    return 0;
}

