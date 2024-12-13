#include<iostream>
using namespace std;

int peak(int arr[],int size){
    int start = 0;
    int end = size-1;

    while (start < end)
    {
      int mid = start +(end-start)/2;

        if (arr[mid] < arr[mid+1])
        {
           start = mid+1;
        }
        else{
            end = mid;
        }
    }
   return start;
}

int main(){
    int arr[] = {2,3,6,8,1};
    int size = 5;

    int peakElement = peak(arr,5);
    cout << peakElement;
}