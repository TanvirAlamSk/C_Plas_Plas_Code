#include<iostream>
using namespace std;


int main(){
    int arr[10],sum=0;
    for(int i=0;i<10;i++){
            cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
        //cout<<arr[i]<<" ";
    }
    cout<<"Sumation is : "<<sum
    ;
}
