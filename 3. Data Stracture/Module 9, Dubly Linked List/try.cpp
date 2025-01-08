#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// This is Forward Print Function
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// This is Reverse Print Function
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// This is Insert at Head Function
void insert_at_head(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    // Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// This is Insert at Any Position Function
void insert(Node *head, Node *tail, int pos, int data)
{
    if (pos == 1)
    {
        insert_at_head(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

// This is Size Function
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // Link Node With Previous and Next Node
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    // Call Insert Function
    insert(head, tail, 1, 100);

    // Print Function Call
    print_forward(head);
    print_reverse(tail);

    return 0;
}