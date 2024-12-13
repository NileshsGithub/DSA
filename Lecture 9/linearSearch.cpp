#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){

    for (int i=0;i < n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
 
    int arr[5] = {1, 4, 67, 3, 6};

    int key;
    cout<<"Enter the element you wnat to search : ";
    cin >> key;

    bool found = search(arr,10,key);
    
    if(found){
        cout<< key <<" is present";
    }
    else{
        cout<< key <<" is absent";
    }
}