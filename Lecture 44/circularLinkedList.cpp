#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor 
    Node(int d){
        this -> data = d;
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
void print(Node* tail){
    Node* temp = tail;

    if(tail==NULL){
        cout<<"List is empty"<<endl; 
        return;
    }
    do{
        cout<< tail -> data <<" ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout<<endl;
}

void insertNode(Node* &tail, int element, int d){
    //List is empty 
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        //Non-empty list
        //Assuming that the element present in the list
        
        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        //Element found -> curr is reprsenting that node

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(int element,Node* & tail){
    //Empty list
    if(tail == NULL){
        cout<<"List is empty";
        return;
    }
    else{
        //Non-empty list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != element){
            prev = curr;
            curr = curr ->next;
        }
        prev -> next = curr -> next;

        //Single node linked list
        if(prev == curr){
            tail = NULL;
        }

        // >=2 node linked list
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}


int main(){
    Node* tail = NULL;

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    // insertNode(tail,5,6);
    // print(tail);\

    // insertNode(tail,7,8);
    // print(tail);

    deleteNode(7, tail);
    print(tail);

}