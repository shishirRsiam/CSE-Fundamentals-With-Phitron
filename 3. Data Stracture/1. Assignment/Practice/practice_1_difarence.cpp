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
    Node* tmp=head;
    int mx=INT_MIN;
    int mn=INT_MAX;
    while(tmp!=NULL)
    {
        mx=max(mx,tmp->vall);
        mn=min(mn,tmp->vall);
        tmp=tmp->next;
    }
    cout<<abs(mx-mn)<<endl;
}

void insert_(Node* &head,Node*&tail,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}


int main()
{
    Node* head=NULL;   
    Node* tail=NULL;   
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head,tail,vall);
    }
    print_(head);
    return 0;
}