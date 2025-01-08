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
void insert_tail(Node* &head,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void _print_fun(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_ant_pos(Node* &head,int pos,int val)
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
        }
        newnode->next=tmp->next;
        tmp->next=newnode;
    }
}
void Delete_Pos(Node*&head,int pos)
{
    if(pos==0)
    {
        head = head->next;
        delete head;
        return;
    }
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
       tmp=tmp->next;
    }
    Node* delete_ = tmp->next;
    tmp->next=tmp->next->next;
    delete delete_;
}
int main()
{
    Node* head = NULL;
    while (true)
    {
        cout<<"\nOption 1: Print Linked List."<<endl;
        cout<<"Option 2: Insert Tail."<<endl;
        cout<<"Option 3: Insert Any Position."<<endl;
        cout<<"Option 4: Delete Position."<<endl;

        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Your Linked List: ";
            _print_fun(head);
        }
        if(op==2)
        {
            int val;
            cin>>val;
            insert_tail(head,val);
        }
        if(op==3)
        {
            int pos,val;
            cin>>pos>>val;
            insert_ant_pos(head,pos,val);
        }
        if(op==4)
        {
            int pos;
            cin>>pos;
            Delete_Pos(head,pos);
        }
    }
    return 0;
}