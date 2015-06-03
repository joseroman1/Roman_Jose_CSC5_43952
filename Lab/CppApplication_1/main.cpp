/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 3, 2015, 9:48 AM
 */

#include <iostream>
#include <fstream>
#include <time.h>
#include <iomanip>
#include <cstdlib>



using namespace std;


void drawing(int position);
void guessword(string word);



int main()
{
     int number;
     int count = 0;
     int position;
     string word;
     char letter;
     ifstream infile;
     infile.open("words.txt");
    
     srand(time(NULL));     //initializes the random number generator
     while (count < 1)
     {
   
      number = rand()%10 +1;    // rand returns a random integer from 0 to maxInt
      count++;
     } 
     
   
     for (count=0;count<number;count++)
      getline (infile, word);
      
   
     guessword(word);

  
   
   

    cin.ignore(255,'\n');
    cin.get();
    return 0;
}









void guessword(string word)
{
    char letter;
    int position;
    int i=0;
    
    string blankword[4];
    blankword[0] = "_ ";
    blankword[1] = "_ ";
    blankword[2] = "_ ";
    blankword[3] = "_ ";
    
    
         
     while (i<6)
     {

     cout << "What letter would you like to guess?";
     cin >>letter;
     
     
     position = word.find(letter);
     if (position > word.length())
        {
         cout<<letter<< " is not in the word "<<endl;
         i++;
        }
     else 
     {
        cout<< letter << " is in the word"<<endl;
        if(position==0)
        {
         blankword[0] = letter;
         cout<<blankword[0]<<blankword[1]<<blankword[2]<<blankword[3];
        }
        else if(position==1)
        {
         blankword[1] = letter;
         cout<<blankword[0]<<blankword[1]<<blankword[2]<<blankword[3];
        }
        else if(position==2)
        {
         blankword[2] = letter;
         cout<<blankword[0]<<blankword[1]<<blankword[2]<<blankword[3];
        }
        else if (position==3)
        {
         blankword[3] = letter;
         cout<<blankword[0]<<blankword[1]<<blankword[2]<<blankword[3];
        }
     }
     
     if (blankword[0]!="_ "&&blankword[1]!="_ "&&blankword[2]!="_ "&&blankword[3]!="_ ")
     {
      cout<<"Congratulations, You Win!!";
      break;
     }
                       
           
  } 
  if (i==6)
  cout<<"You Lose :(";
   
}
     


void drawing(int position)
{
     
     switch(position)
     {
     case 1: 
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |         " <<endl;
            cout << "_|______________"<<endl; 
     break;      
     case 2:
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\  " <<endl;
            cout << "_|______________"<<endl;
     break;      
     case 3:       cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 " <<endl;
            cout << "_|______________"<<endl;     
     break;
     case 4:       
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << "_|______________"<<endl;
     break;      
     case 5:
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << " |         |"<<endl;
            cout << "_|______________"<<endl;
     break;       
     case 6:
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << " |         |"<<endl;
            cout << " |        /  "<<endl;
            cout << "_|______________"<<endl;
     break;       
     case 7:  
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << " |         |"<<endl;
            cout << " |        / \\ "<<endl;
            cout << "_|______________"<<endl;
     }    
}     
