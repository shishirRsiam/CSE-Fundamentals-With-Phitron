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
        else return false;
    }

};


int main()
{
    myQueue mQ;
    mQ.push(10);
    cout << "Front element: " << mQ.front() << endl;
    cout << "Queue size: " << mQ.size() << endl;

    mQ.pop();
    cout << "After pop, Queue size: " << mQ.size() << endl;
    
    cout << "Is the queue empty? " << (mQ.empty() ? "Yes." : "No.") << endl;

}