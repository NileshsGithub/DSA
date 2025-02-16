#include<iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int>&s, int num){

    // Base case 
    if(s.empty() || s.top() < num){
        s.push(num);
        return;
    }
    
    int n = s.top();
    s.pop();
    // Recursive call
    sortedInsert(s, num);
    s.push(n);
}


void sortStack(stack<int>&stack){

// base case 
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // Rcursive call
    sortStack(stack);

    sortedInsert(stack, num);
}

int main(){

}