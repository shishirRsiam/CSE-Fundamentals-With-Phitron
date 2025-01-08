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

void print_(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->vall<<" ";
        head=head->next;
    }
    cout<<endl;
}

void reverse_(Node*&head,Node*&tail)
{
    Node*left=head;
    Node*right=tail;
    while(left!=right&&left->next!=right)
    {
        if(left->vall>right->vall)
        {
            swap(left->vall,right->vall);
        }
        left=left->next;
        right=right->prev;
    }
    if(left->vall>right->vall)
    {
        swap(left->vall,right->vall);
    }
}

void sort_(Node*&head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        Node*tmp2=tmp;
        while(tmp2->next!=NULL)
        {
            if(tmp->vall>tmp2->next->vall)
            {
                swap(tmp->vall,tmp2->next->vall);
            }
            tmp2=tmp2->next;
        }
        tmp=tmp->next;
    }
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head,tail,vall);
    }
    print_(head);
    sort_(head);
    print_(head);
    return 0;
}