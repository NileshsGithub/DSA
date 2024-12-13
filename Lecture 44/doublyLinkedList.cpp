#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor 
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;

        //Memory free
        if(this -> next != NULL){
            delete next;
            this -> next= NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

// Traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

// Gives length of linked list
int getLength(Node* head){
    int length =0;
    Node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp ->next;
    }
    return length;
}

void insertAtHead(Node* &head,Node* &tail, int d){
    //Empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp ->next = head;
    head ->prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){

    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    // Insert at strat
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int count=1;

    while (count < position-1){
        temp = temp -> next;
        count++;
    }

    //Inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // Create a node for data
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deletePosition(int position, Node* &head){
    //Deleting fisrt node
    if(position == 1){
        Node* temp = head;

        temp -> next -> prev=NULL;
        head = temp -> next;
        temp -> next =NULL;
        delete temp;
    }
    else{
        //Deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count= 1;
        while (count < position){
            prev = curr;
            curr = curr ->next;
            count++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    // Node* node1 = new Node(10); 
    Node* head = NULL;
    Node* tail = NULL;
    print(head); 

    insertAtHead(head,tail, 9);
    print(head);
   
    insertAtTail(tail,head,13);
    print(head);

    insertAtPosition(head, tail, 2, 12);
    print(head);

    insertAtPosition(head, tail, 1, 7);
    print(head);

    insertAtPosition(head, tail, 5, 20);
    print(head);

    deletePosition(5,head);
    print(head);
}
