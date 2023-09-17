#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int guessingNumber,randomNumber;

    while(1){

        cout<<"Guess A Number : ";
        cin>>guessingNumber;
        randomNumber=(rand()%5)+1;

        if(guessingNumber==randomNumber){
            cout<<"Yeah! Your guess is right.Thank You"<<endl;
        }else{
            cout<<"Oh! Your are wrong. Random Number is "<<randomNumber<<" Try again"<<endl;
        }
    }
}
