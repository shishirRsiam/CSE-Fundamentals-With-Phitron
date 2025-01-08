#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int vall;
    Node*next;
    Node*prev;
    Node(int vall)
    {
        this->vall=vall;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_(Node*&head,Node*&tail,int vall)
{
    Node*newnode=new Node(vall);
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

void print_(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->vall<<" ";
        head=head->next;
    }
    cout<<endl;
}

void is_palindrome_(Node*head,Node*tail)
{
    bool flag = true;
    while(head!=tail)
    {
        if(head->vall!=tail->vall)
        {
            flag =false;
            break;
        }
        head=head->next,tail=tail->prev;
    }
    // if(head->vall!=tail->vall)
    // {
    //     flag = false;
    // }
flag == true ? cout<<"YES\n" : cout<<"NO\n";
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head,tail,vall);
    }
    print_(head);
    is_palindrome_(head,tail);
    return 0;
}