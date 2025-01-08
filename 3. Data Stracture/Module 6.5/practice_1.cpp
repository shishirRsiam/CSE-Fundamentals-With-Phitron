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
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void print_fun(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<"Count: "<<cnt;
}
int main()
{
    Node * head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail(head,val);
    }
    print_fun(head);
    return 0;
}
/*
input: 2 1 5 3 4 8 9 -1
output: 2 1 5 3 4 8 9 
Count: 7
*/