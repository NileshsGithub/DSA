#include<iostream>
#include <vector>
using namespace std;

    bool isPossible(vector<int>arr, int n, int m, int mid){
        int stdCount = 1;
        int pageSum = 0;

        for(int i=0;i<n;i++){  
            if(pageSum + arr[i] <= mid ){
                pageSum = pageSum + arr[i];
            }
            else{
                stdCount++;
                if(stdCount > m || arr[i] > mid){
                    return false;
                }
                pageSum =arr[i];
            }
        }
        return true;
    }


int allocateBook(vector<int>arr, int n, int m){
    int start = 0;
    int sum = 0;
    
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    int end = sum;
    int ans =-1;
    int mid = start+(end-start)/2;

    while(start<=end){
         if(isPossible(arr,m,n,mid)){
            ans =mid;
            end = mid-1;
         }
         else{
            start = mid+1;
         }
        int mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>  arr ={10,20,30,40};
    int n = 4;
    int m = 2;
 
 cout<<"ans is : "<< allocateBook(arr,4,2);
     
}