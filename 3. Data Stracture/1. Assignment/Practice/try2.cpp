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
void insert_head(Node *&head, int vall)
{
    Node *newnode = new Node(vall);
    newnode->next = head;
    head = newnode;
}
void insert_tail(Node *&head, int vall)
{
    Node *newnode = new Node(vall);
    if (head == NULL)
    {
        head == newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void delete_vall(Node *&head, Node *&tail, int vall)
{
    if (head == NULL)
    {
        return;
    }
    if (vall == 0)
    {
        Node *del_head = head;
        head = head->next;
        delete del_head;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= vall - 1; i++)
        {
            tmp = tmp->next;
            if (tmp->next = NULL)
            {
                return;
            }
        }
        Node *delete_tmp = tmp->next;
        tmp->next = tmp->next->next;
        delete delete_tmp;
    }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, v;
        cin >> a >> v;
        if (a == 0)
        {
            insert_head(head, v);
        }
        else if (a == 1)
        {
            insert_tail(head, v);
        }
        else if (a == 2)
        {
            delete_vall(head, tail, v);
        }
        print_vall(head);
    }
    return 0;
}