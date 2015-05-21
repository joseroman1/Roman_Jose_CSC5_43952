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
    const char SIZE=9;
    char board[SIZE];
    int nMoves = 0;
    char wTurn = 'X';
    int move;
    for (int i=0;i<9;i++){
        board[i]= '1' + i;
    }
    while (nMoves < 9){
        sBoard(board);
        cout<<"Enter move: "<<endl;
        cin>>move;
        if((move < 1) || (move > 9))
            cout<<"Invalid move, try again"<<endl;
        else{
            move--;
            if ((board[move]=='X') || (board[move]=='O'))
                cout<<"That space is taken. "<<endl;
            else{
                board[move]= wTurn;
                //Switch turn
                if(wTurn == 'X')
                    wTurn = 'O';
                else
                    wTurn = 'X';
                    nMoves++;
                
            }
        }
    }
//Display Board
        sBoard(board);
        cout<<endl<<"Game over.."<<endl;
        
    return 0;
}
void sBoard(char board[]){
    cout<<endl;
    for (int i=0;i<9;i++){
        cout<<board[i]<<" ";
        if (((i+1) % 3) == 0)cout<<endl;
        
    }
    cout<<endl;
}