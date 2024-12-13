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

bool checkPlindrome(vector<int> vec){
    int start = 0;
    int end = vec.size()-1;

    while(start <= end){
        if(vec[start] != vec[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isPalindrome(Node *head){
    vector<int> vec;
    
    Node * temp = head;

    while(temp != NULL){
        vec.push_back(temp -> data);
        temp = temp -> next;
    }
    return checkPlindrome(vec);
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

    insertAtTail(tail,1);
    print(head);    

    cout<<isPalindrome(head);
    

}