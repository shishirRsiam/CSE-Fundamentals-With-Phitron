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
void Insert_tail_(Node* &head,Node* &tail,int vall)
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
void Print_(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void sort_list(Node* &head)
{
    for(Node* i=head;i->next != NULL;i=i->next)
    {
        for(Node* j=i->next;j != NULL;j=j->next)
        {
            if(i->vall > j->vall)
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
        Insert_tail_(head,tail,vall);
    }
    Print_(head);
    sort_list(head);
    Print_(head);
    return 0;
}