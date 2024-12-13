#include<iostream>
using namespace std;

class node{
    int data; 
    int *left;
    int *right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

int height(node *n){

    // Base case
    if(n == NULL){
        return 0;
    } 

    int left = height(n -> left);
    int right = height(n -> right);

    int ans = max(left, right) + 1;

    return ans; 
}

int main(){

}