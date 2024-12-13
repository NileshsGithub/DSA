#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start) / 2;

    while (start<=end)
    {
        if(arr[mid] == key){
        return mid;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start) / 2;
    }
    return -1; 
}
int main(){
    int arr[]={1,5,7,8,12,34,56,78,90};
    
    int ans = binarySearch(arr,9,8);

    cout<< ans;
    
}