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

void Insert_(Node*&head,Node*&tail,int vall)
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

void Print_(Node*head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    tmp=head;
    bool flag = true;
    for(int i=0;i<cnt-1;i++)
    {
        if(tmp->vall > tmp->next->vall)
        {
            flag= false;
            break;
        }
        tmp=tmp->next;
    }
    flag == true ? cout<<"YES" : cout<<"NO";
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        int vall; cin>>vall;
        if(vall==-1) break;
        Insert_(head,tail,vall);
    }
    Print_(head);
    return 0;
}