/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on June 3, 2015, 8:36 AM
 *      Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "Table.h"
//Global Constants

//Function Prototypes
Table * **filAray(int,int);
void printArray(Table *);
void destroy(Table *);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Create the array
    int rows=13,cols=13;
    int **array=filAray(13,13);\
//Print the array
    printArray(array,rows,cols);
    //Deallocate the array
    destroy(rows,cols);

    return 0;
}
void destroy(int**a,int r){
    //Loop and destroy the columns
    for(int i=0;i<r;i++){
        delete [] a[i];
    }
    //Destroy the rows
    delete []a;
}
void printArray(const Table *a){
    //Print the headings
    cout<<"This is your multiplication table"<<endl;
    cout<<setw(8)<<0;
    for(int i=1;i<c;i++){
         cout<<setw(4)<<a[0][i];
        
    
}
    cout<<endl;
    //Print the array
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j];
            cout<<setw(4)<<a[i][j];
}
        cout<<endl;
    }
}
Table *filAray(int row,int col){
    //Allocate the table
    Table *table=new Table;
    table->cols=col;
    table->rows=row;
    //Create the number of rows
    table->data=new int*[table->rows];
    //Loop and create the columns
    for(int i=0;table<rows;i++){
        table->data[i]=new int[col];
    }
    //Fill the array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            array[i][j]=i*j;
        }
    }
    //Return the array
    return array;
}

