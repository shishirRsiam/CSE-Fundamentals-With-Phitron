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

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insert_head(Node* &head,int val)
{
    Node* newnode = new Node(val);
    newnode->next=head;
    head=newnode;
}

void insert_at_tril(Node* &head, int vall)
{
    Node* newnode = new Node(vall);
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

void delete_node(Node* &head,int pos) 
{
    if(head == NULL)
    {
        return;
    }
    if (pos == 0)
    {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
    else
    {
        Node* tmp = head;
        for(int i=1;i<=pos-1;i++)
        {
            tmp=tmp->next;
            if(tmp==NULL)
            {
                return;
            }
        }
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
        
        Node* del_node = tmp->next;
        tmp->next = tmp->next->next;
        delete del_node;
    }
}

int main()
{
    Node* head = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int pos,vall;
        cin>>pos>>vall;
        if(pos==0)
        {
            insert_head(head,vall);
        }
        if(pos==1)
        {
            insert_at_tril(head,vall);
        }
        if(pos==2)
        {
            delete_node(head,vall);
        }
        print_linked_list(head);
    }
    return 0;
}