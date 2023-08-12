#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two Number : ";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is Large. "<<num2 <<" is small";
    }
    else if(num1<num2){
        cout<<num2<<" is Large. "<<num1 <<" is small";;
    }
    else{
        cout<<"Both are equal";
    }
}
