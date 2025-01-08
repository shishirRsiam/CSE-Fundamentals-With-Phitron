#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int vall;
    Node *next;
    Node(int vall)
    {
        this->vall = vall;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int vall)
{
    Node *newnode = new Node(vall);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->vall << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void Del_Double(Node *&head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL && i->next != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->vall == j->next->vall)
            {
                Node *del_node = j->next;
                j->next = j->next->next;
                delete del_node;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int vall;
        cin >> vall;
        if (vall == -1)
            break;
        insert_tail(head, tail, vall);
    }
    Del_Double(head);
    print_linked_list(head);
    return 0;
}