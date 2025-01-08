#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string n;
    Node*next;
    Node*prev;
    Node(string n)
    {
        this->n=n;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_(Node*&head,Node*&tail,string n)
{
    Node*newnode=new Node(n);
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


int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        string n; cin>>n;
        if(n=="end") break;
        insert_(head,tail,n);
    }
    Node*cur=head;
    int t; cin>>t;
    while(t--)
    {
        string c; cin>>c;
        if(c=="visit")
        {
            string w; cin>>w;
            Node*tmp=head;
            bool flag = false;
            while(tmp!=NULL)
            {
                if(tmp->n==w)
                {
                    flag = true;
                    cur=tmp;
                }
                tmp=tmp->next;
            }
            flag ? cout<<cur->n<<endl : cout<<"Not Available\n";
        }
        else if(c=="next")
        {
            if(cur!=NULL && cur->next!=NULL)
            {
                cur=cur->next;
                cout<<cur->n<<endl;
            }
            else 
            {
                cout<<"Not Available\n";
            }
        }
        else if(c=="prev")
        {
            if(cur!=NULL && cur->prev!=NULL)
            {
                cur=cur->prev;
                cout<<cur->n<<endl;
            }
            else 
            {
                cout<<"Not Available\n";
            }
        }
    }
    return 0;
}