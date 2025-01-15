#include<iostream>
using namespace std;

// Approach 1
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

// int diameter(node * root){
//     if(root == NULL){
//         return 0;
//     }

//     int op1 = diameter(root -> left);
//     int op2 = diameter(root -> right);
//     int op3 = height(root -> left) + height(root -> right) + 1;

//     int ans = max(op1, max(op2,op3));

//     return ans;
// }

// Approach 2


pair<int, int> diameterFast(node *root){
    if(root == NULL){
        pair<int, int> p= make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameterFast(root -> left);
    pair<int, int> right = diameterFast(root -> left);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max (op2,op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int diameter(node*root){
    return diameterFast(root).first;
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->right->right->right = new node(6);   

    cout << "Diameter of the tree: " << diameter(root) << endl;

}