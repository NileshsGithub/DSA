#include <iostream>
using namespace std;
template<typename T>

class Node
{
public:
    T data;
    Node *next;

    // Constructor
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node<int> *solve(Node<int> *first, Node<int> *second)
{

    // If only one element is present in first list
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    Node<int> *curr1 = first;
    Node<int> *next1 = curr1->next;
    Node<int> *curr2 = second;
    Node<int> *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1-> data) && (curr2->data <= next1 -> data))
        {
            // Add node in between list 1
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // Update pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // Moving curr1 and next1 forword
            curr1 = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = next2;
                return first;
            }
        }
    }
    return first;
}


Node<int> *mergeList(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
       return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

void insertAtHead(Node<int> *&head, int d)
{
    // create new node
    Node<int> *temp = new Node<int>(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node<int> *&tail, int d)
{
    Node<int> *temp = new Node<int>(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node<int> *&head)
{
    Node<int> *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // Create new node
    Node<int> *node1 = new Node<int>(10);
    // cout<< node1 -> data;
    // cout<< node1 -> next;

    // head pointed to node1
    Node<int> *head = node1;
    Node<int> *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);
}