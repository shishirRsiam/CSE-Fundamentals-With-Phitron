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
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void _print_fun(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    while (true)
    {
        cout<<"\nOption 1: Print Linked List."<<endl;
        cout<<"Option 2: Insert Tail."<<endl;
        cout<<"Option 3: Break!"<<endl;

        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Your Linked List: ";
            _print_fun(head);
        }
        if(op==2)
        {
            int val;
            cin>>val;
            insert_tail(head,val);
        }

    }
    return 0;
}