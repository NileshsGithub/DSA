#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
}

void swapAlternate(int arr[],int size){
    for(int i =0;i<size;i+=2){
        if(i+1 <size){
        swap(arr[i],arr[i+1]);
    }
}
    
}
int main(){
    int arr[] = {1,2,4,5,6,10 };

    swapAlternate(arr,6);
    printArray(arr,6);
   

}