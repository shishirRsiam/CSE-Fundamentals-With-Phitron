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

void Tail_(Node* &head, int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp->next;
    }
    tmp->next=newnode;
}

void Print_(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void Head_Tail_(Node* &head,Node*&tail, int vall)
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

void recurtion(Node* n)
{
    if(n==NULL) return;
    recurtion(n->next);
    cout<<n->vall<<" ";
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
        Head_Tail_(head,tail,vall);
    }
    cout<<"Your Linked list: ";
    Print_(head);
    cout<<"Reverse Linked List: ";
    recurtion(head);
    return 0;
}