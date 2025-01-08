#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_vall(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void RemoveDuplicates(Node *&head)
{
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *tmp = temp;
        while (tmp->next != NULL)
        {
            if (temp->val == tmp->next->val)
            {
                Node *Delete = tmp->next;
                tmp->next = Delete->next;
                delete Delete;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    RemoveDuplicates(head);
    print_vall(head);
    return 0;
}