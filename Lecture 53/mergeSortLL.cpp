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

Node *findMid(Node *head){
    Node *fast = head;
    Node *slow = head;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;  
    }
    return slow;
}

Node *merge(Node *left, Node *right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    Node *ans = new Node(-1);
    Node *temp = ans;

    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans = ans -> next;
    return ans;
}

Node *mergeSort(Node *head){

    // Base case
    if(head ==NULL || head -> next == NULL){
        return head;
    }
    
    // Break linked lisr in 2 halfs
    Node *mid = findMid(head);

    Node *right = mid -> next;
    Node *left = head;
    mid -> next = NULL;

    // Recursive calls
    left = mergeSort(left);
    right = mergeSort(right);

    // Merge both halfs
    Node *ans = merge(left, right);

    return ans;
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

   

    

}