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
void insert(Node*&head,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void _print_(Node*head)
{
    Node*tmp=head;
    // cout<<"Your Liked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void _insert_pos_(Node*&head,int pos,int val)
{
    Node* newnode = new Node(val);
    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        Node* tmp = head;
        for(int i=1;i<=pos-1;i++)
        {
            tmp=tmp->next;
            if(tmp==NULL)
            {
                cout<<"Invalid\n";
                return;
            }
        }
        //tmp next ekhnlast er ghore..
        newnode->next=tmp->next;
        tmp->next=newnode;
    }
    _print_(head);
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert(head,vall);
    }
    // _print_(head);
    int t; cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        _insert_pos_(head,pos,val);
    }
    return 0;
}
/*
input:
10 20 30 -1
7
1 40
5 50
4 50
0 100
7 40
1 110
7 40
output:
10 40 20 30 || 10 40 20 30
Invalid || Invalid
10 40 20 30 50 || 10 40 20 30 50
100 10 40 20 30 50 || 100 10 40 20 30 50
Invalid || Invalid
100 110 10 40 20 30 50 || 100 110 10 40 20 30 50
100 110 10 40 20 30 50 40 || 100 110 10 40 20 30 50 40
*/