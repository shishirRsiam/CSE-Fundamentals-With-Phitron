#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int vall;
    Node*next;
    Node*prev;
    Node(int vall)
    {
        this->vall=vall;
        this->next=NULL;
        this->prev=NULL;
    }
};

int size_(Node*head)
{
    int sz=0;
    while(head!=NULL)
    {
        sz++;
        head=head->next;
    }
    return sz;
}

void insert_(Node*&head,Node*&tail,int poss,int vall)
{
    Node*newnode=new Node(vall);
    if(poss==0)
    {
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    if(poss==size_(head))
    {   
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        return;
    }
    Node*tmp=head;
    for(int i=0;i<poss-1;i++)
    {
        tmp=tmp->next;
        if(tmp->next==NULL)
        {
            cout<<"Invalid\n";
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void print_head_(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->vall<<" ";
        head=head->next;
    }
    cout<<endl;
}

void print_tail_(Node*tail)
{
    while(tail!=NULL)
    {
        cout<<tail->vall<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int poss,vall;
        cin>>poss>>vall;
        if(poss>size_(head))
        {
            cout<<"Invalid\n";
        }
        else
        {
            insert_(head,tail,poss,vall);
            print_head_(head);
            print_tail_(tail);
        }
    }
    return 0;
}