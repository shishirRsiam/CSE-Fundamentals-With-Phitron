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

void compare_(Node* head,Node* head2)
{
    Node* tmp=head;
    Node* tmp2=head2;
    bool flag = true;
    while(tmp!=NULL && tmp2!=NULL)
    {
        if(tmp->vall != tmp2->vall)
        {
            flag = false;
            break;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    if((tmp != NULL) != (tmp2 != NULL))
    {
        flag = false;
    }
    flag == true ? cout<<"YES\n" : cout<<"NO";
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head,tail,vall);
    }
    Node* head2=NULL;
    Node* tail2=NULL;
    while (true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_(head2,tail2,vall);
    }
    compare_(head,head2);
    
    return 0;
}