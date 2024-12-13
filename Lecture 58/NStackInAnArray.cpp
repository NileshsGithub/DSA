#include<iostream>
using namespace std;

class NStack{

    int *arr;
    int *top;
    int *next;

    int n,s;
    int freeSpot;

    NStack(int N, int S){

        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // top initialize
        for(int i=0; i<n; i++){
            top[i] = -1;
        }

        // next intialize
        for(int i=0; i<s; i++){
            next[i] = i+1;
        }

        // Update last index value to -1
        next[s-1] = -1;

        // Initialize freespot
        freeSpot = 0;
    }

    bool push(int x, int m){
        // Check for overflow
        if(freeSpot == -1){
            return false;
        }

        // Find index 
        int index = freeSpot;
        
        // Update freeSpot
        freeSpot = next[index];

        // Insert element into array
        arr[index] = x;

        // Update next
        next[index] = top[m-1];

        // Update top 
        top[m-1] = index;

        return true;
    }

    int pop(int m){
        // check underflow condtion
        if(top[m-1] == -1){
            return -1;
        }

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freeSpot;

        freeSpot = index;

        return arr[index];
    }
};


int main(){

}