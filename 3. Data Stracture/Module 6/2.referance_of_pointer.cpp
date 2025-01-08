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
void insert_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    // tmp ekhon last node e.
    tmp->next=newnode;
}
void Print_Linked_List(Node* head)
{
    cout<<"Your Linked List: ";
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->vall<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        cout<<"\n\nOption 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Terminated! or Breack!"<<endl;
        cout<<"Select Your Option: ";
        int op;
        cin>>op;
        cout<<"You Select: "<<op<<endl;
        if(op==1)
        {
            cout<<"Enter Vallue: ";
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            Print_Linked_List(head);
        }
        else if(op==3)
        {
            cout<<"Your Teminal is Break!\n";
            break;
        }
        else
        {
            cout<<"- You're Wrong Selected! Please Right Options Selects."<<endl;
        }
    }
    return 0;
}