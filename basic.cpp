#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=1;i<10;i++){

            cout<<i<<"before if"<<endl;
        if(i==5){
                int y= i+5;
            cout<<y<<"in if"<<endl;
        }
        cout<<i<<"after if"<<endl;
    cout<<"-------------------"<<endl;
    }
}

