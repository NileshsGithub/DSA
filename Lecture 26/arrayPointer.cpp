#include<iostream>
using namespace std;

int main(){
    int arr[]={3,7,3,4,5,6,7,8,9,10};
    
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;

    cout<<*(9+arr)<<endl;
    cout<<7[arr]<<endl;

    int a[20]={1,4,6,8,9};

    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

}