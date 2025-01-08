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

void insert_head(Node* &newhead,int vall)
{
    Node* newnode=new Node(vall);
    if(newhead==NULL)
    {
        newhead=newnode;
        return;
    }
    newnode->next=newhead;
    newhead=newnode;

}

void palindrome_(Node* head)
{
    Node* newhead=NULL;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        insert_head(newhead,tmp->vall);
        tmp=tmp->next;
    }
    tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    Node* newtmp=newhead;
    while(newtmp!=NULL)
    {
        cout<<newtmp->vall<<" ";
        newtmp=newtmp->next;
    }
    cout<<endl;
    tmp=head;
    newtmp=newhead;
    bool flag = true;
    while(tmp!=NULL)
    {
        if(tmp->vall != newtmp->vall) 
        {
            flag = false;
            break;
        }
        tmp=tmp->next;
        newtmp=newtmp->next;
    }
    flag == true ? cout<<"Linked List is Palindrome." : cout<<"Linked List is NOT Palindrome.";
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
    palindrome_(head);
    return 0;
}






