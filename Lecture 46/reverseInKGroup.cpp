#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data; 
        this -> next = NULL;
    }
};

Node *KReverse(Node *head,int k){
    //Base case 
    if(head==NULL){
        return NULL;
    }
    // Step 1 - Reverse first K nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev =  NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2 - Recursive call
    if(next != NULL){
        head -> next = KReverse(next,k); 
    }

    // Step 3 - Return head
    return prev;

}

int main(){

}