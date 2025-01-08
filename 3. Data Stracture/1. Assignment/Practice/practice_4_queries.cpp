#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int vall;
    Node* next;
    Node(int vall)
    {
        this->vall=vall;
        this->next=NULL;
    }
};

void print_(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insert_head(Node* &head,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}

void insert_tail(Node* &head,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}

void del_node(Node*&head,int poss)
{
    if(head==NULL) return;
    if(poss==0)
    {
        Node* del_head=head;
        head=head->next;
        delete del_head;
    }
    else
    {
        Node* tmp = head;
        for(int i=1;i<=poss-1;i++)
        {
            tmp=tmp->next;
            if(tmp==NULL)
            {
                return;
            }
        }
        if(tmp==NULL || tmp->next==NULL)
        {
            return;
        }
        Node* del_node=tmp->next;
        tmp->next=tmp->next->next;
        delete del_node;
    }
}

int main()
{
    Node* head=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int op,vall;
        cin>>op>>vall;
        if(op==0)
        {
            insert_head(head,vall);
        }
        if(op==1)
        {
            insert_tail(head,vall);
        }
        if(op==2)
        {
            del_node(head,vall);
        }
        print_(head);
    }
    return 0;
}