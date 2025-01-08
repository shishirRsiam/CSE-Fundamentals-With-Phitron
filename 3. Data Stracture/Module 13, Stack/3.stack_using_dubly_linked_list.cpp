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

class myStack
{
    public:

    Node*head=NULL;
    Node*tail=NULL;

    int sz=0;

    void push(int val)
    {
        sz++;
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

    void pop()
    {
        sz--;
        Node*delete_ = tail;
        tail=tail->prev;
        tail->next=NULL;
        if(tail==NULL) head=NULL;
        delete delete_;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        // return sz;
        int cnt=0;
        Node*tmp=head;
        while(tmp!=NULL)
        {
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }

    int size_()
    {
        return sz;
    }

    bool empty()
    {
        if(size()==0) return true;
        else return false;
    }

};

int main()
{
    myStack ls;

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int v;cin>>v;
        ls.push(v);
    }

    while(!ls.empty())
    {
        cout<<ls.top()<<endl;
        ls.pop();
    }
    if(ls.size()==0)
    cout<<1;
    return 0;
}