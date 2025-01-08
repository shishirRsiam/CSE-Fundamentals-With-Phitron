#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_(Node*&head,Node*&tail,int val)
{
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

bool isPalindrome(Node*head,Node*tail)
{
    while(head!=NULL && tail!=NULL)
    {
        if(head->val != tail->val)
        {
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_(head,tail,v);
    }
    bool flag = isPalindrome(head,tail);
    flag ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}