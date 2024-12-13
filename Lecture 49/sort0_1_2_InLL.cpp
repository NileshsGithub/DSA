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

Node *sortList(Node *head){
    Node *zeroCount = 0;
    Node *oneCount = 0;
    Node *twoCount = 0;

    Node *temp = head;

    while(temp != NULL){
        if(temp -> data == 0){
            zeroCount++;
        }
        else if(temp -> data == 1){
            oneCount++;
        }
        else if(temp -> data ==2){
            twoCount++;
        }

    temp = temp -> next;

    }

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
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