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

int size_(Node*head)
{
    Node* tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        size++;
        tmp=tmp->next;
    }
    return size;
}

void insert_head(Node* &head,Node*&tail,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_pos(Node* &head,int pos,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    if(pos==0)
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid\n";
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void print_l_(Node*head)
{
    cout<<"L -> ";
    while(head!=NULL)
    {
        cout<<head->vall<<" ";
        head=head->next;
    }
    cout<<endl;
}

void print_r_(Node*tail)
{
    cout<<"R -> ";
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
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(size_(head)<pos)
        {
            cout<<"Invalid\n";
        }
        else if(pos==0)
        {
            insert_head(head,tail,val);
            print_l_(head);
            print_r_(tail);
        }
        else if(size_(head)==pos)
        {
            insert_tail(head,tail,val);
            print_l_(head);
            print_r_(tail);
        }
        else
        {
            insert_pos(head,pos,val);
            print_l_(head);
            print_r_(tail);
        }

    }
    return 0;
}