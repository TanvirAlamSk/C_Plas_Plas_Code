#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float num1,num2;
    cout<<"1st number "<<endl;
    cin>>num1;

    cout<<"2nd Number:"<<endl;
    cin>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(5);

    float sum =num1+num2;
    cout<<"Summation is : "<<sum<<endl;

    float sub=num1-num2;
    cout<<"Subtraction is : "<<sub <<endl;

    float mul =num1*num2;
    cout<<"Multiplication is : " <<mul<<endl;

    float div=num1/num2;
    cout<<"Division is : " <<div <<endl;

    float div1=(float)num1/num2; //type custing
    cout<<"Division is : " <<div1 <<endl;


    return 0;
}

