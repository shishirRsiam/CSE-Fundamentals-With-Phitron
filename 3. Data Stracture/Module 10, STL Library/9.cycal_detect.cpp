#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int vall;
    Node*next;
    Node(int vall)
    {
        this->vall=vall;
        this->next=NULL;
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
    tail=newnode;
}

bool cycale_(Node*head)
{
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
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
    cycale_(head)==true?cout<<"Cycle detect.\n":cout<<"Not cycle\n";
    return 0;
}