#include<iostream>
using namespace std;

int main(){
    int marks[5],total=0,max,min,i;
    float avj=0;

    for(i=0;i<5;i++){
        cout<<"Enter Students Marks : ";
        cin>>marks[i];
    }

    for(i=0;i<5;i++){
        total=marks[i]+total;
    }

    cout<<"Total marks Is : "<<total<<endl;
    cout<<"Avarage marks Is : "<<float(total)/5<<endl;

    max=marks[0];
    for(i=0;i<5;i++){
        if(max<marks[i]){
            max=marks[i];
        }
    }
    cout<<"Maximun Number is : "<<max<<endl;

    min=marks[0];
    for(i=0;i<5;i++){
        if(min>marks[i]){
            min=marks[i];
        }
    }
    cout<<"Minimum Number Is : "<<min<<endl;
}
