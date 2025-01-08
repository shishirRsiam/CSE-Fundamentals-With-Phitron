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

void search_(Node* head,int x)
{
    Node* tmp=head;
    int flag = -1;
    int cnt=0;
    while(tmp!=NULL)
    {
        if(tmp->vall==x)
        {
            flag = cnt;
            break;
        }
        cnt++;
        tmp=tmp->next;
    }
    cout<<flag<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Node* head=NULL;
        Node* tail=NULL;
        while(true)
        {
            int vall;
            cin>>vall;
            if(vall==-1) break;
            insert_(head,tail,vall);
        }
        int x;
        cin>>x;
        search_(head,x);
    }
    return 0;
}