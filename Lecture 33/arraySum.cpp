#include<iostream>
using namespace std;

int getSum(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remaningPart = getSum(arr+1,n-1);
    int sum = arr[0] + remaningPart;

    return sum;

}

int main(){
    int arr[]={1,2,6,7,8};
    int n=5;

    cout<<getSum(arr,n);

}