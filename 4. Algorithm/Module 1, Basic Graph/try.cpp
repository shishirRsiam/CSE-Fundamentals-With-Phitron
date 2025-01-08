#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*&head, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newnode;
}

void insert_at_head(Node*&head, int val)
{
    Node* newnode = new Node(val);
    newnode->next=head;
    head=newnode;
}

void print_(Node*head)
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    while(head != NULL)
    {
        mx = max(head->val,mx);
        mx = min(head->val,mn);
        head=head->next;
    }
    cout<<abs(mx-mn);
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    print_(head);
    // insert_at_tail(head, 40);
    // print_(head);
    // insert_at_tail(head, 50);
    // print_(head);
    insert_at_head(head, 100);
    print_(head);
    return 0;
}