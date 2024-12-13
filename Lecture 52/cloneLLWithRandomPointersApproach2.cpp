#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;   
    
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

void insertAtTail(Node *&head, Node* &tail,int d){
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
 
Node *cloneList(Node *head){

    // 1 -> Create a clone list
    Node *cloneHead = NULL;
    Node * cloneTail = NULL;
    Node * temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp -> data);
        temp = temp -> next;
    }

    // 2 -> Add cloneNodes in between original nodes
    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        Node * next = originalNode -> next;
        originalNode -> next = cloneNode;
        originalNode = next;

        next = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode -> next;
    }
  
    // 3 -> Copying random pointer
    temp = head;
    while(temp != NULL){
        if(temp -> next != NULL){
            temp -> next -> random = temp -> random 
            ? temp -> random -> next : temp -> random;
        }
        temp = temp -> next -> next;     
    }

    // 4 -> Revert changes done in step 2
    originalNode = head;
    cloneNode = cloneHead;  
    while(originalNode != NULL && cloneNode != NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode -> next; 
    } 

    // 5 -> return ans
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

   


    

}