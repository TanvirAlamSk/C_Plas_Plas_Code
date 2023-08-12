#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"1st number "<<endl;
    cin>>num1;

    cout<<"2nd Number:"<<endl;
    cin>>num2;

    int sum =num1+num2;
    cout<<"Summation is : "<<sum<<endl;

    int sub=num1-num2;
    cout<<"Subtraction is : "<<sub <<endl;

    int mul =num1*num2;
    cout<<"Multiplication is : " <<mul<<endl;

    int div=num1/num2;
    cout<<"Division is : " <<div <<endl;

    float div1=(float)num1/num2; //type custing
    cout<<"Division is : " <<div1 <<endl;

    int mod=num1% num2;
    cout<<"Modulus is : " <<mod<<endl;
    return 0;
}
