#include<iostream>
#include <stack>
using namespace std;

void slove(stack <int>&inputStack,int count, int size){
    // Base case 
    if(count == size/2){
        inputStack.pop();
            return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    slove(inputStack,count + 1,size);
    inputStack.push(num);
}

void deletMiddle(stack <int>&inputStack , int n){
    int count = 0;
    slove(inputStack,count,n);
}

int main(){
    

}