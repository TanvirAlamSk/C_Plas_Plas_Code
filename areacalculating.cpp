#include<iostream>
using namespace std;

int main(){
    double arm1,arm2,arm3,lgarm,area,sum;
    cout << "Enter three arms of a triangle : ";
    cin>>arm1>>arm2>>arm3;

    if(arm1>=arm3 || arm1>=arm2){
        lgarm=arm1;

        if(arm2+arm3>lgarm){
            cout<<"It is triangle"<<endl;

            if(((arm2*arm2)+(arm3*arm3))==(lgarm*lgarm)){
               area=(arm2*arm3)/2;
               cout<<area<<endl;
               }else if(arm1!=arm2 && arm1!=arm3 && arm2!=arm3){
                sum=arm1+arm2+arm3;
                area=(sum*(sum-arm1)*(sum-arm2)*(sum-arm3));
                cout<<area<<endl;
               }
        }else{
            cout<<"It is not triangle"<<endl;
        }
    }else if(arm2>=arm3 || arm2>=arm1){
        lgarm=arm2;

        if(arm1+arm3>lgarm){
            cout<<"It is triangle"<<endl;
        }else{
            cout<<"It is not triangle";
        }

    }else{
        lgarm=arm3;

        if(arm2+arm1>lgarm){
            cout<<"It is triangle";
        }else{
            cout<<"It is not triangle";
        }

    }
    return 0;
}
