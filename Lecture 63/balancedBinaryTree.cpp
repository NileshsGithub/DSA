#include<iostream>
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

// Approach 1 (TC = O(n^2))

// int height(node *n){

//     // Base case
//     if(n == NULL){
//         return 0;
//     } 

//     int leftHeight = height(n -> left);
//     int rightHeight = height(n -> right);

//     int ans = max(leftHeight, rightHeight) + 1;

//     return ans; 
// }

// bool isBalanced(node *root){
//     if(root == NULL){
//         return true;
//     }

//     bool left = isBalanced(root -> left);
//     bool right = isBalanced(root -> right);

//     bool diff = abs(height(root->left)) - height(root->right) <= 1;

//     if(left && right && diff ){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// Approach 1 (TC = O(n))

pair<bool, int> isBalancedfast(node *root){
    if(root == NULL){
        pair<bool,int> p = make_pair(true, 0);
        return p;
    }

    pair<int, int> left = isBalancedfast(root -> left);
    pair<int, int> right = isBalancedfast(root -> right);

    bool leftAns = left.first;
    bool rightAns= right.first;
    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if(leftAns && rightAns && diff ){
        ans.first = true;

    }
    else{
        ans.first = false;
    }
    return ans;
}

bool isBalanced(node *root){
    return isBalancedfast(root).first;
}



int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->right->right->right = new node(6);  

    isBalancedfast(root);

}