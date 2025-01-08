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

void Insert_(Node*&head,Node*&tail,int vall)
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
    cout<<"Your Linked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
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

void MiddleNumber_(Node* head)
{
    Node* tmp = head;
    int loop = (Size_(head))/2;
    cout<<"Middle Vallue: ";
    for(int i=1;i<Size_(head);i++)
    {

        if(i!=loop)
        {
            tmp=tmp->next;
        }
        else
        {
            if(Size_(head)%2==0)
            {
                cout<<tmp->vall<<" "<<tmp->next->vall<<endl;
            }
            else
            {
                cout<<tmp->next->vall;
            }
        }
    }
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
    Print_(head);
    MiddleNumber_(head);
    // cout<<Size_(head);
    return 0;
}