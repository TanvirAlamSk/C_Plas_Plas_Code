#include<iostream>
using namespace std;
int main(){
    int i,j,num,n1=0,n2=0;
    cout<<"Enter a number : ";
    cin>>num;
    for (i=1;i<=num;i++){
            for(j=i;j>=1;j--){
                    n1=n1+1;
                cout<<n1<<" ";
            }
            for(j=num-i-1;j>=0;j--){
                cout<<"    ";
            }
            for(j=1;j<=i;j++){
                n2=n2+1;
                cout<<" "<<n2;
            }
            cout<<endl;
    }
}

