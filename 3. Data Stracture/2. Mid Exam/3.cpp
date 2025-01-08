#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string vall;
    Node*next;
    Node*prev;
    Node(string vall)
    {
        this->vall=vall;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_(Node*&head,Node*&tail,string vall)
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

bool search_(Node*head,string nm)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->vall==nm)
        {
            return true;
        }
        tmp=tmp->next;
    }
    return false;
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        string vall;
        cin>>vall;
        if(vall=="end") break;
        insert_(head,tail,vall);
    }
    int t;
    cin>>t;
    Node* cur=head;
    while(t--)
    {
        string a,nm;
        cin>>a;
        if(a=="visit")
        {
            cin>>nm;
            bool flag = false;
            Node*tmp=head;
            while(tmp!=NULL)
            {
                if(tmp->vall==nm)
                {
                    flag=true;
                    break;
                }
                tmp=tmp->next;
            }
            if(flag==true)
            {
                cur=tmp;
            }
            flag==true ? cout<<cur->vall<<endl : cout<<"Not Available\n";
        }
        else if(a=="prev")
        {
            if(cur!=NULL && cur->prev!=NULL)
            {
                cur=cur->prev;
                cout<<cur->vall<<endl;
            }
            else cout<<"Not Available\n";
        }
        else if(a=="next")
        {
            if(cur!=NULL && cur->next!=NULL)
            {
                cur=cur->next;
                cout<<cur->vall<<endl;
            }
            else cout<<"Not Available\n";
        }
    }
    return 0;
}