#include<iostream>
using namespace std;

int main(){
    int arr2d[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;i<4;i++){
            cin>>arr2d[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;i++){
            cout<<arr2d[i][j];
        }
    }
}
