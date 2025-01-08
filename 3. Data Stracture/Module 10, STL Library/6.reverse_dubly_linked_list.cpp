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

void insert_(Node*&head,Node*&tail,int vall)
{
    Node*newnode=new Node(vall);
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

void reverse_(Node*&head,Node*&tail)
{
    Node*left=head;
    Node*right=tail;
    while(left!=right && left->next!=right)
    {
        swap(left->vall,right->vall);
        left=left->next; right=right->prev;
    }
}

void Print_head(Node*head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void Print_tail(Node*tail)
{
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while (true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head,tail,vall);
    }
    Print_head(head);
    Print_tail(tail);
    reverse_(head,tail);
    Print_head(head);
    Print_tail(tail);
    return 0;
}