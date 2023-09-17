#include<iostream>
using namespace std;

int main()
{
    int i,n,smax,smin;
    float ava,sum=0;


    cout<<"Enter The Number Of Student: ";
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cout<<"Number of Student"<<i+1<<" : ";
        cin>>arr[i];
        cout<<endl;
    }
    int max=arr[0],min=arr[0];
    for(i=0; i<n; i++){
    sum=sum+arr[i];

    if(max<arr[i]){
        max=arr[i];
        smax=i;
    }
    if(min>arr[i]){
        min=arr[i];
        smin=i;
    }
    }
    cout<<"Total Number of all Student : "<<sum<<endl;
    ava=sum/n;

    cout<<"Avarage Number of all Student : "<<ava<<endl;

    cout<<"Maximum Number is : "<<max<<" from Student"<<smax+1<<endl;
    cout<<"Minimum Number is : "<<min<<" from Student"<<smin+1;


}
