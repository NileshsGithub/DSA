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


Node *reverseLinkedList(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;    
        prev = curr;
        curr = forward;
    }
    return prev;
}

void insertAtHead(Node* &head,int d){
    //create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp -> data<< " ";
        temp = temp ->next;
    }    
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
      
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

}