#include<iostream>
using namespace std;

int main(){
    float num1,num2,num3;
    cout<<"Enter 3 number : ";
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is large number";
        }else if(num1==num3){
            cout<<num1<<" and "<<num3<<" both are equal and large numbers";
        }else{
            cout<<num3<<" is large number";
        }
    }else if(num1<num2){
        if(num2>num3){
            cout<<num2<<" is large number";
        }else if(num2==num3){
            cout<<num2<<" and "<<num3<<" both are equal and large numbers";
        }else{
            cout<<num3<<" is large number";
        }
    }else{
        if(num2==num3){
            cout<<"All numbers are equal it is "<<num1;
        }else{
            cout<<num1<<" and "<<num2<<" both are equal and large numbers";
    }
}
}
