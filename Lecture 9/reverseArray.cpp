#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;

        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }
    cout<< endl;
}

int main(){
    int arr1[10]= {10,44,4,45,76,78,9,45,37,5};
    int arr2[5]={34,67,90,76,1};

    reverseArray(arr1,10);
    reverseArray(arr2,5);

    printArray(arr1,10);
    printArray(arr2,5);


}
