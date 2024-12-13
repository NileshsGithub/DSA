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

Node* recursiveReverse(Node *head){
    //Base case
    if(head == NULL || head->next == NULL ){
        return head;
    }

    Node *chotaHead = recursiveReverse(head->next);

    head -> next -> next = head;
    head -> next =NULL;

    return chotaHead;
} 




Node *reverseLinkedList(Node * head){
   
}

int main(){

}