#include <iostream>
using namespace std;

int getPivot(int arr[],int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
         s= mid+1;
        }
        else
        {
         e = mid;
        }
      mid = s + (e - s) / 2;
    }
    return s;
}
 
int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
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

int findPosition(int arr[],int size,int key){
    int pivote = getPivot(arr,size);

    if(key >= arr[pivote] && key <= arr[size-1]){
        return binarySearch(arr,pivote,size-1,key);
    }
    else{
        return binarySearch(arr,0,pivote-1,key);
    }

}

int main()
{
    int arr[6] ={7,9,13,2,5,6};
    int key  = 13;
    cout<<""<<findPosition(arr,6,5);
}