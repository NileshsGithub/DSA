#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    //Base case
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
         isSorted(arr+1,n-1);
    }
}

int main(){
    int arr[]={1,2,6,7,8,20,34};
    int n=6;

    cout<<isSorted(arr,n);
}