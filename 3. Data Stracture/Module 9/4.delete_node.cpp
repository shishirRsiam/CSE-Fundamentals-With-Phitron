#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int Size_(Node*head)
{
    Node* tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        size++;
        tmp=tmp->next;
    }
    return size;
}

void inser_head(Node* &head,Node*&tail,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_pos(Node* &head,int pos,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    if(pos==0)
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void delete_(Node*&head,Node*&tail,int poss)
{
    if(head==NULL)
    {
        cout<<"Invalid Index!\n";
        return;
    }
    if(poss==Size_(head)-1)
    {
        Node* del_node=tail;
        tail=tail->prev;
        delete del_node;
        tail->next=NULL;
        return;   
    }
    if(poss==0)
    {
        Node* del_head=head;
        head=head->next;
        delete del_head;
        head->prev=NULL;
        return;
    }
    Node*tmp=head;
    for(int i=0;i<poss-1;i++)
    {
        tmp=tmp->next;
        if(tmp->next==NULL)
        {
            cout<<"Invalid Index!\n";
            return;
        }
    }
    Node* del_node=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete del_node;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse_list(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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
    int op;
    cin>>op;
    if(op==1)
    {
        int pos,vall;
        cin>>pos>>vall;
        if(pos>Size_(head))
        {
            cout<<"Invaid!\n";
        }
        if(pos==0)
        {
            inser_head(head,tail,vall);
        }
        else if(pos==Size_(head))
        {
            insert_tail(head,tail,vall);
        }
        else
        {
            insert_pos(head,pos,vall);
        }
    }
    if(op==2)
    {
        int poss;
        cin>>poss;
        delete_(head,tail,poss);
    }
    cout << "Forward Order: ";
    print_linked_list(head);
    cout << "Reverse Order: ";
    print_reverse_list(tail);
    return 0;
}
