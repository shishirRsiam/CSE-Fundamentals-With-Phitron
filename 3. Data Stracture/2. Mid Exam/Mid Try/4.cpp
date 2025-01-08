#include<bits/stdc++.h>
using namespace std;

int size_=0;

class Node 
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int v)
    {
        this->val=v;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_head(Node*&head,Node*&tail,int val)
{
    size_++;
    Node*newnode=new Node(val);
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

void insert_tail(Node*&head,Node*&tail,int val)
{
    size_++;
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insert_pos(Node*&head,Node*&tail,int pos,int val)
{
    size_++;
    Node*newnode=new Node(val);
    Node*tmp=head;
    pos=pos-1;
    while(pos--)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void print_(Node*head,Node*tail)
{
    Node*tmp=head;
    cout<<"L -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    tmp=tail;
    cout<<"\nR -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;

    int t; cin>>t;
    while(t--)
    {
        int pos,val; cin>>pos>>val;
        if(pos>size_)
        {
            cout<<"Invalid\n";
        }
        else if(pos==0)
        {
            insert_head(head,tail,val);
            print_(head,tail);
        }
        else if(pos==size_)
        {
            insert_tail(head,tail,val);
            print_(head,tail);
        }
        else 
        {
            insert_pos(head,tail,pos,val);
            print_(head,tail);
        }

    }

    return 0;
}