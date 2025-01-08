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

void insert_tail(Node* &head,Node* &tail,int vall)
{
    Node* newnode = new Node(vall);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int Size_(Node*head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

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

void decending_order(Node* &head)
{
    for(Node* i=head; i->next != NULL; i=i->next)
    {
        for(Node* j=i->next; j != NULL; j=j->next)
        {
            if(i->vall<j->vall)
            {
                swap(i->vall,j->vall);
            }
        }
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_tail(head,tail,vall);
    }
    // print_linked_list(head);
    decending_order(head);
    print_linked_list(head);
    return 0;
}