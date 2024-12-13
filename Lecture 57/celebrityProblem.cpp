#include<iostream>
#include <vector>
#include <stack>
using namespace std;

bool knows(vector<vector<int>>& M,int a, int b){
    if(M[a][b] == 1){
        return true;
    }
    else{
        return false;
    }
}

int celebrity(vector<vector<int>>& M, int n){
    stack<int>s;

    // Push all elements in satck
    for(int i=0; i<n; i++){
        s.push(i);
    }

    // Get 2 elements and compare them
    while(s.size() > 1){    
        int a = s.top() ;
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(M, a, b)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }

    // Single element in stack is potntial celebrity
    //So verify it
    int candidate = s.top();

    
    int zeroCount = 0;
    for(int i=0;i<n; i++){
        if(M[candidate][i] == 0){
            zeroCount++;
        }
    }
    // All zeros
    if(zeroCount != n){
        return -1;
    }

    // Column check
    int oneCount = 0;
    for(int i=0;i<n; i++){
        if(M[i][candidate] == 1){
            oneCount++;
        }
    }
    if(oneCount != n-1){
        return -1;
    }
    
    return candidate;
    
}

int main(){

}