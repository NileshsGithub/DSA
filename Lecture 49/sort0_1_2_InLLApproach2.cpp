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

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp -> data<< " ";
        temp = temp ->next;
    }    
    cout<<endl;
}

void insertAtEnd(Node *tail, Node *curr){
    tail -> next = curr;
    tail = curr;
}

Node *sortList(Node *head){
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead; 

    Node *curr = head;

    // Create seperate lists for 0,1 and 2
    while(curr != NULL){

        int value = curr -> data;

        if(value == 0){
            insertAtEnd(zeroTail,curr);
        }
        else if(value == 1){
            insertAtEnd(oneTail,curr);
        }
        else if( value == 2){
            insertAtEnd(twoTail,curr);
        }
        curr = curr -> next;
    }

    // Merge 3 sublist
    // 1st list is not empty
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }
    else{
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead ->next;
    twoTail -> next = NULL;

    // Set head
    head = zeroHead -> next;

    //Delete dummy node
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}



int main(){
     
    //Create new node
    Node* node1 = new Node(2);
    // cout<< node1 -> data;
    // cout<< node1 -> next;    

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,2);
    print(head);

    insertAtTail(tail,0);
    print(head);

    insertAtTail(tail,1);
    print(head);

    sortList(head);
    print(head);
}