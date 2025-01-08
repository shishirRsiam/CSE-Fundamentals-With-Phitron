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
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
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
void Insert_tail_(Node* &head,int pos,int vall)
{
    Node* newnode = new Node(vall);
    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
        // return;
    }
    else
    {
        Node* tmp=head;
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
    }
    Print_(head);
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
        Insert_(head,tail,vall);
    }
    // Print_(head);
    int n; cin>>n;
    while(n--)
    {
        int pos,vall;
        cin>>pos>>vall;
        Insert_tail_(head,pos,vall);
        // Print_(head);
    }
    // Insert_tail_(head,1,100);
    // Print_(head);
    return 0;
}