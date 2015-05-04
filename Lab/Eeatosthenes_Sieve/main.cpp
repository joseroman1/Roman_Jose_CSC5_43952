/* 
 * File:   main.cpp
 * Author: Jose Roman
 * Created on May 4, 2015, 9:39 AM
 *      Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void sieve (bool [],int);
void prntPrm (bool [],int, int);
void initial (bool [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=1001;
    bool prime[SIZE];
    //Initialize the array
    initial (prime,SIZE);
    //Peform the sieve
    sieve(prime,SIZE);
    //Print the results
 

    return 0;
}
void prntPrm (const bool primes[],int n,int perLine){
    //Print out only the prime numbers
    int nPrimes=0;
    for (int i=0;i<n;i++){
        if(primes[i]){
            nPrimes++;
            cout<<setw(5)<<i;
            if (nPrimes%perLine==(perLine-1))cout<<endl;
        }
        
    }
    cout<<endl<<"Total number of primes"
            "between 0 and 1001"<<n-1<<"="<<nPrimes<<endl;
}

void sieve (bool primes[],int n){
    //Outer loop to process the sieve
    for (int i=2;i<sqrt(n);i++){
        if(primes[i]){
            //Inner Loop of sieve
            for (int j=2*i;j<n;j+=1){
                primes[j]=false;
            }
        }
    }

}
void initial (bool primes [],int n){
    for (int i=0;i<n;i++){
        primes[i]=true;
}
primes[0]=false;
primes[0]=true;
}