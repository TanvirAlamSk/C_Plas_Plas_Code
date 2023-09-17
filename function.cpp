#include<iostream>
using namespace std;

int addition(int a,int b){
    int sum=a+b;
    return sum;
    //cout<<"Summation"<<a+b<<endl;
}

void substruct(int a,int b){
    cout<<"Substract : "<<a-b<<endl;
}

int multiplecation(int a,int b){
    return a*b;
}

float division(float a,float b){
    return a/b;
}

int main(){
    int x,y;
    cout<<"Enter Two Number : ";
    cin>>x>>y;


    int z= addition(x,y);
    cout<<endl;

    cout<<"Summation : "<<z<<endl;
    substruct(x,y);

    cout<<"Multiplecation : "<<multiplecation(x,y)<<endl;

    cout<<"Division : "<<division(x,y)<<endl;


}



