#include<iostream>
#include <stack>
using namespace std;

void slove(stack<int>&s, int x){
    // Base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    
    // Recursive call
    slove(s,x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int>&myStack, int x){
    slove(myStack,x);
    return myStack;
}

int main(){
    

}