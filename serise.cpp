#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,num;
    float sum=0;
    cout<<"Enter a Number : ";
    cin>>num;

    for(i=1;i<=num;i++){
        //sum=sum+(i+0.5);
        /*if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }*/
        sum=sum+pow(i,5);
    }
    cout<<"Result is : "<<sum;
}

