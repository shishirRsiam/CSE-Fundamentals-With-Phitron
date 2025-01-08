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

void Insert_(Node* &head,Node* &tail,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void Print_(Node* head)
{
    Node* tmp=head;
    cout<<"Your Linked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void Size_(Node* head)
{
    Node* tmp=head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    cout<<"Your linked list Size is: "<<cnt<<endl;
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
        Insert_(head,tail,vall);
    }
    Print_(head);
    Size_(head);
    return 0;
}
/*
input: 2 1 5 3 4 8 9 -1
output: 
Your Linked List: 2 1 5 3 4 8 9 
Your linked list Size is: 7
*/