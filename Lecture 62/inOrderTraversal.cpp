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

node *buildTree(node *root){
    cout << "Enter the data : "<<endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<< "Enter data for inserting in left of "<< data << endl;
    root -> left = buildTree(root -> left);

    cout<< "Enter data for inserting in right of "<< data << endl;
    root -> right = buildTree(root -> right);
}

void inOrder(node *root){
    // Base case 
    if(root == NULL){
        return;
    }
    inOrder(root -> left);
    cout<< root -> data << " ";
    inOrder(root -> right);
}

int main(){
    node *root = NULL;

    // Creating a tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // InOrder traversal

    cout<< "inorder travesal is : ";
    inOrder(root);
    

}