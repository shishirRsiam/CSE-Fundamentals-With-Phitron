#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(node *&head, int v)
{
    node *newNode = new node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linkedlist(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Break" << endl;
        int op;
        cin >> op;
        if (op == 1) // ekhane 1 hobe, null nah.
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        if (op == 2)
        {
            print_linkedlist(head);
        }
        if (op == 3)
        {
            break;
        }
    }
    return 0;
}