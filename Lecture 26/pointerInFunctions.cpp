#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p<<endl;
}

void update(int *p){
    *p +=1;
    cout<<*p;
}

int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
}
int main(){
    int num =5;

    int *p=&num;

    print(p);
    update(p);

    int arr[]={12,3,4,5,56};

    cout<<"Sum : "<<getSum(arr,5);
}