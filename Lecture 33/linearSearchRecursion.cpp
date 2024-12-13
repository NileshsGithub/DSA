#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
    int remaningArray = linearSearch(arr+1,n-1,key);
    return remaningArray;
    }
}

int main(){
    int arr[]={1,2,6,7,8,20,34};
    int n=7;
    int key= 34;

    cout<<linearSearch(arr,n,key);
}