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
void input_linked_list(Node*&head,Node*&tail,int vall)
{
    Node* newnode = new Node(vall);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    tail=newnode;
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_tail(Node* &head,Node* &tail,int vall)
{
    Node* newnode = new Node(vall);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int size(Node* head)
{
    Node* tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void delete_any_pos(Node* &head,int pos)
{
    if(pos==0)
    {
        head = head->next;
        delete head;
        return;
    }
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp->next==NULL)
        {
            cout<<"Invalid Request!"<<endl;
            return;
        }
    }
    Node* tmp_delete = tmp->next;
    tmp->next=tmp->next->next;
    delete tmp_delete;
}
void insert_head(Node* &head,int vall)
{
    Node* newnode = new Node(vall);
    newnode->next = head;
    head = newnode;
}
void insert_any_pos(Node* head,int pos,int vall)
{
    Node* newnode = new Node(vall);
    Node* tmp = head;
    for(int i=0;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        cout<<"\nOption 1: Input Linked List.\n";
        cout<<"Option 2: Insert Any Position\n";
        cout<<"Option 3: Delete Any Position\n";
        cout<<"Option 7: Print Linked Head and Tail.\n";
        cout<<"Option 8: Print Linked List Size.\n";
        cout<<"Option 9: Print Linked List.\n";
        cout<<"Option 0: Break Program.\n";
        int op;
        cin>>op;
        if(op==0) // break
        {
            cout<<"Program RUN end!\n";
            break;
        }
        if(op==1) // user input
        {
            while(true)
            {
                int vall;
                cin>>vall;
                if(vall == -1) break;
                input_linked_list(head,tail,vall);
            }
        }
        if(op==2)
        {
            int pos,vall;
            cin>>pos>>vall;
            if(pos==0)
            {
                insert_head(head,vall);
            }
            else if(pos==size(head))
            {
                insert_tail(head,tail,vall);
            }
            else
            {
                insert_any_pos(head,pos,vall);
            }
        }
        if(op==3)
        {
            int pos;
            cin>>pos;
            delete_any_pos(head,pos);
        }
        if(op==7) // Print Linked Head and Tail
        {
            cout<<"Head and Tail: "<<head->vall<<" "<<tail->vall<<endl;
        }
        if(op==8)
        {
            cout<<"Linked List Size: "<<size(head)<<endl;
        }
        if(op==9) // print linked list
        {
            cout<<"Your Linked List: ";
            print_linked_list(head);
        }
    }
    return 0;
}