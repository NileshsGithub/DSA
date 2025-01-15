#include<iostream>
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

pair<bool, int> isSumTreeFast(node *root){
    if(root == NULL){
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL) {
    return {true, root->data};
    }

    pair<bool, int> leftAns = isSumTreeFast(root -> left);
    pair<bool, int> rightAns = isSumTreeFast(root -> right);

    bool leftSumTree = leftAns.first;
    bool rightSumTree = rightAns.first;

    int leftSum = leftAns.second;
    int rightSum = rightAns.second;

    bool condition = root -> data == leftSum + rightSum;

    pair<bool, int> ans;

    if(leftSumTree && rightSumTree && condition){
        ans.first = true;
        ans.second = root -> data + leftSum + rightSum;
    }
    else{
        ans.first = false;
    }
    return ans;
}

bool isSumTree(node *root){
    return isSumTreeFast(root).first;
}

int main(){
node *root = new node(26);
    root->left = new node(10);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->right = new node(3);

    if (isSumTree(root)) {
        cout << "The tree is a Sum Tree." << endl;
    } else {
        cout << "The tree is not a Sum Tree." << endl;
    }

}