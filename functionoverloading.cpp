#include<iostream>
#include<stdlib.h>
using namespace std;

void fun1(int a,int b){
    cout<<"first function : "<<a+b<<endl;
}

void fun1(int a,int b=10,int c=10){
    cout<<"Second function : "<<a+b+c<<endl;
}

int main(){
    int n1,n2,n3;
    //float n2;
    cout<<"Enter numbers : ";
    cin>>n1>>n2>>n3;
    fun1(n1);

}
