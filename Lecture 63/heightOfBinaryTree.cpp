#include<iostream>
#include <algorithm>
using namespace std;

class node{
    public :
    int data; 
    node *left;
    node *right;

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

    int leftHeight = height(n -> left);
    int rightHeight = height(n -> right);

    int ans = max(leftHeight, rightHeight) + 1;

    return ans; 
}

int main(){
     // Creating a simple binary tree
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4); 
    root->left->right = new node(5);
    root->right->right = new node(6);
    root->right->right->right = new node(7);

    // Calculating and printing the height of the tree
    cout << "Height of the tree: " << height(root) << endl;

}