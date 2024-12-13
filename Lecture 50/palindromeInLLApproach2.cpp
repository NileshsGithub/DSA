#include<iostream>
#include <vector>
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

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp -> data<< " ";
        temp = temp ->next;
    }    
    cout<<endl;
}

Node *getMid(Node *head){
    Node *slow = head;
    Node *fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

Node *reverse(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr = prev -> next;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node *head){
    if(head == NULL || head -> next == NULL){
        return true;
    }

    // 1 -> Find mid
    Node * mid = getMid(head);

    // 2 -> Reverse list after mid
    Node * temp = mid -> next;
    mid -> next = reverse(temp);

    // 3 -> Compare both halfs
    Node *head1 = head;
    Node *head2 = mid -> next;

    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    // 4->z Repeate step 2
    reverse(temp);
    return true;
}



int main(){
     
    //Create new node
    Node* node1 = new Node(1);
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

    cout<<isPalindrome(head);
    

}