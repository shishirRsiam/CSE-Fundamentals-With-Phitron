#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int vall;
    Node*next;
    Node(int vall)
    {
        this->vall=vall;
        this->next=NULL;
    }
};

void print_(Node*head)
{
    Node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

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
    tail=newnode;
}

void recursion_(Node*head)
{
    if(head==NULL) return;
    cout<<head->vall<<" ";
    recursion_(head->next);
}

void recurtion_head_(Node*&head,Node*cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    recurtion_head_(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
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
    recurtion_head_(head,head);
    print_(head);
    return 0;
}