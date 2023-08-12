#include<iostream>
using namespace std;

int main(){
    char ch ;
    cout<<"Enter any Character  : ";
    cin >>ch;
    //||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"IT Is A Vowel";
    }else{
        cout<<"IT Is A Consonent";
    }
}
