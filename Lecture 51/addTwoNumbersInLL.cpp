#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;

        // Memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr = prev->next;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    }

    while (first != NULL || second != NULL || carry != NULL)
    {
        int val1 = 0;
        if (first != NULL)
        {
            val1 = first->data;
        }

        int val2 = 0;
        if (second != NULL)
        {
            val2 = second->data;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;

        if (first != NULL)
        {
            first = first->next;
        }
        if (second != NULL)
        {
            second = second->next;
        }
    }

    return ansHead;
}

Node *addTwoLists(Node *first, Node *second)
{

    // 1 -> Reverse input linked lists
    first = reverse(first);
    second = reverse(second);

    // 2-> Add 2 linked list
    Node *ans = add(first, second);

    // 3 -> Reverse ans list
    ans = reverse(ans);

    return ans;
}

void print(Node *&head)
{
    Node *temp = head;

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
    Node *node1 = new Node(10);
    // cout<< node1 -> data;
    // cout<< node1 -> next;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(tail, 12);
    print(head);

    insertAtHead(tail, 15);
    print(head);
}