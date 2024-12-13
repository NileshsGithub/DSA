#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){

    //Base case
    if(size==0 || size==1){
        return ;
    }

    //Processing
    for(int i=0;i<size-1;i++){
    if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //Recursive realtion
    bubbleSort(arr,size-1);
}


int main(){
    int arr[]={5,4,3,2,1};

    bubbleSort(arr,5);

    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    
}  