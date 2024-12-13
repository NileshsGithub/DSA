#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this->data;

        //Memory free
        if(this->next != NULL){
            delete next;
            this -> next= NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

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

void insertAtPosition(Node* &tail, Node* &head,int position,int d){
    //Inserting at First position
    if (position == 1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    // Create a node for data
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
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

void deletePosition(int position, Node* &head){
    //Deleting fisrt node
    if(position == 1){
        Node* temp = head;
        head = head -> next; 
        //Free memory
        temp -> next = NULL;
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
        prev -> next = curr -> next;
        curr ->next = NULL;
        delete curr;
    }
}

Node *uniqueSortedList(Node *head){
    // Empty list
    if(head == NULL){
        return NULL;
    }

    //  Non-empty list
    Node *curr = head;

    while(curr != NULL){
        if(curr -> next != NULL && curr ->data == curr -> next ->data ){
            Node *next_next = curr -> next -> next;
            Node *nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
    }
        //Not equal
        else{ 
            curr = curr -> next;        
        }
        return head;
    }
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

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtPosition(tail,head,4,14);
    print(head);

    uniqueSortedList(head);
    print(head);    
}