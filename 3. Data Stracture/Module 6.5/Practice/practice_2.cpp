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

void Insert_(Node* &head,Node*&tail,int vall)
{
    Node* newnode=new Node(vall);
    if(head==NULL)
    {
        head = newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void Print_(Node* head)
{
    Node* tmp = head;
    cout<<"Your Linked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void Fre_(Node* head)
{
    Node* tmp=head;
    int fre[100]={0};
    while(tmp!=NULL)
    {
        fre[tmp->vall]++;
        tmp=tmp->next;
    }
    bool flag=false;
    for(int i=0;i<100;i++)
    {
        if(fre[i]>0)
        {
            cout<<i<<" - "<<fre[i]<<endl;
        }
        if(fre[i]>1)
        {
            flag = true;
            // break;
        }
    }
    cout<<"Your Linked List Available Double Vallue?\n";
    flag == true ? cout<<"- YES" : cout<<"- NO";
}

int main()
{
    Node* head = NULL;
    Node* tail=NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        Insert_(head,tail,vall);
    }
    Print_(head);
    Fre_(head);
    return 0;
}