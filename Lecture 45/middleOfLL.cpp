#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node* head){
    int length =0;
    Node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp ->next;
    }
    return length;
}


Node *middle(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    int ans = getLength(head);
    int count =0;

    while(count <= ans){
        head ->next = head;
        count++;
    }
    return head;
}


int main(){

}