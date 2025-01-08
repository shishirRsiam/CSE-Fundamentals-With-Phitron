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

int size_(Node* head)
{
    int size=0;
    while(head!=NULL)
    {
        size++;
        head=head->next;
    }
    return size;
}

void compare_(Node*head,Node*head2)
{
    bool flag = true;
    if(size_(head)==size_(head2))
    {
        while(head!=NULL)
        {
            if(head->vall!=head2->vall)
            {
                flag = false;
                break;
            }
            head=head->next,head2=head2->next;
        }
    }
    else
    {
        flag = false;
    }
    flag==true?cout<<"YES\n":cout<<"NO\n";
}

void print_normal_(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->vall<<" ";
        head=head->next;
    }
    cout<<endl;
}

void print_reverse_(Node*tail)
{
    while(tail!=NULL)
    {
        cout<<tail->vall<<" ";
        tail=tail->prev;
    }
    cout<<endl;
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
    Node*head2=NULL;
    Node*tail2=NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head2,tail2,vall);
    }

    print_normal_(head);
    print_reverse_(tail2);
    compare_(head,head2);
    return 0;
}