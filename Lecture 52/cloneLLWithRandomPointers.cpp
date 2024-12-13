#include<iostream>
#include<unordered_map>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node *random;
    
    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    //create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node * head, Node* &tail,int d){
    Node* newNode = new Node(d);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail -> next = newNode;
        tail = tail -> next;
    }
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

Node *CloneAList(Node *head){

    // Create a clone list
    Node *cloneHead = NULL;
    Node * cloneTail = NULL;

    Node * temp = head;

    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp -> data);
        temp = temp -> next;
    }

    // Create a map
    unordered_map<Node *,Node*>oldToNewNode;
    
    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next; 
    }

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL){
        cloneNode -> random = oldToNewNode[originalNode -> random];
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next; 
    }
    return cloneHead;
}



int main(){
     
    //Create new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data;
    // cout<< node1 -> next;    

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(tail,12);
    print(head);

    insertAtHead(tail,15);
    print(head);

    

}