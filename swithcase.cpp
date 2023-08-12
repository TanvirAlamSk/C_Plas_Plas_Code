#include<iostream>
using namespace std;

int main(){
    char ch,ch1;
    cout<<"Enter any character : ";
    cin>>ch;

    ch1=toupper(ch);

    switch(ch1){
    case 'A':
        cout<<ch<<" is a vowel";
        break;
    case 'E':
        cout<<ch<<" is a vowel";
        break;
    case 'I':
        cout<<ch<<" is a vowel";
        break;
    case 'O':
        cout<<ch<<" is a vowel";
        break;
    case 'U':
        cout<<ch<<" is a vowel";
        break;
    default:
        cout<<ch<<" is a consonent";
    }

}
