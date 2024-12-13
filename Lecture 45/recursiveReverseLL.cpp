#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


// Recursive Fuction to reverse a linked list
void recursiveReverse(Node* head,Node * curr,Node *prev){
    //Base case
    if(curr ==NULL){
        head=prev;
        return ;
    }

    Node *forward = curr -> next; 
    recursiveReverse(head,forward,curr);
    curr -> next = prev;
} 

Node *reverseLinkedList(Node * head){
    Node* prev = NULL;
    Node* curr = head;
    recursiveReverse(head,curr,prev);
    return head;
}

int main(){

}