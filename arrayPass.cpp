#include<iostream>
#include<stdlib.h>
using namespace std;

void arrayPass(int arr[]){
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int array[]={32,54,3,64,4,6};
    arrayPass(array);

}
