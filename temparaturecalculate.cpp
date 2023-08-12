#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double cel,fah;
    cout<<fixed<<setprecision(2);

    cout<<"Enter fahrenheit temperature : ";
    cin>>fah;

    cel=(fah -32)/1.8;
    cout<<"Celcious is "<< cel <<" deg";

}
