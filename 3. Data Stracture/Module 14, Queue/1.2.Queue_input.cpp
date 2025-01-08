#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        Node* del=head;
        head=head->next;
        delete del;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        return false;
    }

};


int main()
{
    myQueue mQ;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        mQ.push(v);
    }
    cout<<"First Element is: "<<mQ.front()<<endl;
    cout<<"Size of myQueue: "<<mQ.size()<<endl;
    cout<<endl;
    
    cout<<"myQueue Elements is: ";
    while(!mQ.empty())
    {
        cout<<mQ.front()<<" ";
        mQ.pop();
    }
    cout<<endl;
    mQ.push(100);
    mQ.pop();
    if(!mQ.empty())
        cout<<"\nFirst Element is: "<<mQ.front()<<endl;
    // if(!mQ.empty())
    cout<<"Size of myQueue: "<<mQ.size()<<endl;
}