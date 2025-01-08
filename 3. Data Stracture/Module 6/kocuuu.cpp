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
void insert(Node*&head,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void print(Node* head)
{
    Node*tmp=head;
    int fre[100]={0};
    while(tmp!=NULL)
    {
        fre[tmp->vall]++;
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    bool flag = false;
    for(int i=0;i<100;i++)
    {
        if(fre[i]>0)
        {
            cout<<i<<" - "<<fre[i]<<endl;
        }
        if(fre[i]>1)
        {
            flag = true;
        }
    }
    flag == true ? cout<<"YES\n" : cout<<"NO\n";
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,val);
    }
    print(head);
    return 0;
}
/*
input: 2 4 5 6 7 4 -1
output: 2 4 5 6 7 4 
2 - 1
4 - 2
5 - 1
6 - 1
7 - 1
YES
*/