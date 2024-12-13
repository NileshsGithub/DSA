#include<iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>&s, int x){
     // Base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    
    // Recursive call
    insertAtBottom(s,x);
    s.push(num);
}

void reverseStack(stack<int>&stack){
    // Base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}


int main(){

}