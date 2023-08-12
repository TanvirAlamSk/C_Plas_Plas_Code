#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter A interger Number : ";
    cin>>num;

    if(num >0){
        cout<<num<<" "<<"positive number";
    }
    else if(num ==0){
        cout<<num<<" "<<"Number Is Zero";
    }
    else{
        cout<<num<<" "<<"is negative number";
    }
}

