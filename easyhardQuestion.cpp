#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ques[n];

    for(int i=0;i<n;i++){
        cin>>ques[i];
    }

   /* for(int i=0;i<n;i++){
        cout<<ques[i]<<" ";
    }
    */
    int easy=0;
    for(int i=0;i<n;i++){
        if(ques[i]==1){
            easy=1;
        }
    }

    if(easy==0){
        cout<<"Easy";
    }else{
        cout<<"Hard";
    }
}
