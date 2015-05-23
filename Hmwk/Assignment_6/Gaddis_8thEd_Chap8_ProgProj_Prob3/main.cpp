/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 22, 2015, 4:45 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) { 
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
return 0;
}