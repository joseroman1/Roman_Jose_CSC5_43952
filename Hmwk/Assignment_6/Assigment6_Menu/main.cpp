/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 22, 2015, 8:17 PM
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Max and Min Numbers
 * Problem 2 -> Tic tac toe
 * Problem 3 -> Random Password
 * Problem 4 -> Standard Deviation
 * Problem 5 -> Sorted Integers
 * Problem 6 -> Add two numbers
 * Problem 7 -> Letters in order
 * Problem 8 -> Starts with 2 and ends with 2
 * Problem 9 -> How many 2 in the array
 * Problem 0 -> Calculator
 * Modified on Apr 24th, 2015
 *      Add repetition with a do-loop
 */
 


//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>
#include <cstring>
using namespace std;

//User Libraries


//Global Constants



//Function Prototypes
void problem1 ();
void problem2 ();
void problem3 ();
void problem4 ();
void problem5 ();
void problem6 ();
void problem7 ();
void problem8 ();
void problem9 ();
void problem0();
//Problem 2 function
void sBoard(char []);
//Problem 3 function
void rNumber(int []);//Random Number
bool isValid(int [],int [],int []);
//Problem 4 function
float calSD(const float [],int);
//Problem 5 function
void swapVal(int &, int &);
void sort(int [],int);
//Problem 6 Function
void input(char [],int);//Prompt the user for number
void chInt(const char [],int,int[]);//Change char array to int array
void reverse(int [],const int);//and two number
void add(int [],const int [],int,const int [],int);
//Problem 7 Function
void delete_repeats(char [],int);
void printArray(char [],int);
//Problem 8 Function
bool fLast(int [],int);
void printArray(int [],int);
//Problem 9
int cNumber(int [], int);
void printArray2(int [],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"  Chapter 5 Homework Assignment Menu."<<endl;
        cout<<"Type 1 to solve Gaddis 8th Ed. Chapter 7 Problem 1"<<endl;
        cout<<"Type 2 to solve Savitch 8th Ed. Chapter 7 Problem 10"<<endl;
        cout<<"Type 3 to solve Savitch 8th Ed. Chapter 7 Problem 19 "<<endl;
        cout<<"Type 4 to solve Savitch 8th Ed. Chapter 7 Problem 4"<<endl;
        cout<<"Type 5 to solve Savitch 8th Ed. Chapter 7 Problem 6"<<endl;
        cout<<"Type 6 to solve Savitch 8th Ed. Chapter 7 Problem 7"<<endl;
        cout<<"Type 7 to solve Savitch 9th Ed. Chapter 7 Problem 3"<<endl;
        cout<<"Type 8 to solve Savitch 9th Ed. Chapter 7 Problem 1"<<endl;
        cout<<"Type 9 to solve Savitch 9th Ed. Chapter 5 Problem 2"<<endl;
        cout<<"Type 0 to solve Savitch 8th Ed. Chapter 5 Problem 6"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case '1':problem1();break;
            case '2':problem2();break;
            case '3':problem3();break;
            case '4':problem4();break;
            case '5':problem5();break;
            case '6':problem6();break;
            case '7':problem7();break;
            case '8':problem8();break;
            case '9':problem9();break;
            case '0':problem0();break;
            default: cout<<"Exit?"<<endl;
        };
    }while(choice>='0'&&choice<='9');
        //Exit right stage
    return 0;
}

//*********** problem 1 **********/
void problem1(){
    //Declare variables
    const int SIZE=10;
    int a[SIZE];
    int min,max;
    //Prompt user
    cout<<"Input 10 random numbers. Press return after entering each number."<<endl;
    cout<<"This program finds the max and min of each numbers entered"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];//User input
    }
    min=a[0];
    max=a[0];
    //Finding the max and minimum of the input
    for(int i=1;i<10;i++){
        if(min>a[i]){
            min=a[i];
        }else if(max<a[i]){
            max=a[i];
        }
    }
    //Output the results
    cout<<"Min "<<min<<endl;
    cout<<"Max "<<max<<endl;
    
        
}

//*********** problem 2 **********/
void problem2(){
 const char SIZE=9;
    char board[SIZE];
    int nMoves = 0;
    char wTurn = 'X';
    int move;
    //Describe the game
    cout<<"This is a tic tac toe game. Press each number to reveal a 'O' or 'X'"<<endl;
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
        
}
void sBoard(char board[]){
    cout<<endl;
    for (int i=0;i<9;i++){
        cout<<board[i]<<" ";
        if (((i+1) % 3) == 0)cout<<endl;
        
    }
    cout<<endl;
}

//*********** problem 3 **********\

void problem3(){
    //Password is 12345
    const int SIZE=5;
    int passCode[SIZE]={1,2,3,4,5};
    cout<<"The PIN is 1,2,3,4,5"<<endl;
    cout<<"Input the pin based on the random Num."<<endl;
    //User Input
    int value;
    //Array to get individual values of the user input
    int Values[]={10000,1000,100,10,1};
    
    //Array to hold randomly generated digit
    int rDigit[10];
    
    //Array to hold the digits entered by the user
    int uDigit[SIZE];
    bool valid = true;
    do{
        cout<<"PIN: 0 1 2 3 4 5 6 7 8 9"<<endl;
        cout<<"Num: ";
        rNumber(rDigit);
        
        //Loop to print random number
        for (int i=0; i<10; i++)
            cout<<rDigit[i]<<" ";
        cout<<endl<<endl;
        
        //Prompt and read the user password
        cout<<"Enter your password: ";
        cin>>value;
        for(int i=0;i<5;i++){
            if(i==0)
                uDigit[i]=value/Values[i];
            else
                uDigit[i]=(value/Values[i]%10);
            
        }
        //Call the method 
        if(isValid(uDigit,rDigit,passCode)){
            valid=false;
            //display the message
            cout<<"LogIn was successful";
        }
        else
            cout<<"LogIn failed. Try Again.";
        cout<<endl;
    }while(valid);
}
void rNumber(int rDigit[]){
    //Seed to generate a random number
    srand(time(NULL));
    //Loop to generate random numbers
    for (int i=0; i < 10; i++)
        rDigit[i] = (int)(rand() % 3) + 1;
}
bool isValid(int uDigit[], int rDigit[],int passCode []){
    bool valid=true;
    //Loop to iterate and compare each digit
    for(int i=0;i<5;i++){
        //Check the digit 
        if(uDigit[i] != rDigit[passCode[i]])
            valid = false;
    }
    return valid;
    }

//************** Problem 4 ***********/
void problem4(){
    //Declare Variable
    const int SIZE=100;// the size of the array
    float array[SIZE];
    int number;//number that the user wants to input
    float sd;//standard deviation
    
    //Prompt the user for input
    cout<<"Input the number of inputs you would"<<endl;
    cout<<"like to calculate standard deviation"<<endl;
    cout<<"Note: An positive integer less than 100"<<endl;
    cin>>number;
    
    //Prompt user for input the element of array
    cout<<"Please fill the array"<<endl;
    for(int i=0;i<number;i++){
        cout<<(i+1)<<": ";
        cin>>array[i];
    }
    sd=calSD(array,number);
    cout<<"The standard deviation of these number is "<<sd<<endl;
  
}
float calSD(const float a[],int n){
        float average = 0;//average
        float sd=0;
        float temp=0;
        for(int i=0;i<n;i++){
            average+=a[i];
        }
        average/=n;//Average
        //Record calculation with temp
        for(int i=0;i<n;i++){
            temp+=(a[i]-average)*(a[i]-average);
        }
        sd=sqrt(temp/n);
        return sd;
    }
   

//******************** Problem 5 ***********/
void problem5 (){
    const int SIZE =10;
    int a[SIZE]={7, 8, 9, 6, 4, 1, 2, 3, 0, 5};
    cout<<"Unsorted integers "<<endl;
    for (int i=0;i<SIZE;i++)
        cout<<a[i]<< " ";
        cout<<endl;
        sort(a, SIZE);
        cout<< "In sorted order the integer are: "<<endl;
        for(int i=0;i<SIZE;i++)
            cout<<a[i]<< " ";
        cout<<endl;
}
void swapVal(int & val1, int& val2){
    int temp;
    temp=val1;
    val1=val2;
    val2=temp;
}
void sort(int *arr,int lenght){
    int i,j;
    for (i=1;i<lenght;i++){
        j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swapVal(arr[j],arr[j-1]);
            j--;
            
        }
    }
}

//******************** Problem 6 ***********/
void problem6(){
    //Declare Variables
    const int SIZE=25;
    char ipchar1[SIZE];//First input from user
    char ipch2[SIZE]={};//2nd Input from user
 int input1[SIZE]={};//First Input from user
 int input2[SIZE]={};//2nd Input from user
 int result [SIZE]={};//the result of the sum
 //Prompt user for 2 numbers and store it into char array
 cout<<"The number has to be less than 20 integers"<<endl;
 input(ipchar1,1);
 input(ipch2,2);
 //store the number to integer array
 chInt(ipchar1,strlen(ipchar1),input1);
 chInt(ipch2,strlen(ipch2),input2);
 cout<<endl;
 //Reverse the array
 reverse(input1,strlen(ipchar1));
 reverse(input2,strlen(ipch2));
 //add two numbers from array and store into another array
 add(result,input1,strlen(ipchar1),input2,strlen(ipch2));
 reverse(result,SIZE);//reverse the result
 //output the result of addition
 if(result[4]!=0) { //when rs[5]!=0, digit of result greater than 20
 cout<<"The result is overflow"<<endl;
 } else { 
 for(int i=0;i<strlen(ipchar1);i++) {
 cout<<ipchar1[i];
 }
 cout<<"+";
 for(int i=0;i<strlen(ipch2);i++) {
 cout<<ipch2[i];
 }
 cout<<"=";
 bool zero=false;
 for(int i=0;i<SIZE;i++) {
 cout<<"";
 if(result[i]!=0) zero=true;
 if(zero) cout<<result[i];
 }
 } 
 //Exit stage right
}
void input(char ip[],int x) {
 bool digit;
 do {
 cout<<"Input number "<<x<<": ";
 cin>>ip;
 digit=true;
 for(int i=0;i<strlen(ip);i++) {
 if(!isdigit(ip[i])) digit=false;
 }
 if(!digit||strlen(ip)>20)
 cout<<"Please input the number less than 20-digit"<<endl;
 }while(!digit||strlen(ip)>20);
}
//change char array to int array
void chInt(const char ch[],int SIZE,int a[]) {
 for(int i=0;i<SIZE;i++) {
 a[i]=static_cast<int>(ch[i]-48);
 }
}

void reverse(int ip[],const int n) {
 int rv[n];//declare a temp array
 //assign the inverted original array to temp array
 for(int i=1;i<=n;i++) {
 rv[i-1]=ip[n-i];
 }
 //assign the temp array to original array
 for(int i=0;i<n;i++) {
 ip[i]=rv[i];
 }
}
void add(int rs[],const int input1[],int n1,const int input2[],int n2) {
 int n=(n1>=n2?n1:n2);
 //add digit by digit,when one digit over 9,this digit minus 10,next digit+1
 for(int i=0;i<n;i++) {
 rs[i]= rs[i] + input1 [i] + input2[i];
 if(rs[i]>=10) {
 rs[i]-=10;
 rs[i+1]+=1;
 }
 }
}

//******************** Problem 7*************/
void problem7(){
     char SIZE=10;
    char array[SIZE];
    array[0] = 'a';  
    array[1] = 'b';
    array[2] = 'a';
    array[3] = 'c';
    int sizes = 4;
    cout<<"Before removing: ";
    printArray(array,sizes);
    delete_repeats(array,sizes);
    cout<<"After removing: ";
    printArray(array,sizes);
}
void printArray(char a[],int sizes){
    for(int i=0;i<sizes;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void delete_repeats(char a[],int sizes){
//Go through and find the repeated characters
for(int i=0;i<sizes;i++){
    for(int j=i+1;j<sizes;j++){
        //.if the character is repeated
        if(a[i] == a[j])
            a[j]= 0;
        else 
            continue;
    }
}
 //Go throught and find the deleted character
for(int i = 0;i<sizes;i++){
    //empty space move it forward
    if(a[i] == 0){
        a[i] = a[i+1];
        a[i+1] = 0;
    }
    else
        continue;
}
}
   

//******************** Problem 8*************/
void problem8(){
    //Declare Variables
    int SIZE=5;
    int array[SIZE];
    
    cout<<"Give me "<<SIZE<<" numbers. Press return after entering each number"<<endl;
    cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];
    
    //Print Array
    printArray(array, SIZE);
    //Find digit 2
    fLast(array, SIZE);
}
void printArray(int a[], int SIZE){
    for(int i=0;i<SIZE;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
bool fLast(int a[],int SIZE){
    bool sWith = false;//starts with
    bool eWith = false;//Ends with
    bool hTwo = false;// has two
    
    for(int i=0;i<SIZE;i++){
        if (i == 0){//check if the array starts with two
            if(a[i] == 2)
                sWith =true;
        }
        else if (i == (SIZE-1)){//
            if(a[i] == 2)
                eWith = true;
        }
        else continue;
    }
    if (sWith && eWith){
        cout<<" Array both starts and ends with a digit of 2."<<endl;
        hTwo = true;
    }
    else if (sWith){
        cout<<"Array starts with a digit of 2."<<endl;
       hTwo = true;
    }
    else if (eWith){
        cout<<"Array ends with a digit of 2."<<endl;
        hTwo = true;
    }
    else 
        cout<<"Array does not start or end in a digit of 2";
    return hTwo;
}


//******************** Problem 9*************/
void problem9(){
     //Declare Variables
    int SIZE = 5;
    int array[SIZE];
    int nof2 = 0;//Number of two
    
    cout<<"Give me "<<SIZE<<" Numbers. Press Return after entering each number"<<endl;
    cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];
    
    //Print array
    printArray2 (array, SIZE);
    
    //Count the number of two
    nof2 = cNumber(array, SIZE);
    cout<<"The number of 2's in the array is : "<<nof2<<endl;
   
}

void printArray2(int a[],int SIZE){
    for(int i=0;i<SIZE;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int cNumber(int a[],int SIZE){
    int counter =0;
    for (int i=0;i<SIZE;i++){
        if(a[i] == 2)
            counter++;
    }
    return counter;
    
}

//******************** Problem 0*************/
void problem0(){
    string name[5]; 
     int sale[5]; 
     int i,hSel=0,hName,lSel=0,lName; 
     name[0] = "Mild"; 
     name[1] = "Medium"; 
     name[2] = "Sweet"; 
     name[3] = "Hot"; 
     name[4] = "Zesty"; 
     int total=0; 
     for(i=0;i<=4;i++){ 
    cout<<"Enter number of sold "<<name[i]<<" jars: "; 
cin>>sale[i]; 
total = total + sale[i]; 
    if(i==0){
        hSel=sale[i];
        hName=i;lSel=sale[i];
        lName = i;
         }if(hSel<sale[i]){
             hSel=sale[i];
             hName=i;
             }if(lSel>sale[i]){
                 lSel=sale[i];
                 lName=i; } 
}
cout<<"There were sold:  "<<endl; 
for(i=0;i<=4;i++){ 
cout<<sale[i]<<" "<<name[i]<<" jars"<<""<<endl; 
} 
cout<<"Total sales: "<<total<<" jars"<<endl; 
cout<<"Highest sales: "<<hSel<<" ("<<name[hName]<<" salsa)"<<endl; 
cout<<"Lowest sales: "<<lSel<<" ("<<name[lName]<<" salsa)"<<endl;
          
}