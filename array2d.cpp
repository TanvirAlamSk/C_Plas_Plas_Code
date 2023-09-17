#include<iostream>
using namespace std;

int main(){

    int row ,col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    int arr2d[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Value of["<<i+1<<"]["<<j+1<<"] = ";
            cin>>arr2d[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr2d[i][j]<<" ";
        }
        cout<<endl;
    }
}

