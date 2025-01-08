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
        head=newnode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void _print_(Node*head)
{
    Node*tmp=head;
    cout<<"Linked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    tmp=head;
    bool flag = true;
    while(tmp!=NULL && tmp->next!=NULL)
    {
        if((tmp->vall) > (tmp->next->vall))
        {
            flag = false;
            break;
        }
        tmp=tmp->next;
    }
    cout<<endl;
    cout<<"- Linked List is Sorted?\nAns: ";
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
    _print_(head);
    return 0;
}
/*
input_1: 1 5 6 8 9 -1
output_1: 
Linked List: 1 5 6 8 9 
- Linked List is Sorted?
Ans: YES

input_2: 2 4 6 5 8 4 -1
output_2: 
Linked List: 2 4 6 5 8 4 
- Linked List is Sorted?
Ans: NO
*/