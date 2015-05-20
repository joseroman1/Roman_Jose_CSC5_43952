/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 20, 2015, 9:35 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void sBoard(char []);

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
    while (nMoves < 9){
        sBoard(board);
        cout<<"Enter move: "<<endl;
        cin>>move;
        if((move<1) || (move>9))
            cout<<"Invalid move, try again"<<endll
        else{
            move--;
            if ((board[move]=="X") || (board[move]=='O'))
                cout<<"That space is taken. "<<endl;
            else{
                board[move]=wTurn;
                //Switch turn
                if(wTurn == 'X')
                    wTurn= 'O';
                else{
                    wTurn = 'X';
                    nMoves++;
                }
            }
        }
    }
//Display Board
        sBoard(board);
        cout<<endl<<"Game over.."<<endl;
        
    return 0;
}