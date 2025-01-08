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

void insert_tail(Node* &head,Node* &tail,int vall)
{
    Node* newnode = new Node(vall);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

int Max_Number(Node* head)
{
    Node* tmp = head;
    int mx=INT_MIN;
    while(tmp != NULL)
    {
        mx=max(tmp->vall,mx);
        tmp=tmp->next;
    }
    return mx;
}

int Min_Number(Node* head)
{
    Node* tmp = head;
    int mn=INT_MAX;
    while(tmp != NULL)
    {
        mn=min(tmp->vall,mn);
        tmp=tmp->next;
    }
    return mn;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_tail(head,tail,vall);
    }
    cout<<abs(Max_Number(head)-Min_Number(head));
    return 0;
}