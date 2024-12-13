#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e, int key){
    
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    if(arr[mid]== key){
        return mid;
    }
    
    if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,e,key);
    }
}

int main(){
    int arr[]={1,4,6,9,10,24};
    int n= 6;
    int key=10;
    int s= 0;
    int e=n;

    cout<< binarySearch(arr,s,e,key)<<endl;

}