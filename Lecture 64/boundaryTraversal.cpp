#include<iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void traverseLeft(node * root, vector<int>&ans){
    // Base case
    if(root == NULL || (root -> left == NULL && root -> right == NULL)){
        return ;
    }

    ans.push_back(root -> data);
    if(root -> left){
        traverseLeft(root -> left, ans);
    }
    else{
        traverseLeft(root -> right, ans);
    }
}

void traverseLeaf(node * root,vector<int> &ans){
    // Base case
    if(root == NULL){
        return;
    }
    if(root -> left == NULL && root -> right == NULL){
        ans.push_back(root -> data);
        return;
    }
    traverseLeaf(root -> left, ans);
    traverseLeaf(root -> right, ans);
}

void traverseRight(node * root, vector<int> &ans){
    if((root == NULL) ||  (root -> left == NULL && root -> right == NULL)){
        return;
    }

    if(root -> right){
        traverseRight(root -> right, ans);
    }
    else{
        traverseRight(root -> left, ans);
    }

    // store data aftre returning
    ans.push_back(root -> data);

}

vector<int> boundary(node *root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    ans.push_back(root -> data);

    //Traverse left part
    traverseLeft(root -> left,ans);

    // traverse leaf part
    // left subtree
    traverseLeaf(root -> left, ans);

    // right subtree
    traverseLeaf(root -> right, ans);

    // traverse right part
    traverseRight(root -> right, ans);

    return ans;    
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->right->left = new node(8);
    root->left->right->right = new node(9);

    // Perform boundary traversal
    vector<int> result = boundary(root);

    // Output the result
    cout << "Boundary Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}