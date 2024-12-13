#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
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
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
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

bool isCircularList(Node *head){
    if(head == NULL){
        return true;
    }
    Node * temp = head -> next;

    while(temp != NULL && temp != head){
       temp = temp -> next;
    }
      if(temp==head){
            return true;
        }
        else{
            return false;
        }

}

bool detectLoop(Node *head){
    if(head==NULL){
        return false;
    }
    map<Node *,bool> visited;

    Node *temp = head;

    while(temp != NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp = temp -> next;
    }
    return false;
}

Node *floydCycleDection(Node *head){
    if(head==NULL)
    return NULL;

    Node *slow = head;
    Node *fast = head;
    while(slow != NULL && fast != NULL){

        fast = fast -> next ;
        if(fast != NULL){
            fast = fast -> next ;
        }

        slow = slow -> next ;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node * head){
    if(head == NULL){
        return NULL;
    }

    Node *intersection = floydCycleDection(head);
    if(intersection == NULL){
        return NULL;
    }

    Node *slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

Node *removeLoop(Node *head){
    if(head == NULL){
        return NULL;
    }

    Node *startOfLoop = getStartingNode(head);
    if(startOfLoop == NULL){
        return head; 
    }
    Node * temp = startOfLoop;

    while( temp -> next !=  startOfLoop ){
        temp = temp ->next;
    }
    temp -> next = NULL;
    return head;
}


int main(){
    Node * n1 = new Node(10);
    Node * head = n1;
    Node * tail = n1;

    
    print(head);

    insertAtTail(head,tail,4);
    print(head);

    insertAtTail(head,tail,6);
    print(head);

    if(floydCycleDection(head)){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }
    


}