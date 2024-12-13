#include<iostream>
using namespace std;

int partition(int *arr,int s, int e){
    int pivot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[s]>=arr[i]){
            count++;
        }
    }

    //Place pivot at right position
    int pivoteIndex = s + count ;
    swap(arr[pivoteIndex],arr[s]);

    //Adjusting left and right part
    int i=s ; int j=e;
    while(i<pivoteIndex && j>pivoteIndex){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] >= pivot){
            j--;
        }

        if(i<pivoteIndex && j>pivoteIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivoteIndex;

}

void quickSort(int *arr,int s,int e){
    //Base case
    if(s>=e){
        return;
    }

    //Partition 
    int p = partition(arr,s,e);

    //Sorting left part
    quickSort(arr,s,p-1);

    //Sorting right part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[]={6,5,4,3,2,1};
    int n=6;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}