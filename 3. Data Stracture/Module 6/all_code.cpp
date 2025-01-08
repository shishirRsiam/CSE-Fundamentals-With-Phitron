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
void print_(Node* head) // print funtions!!
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<"Your Linked List Print Successfull."<<endl;
}
void insert_head(Node* &head,int val) //insert at head!!
{
    Node* newnode = new Node(val);
    newnode->next=head;
    head=newnode;
    cout<<"Your Vallue "<<val<<" Inserted at Head."<<endl;
}
void insert_at_tril(Node* &head, int vall) // insert tril funtion!!
{
    Node* newnode = new Node(vall);
    if(head==NULL)
    {
        head=newnode;
        cout<<"Your Vallue "<<vall<<" Inserted at Head."<<endl;
        return;
    }
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<"Your Vallue "<<vall<<" Inserted at Tail."<<endl;
}
void insert_any_position(Node* &head,int val,int pos) //insert any position funtions!!
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
        cout<<"Your Vallue "<<val<<" Inserted at Head."<<endl;
    }
    else
    {
        for(int i=1;i<=pos-1;i++)
        {
            tmp=tmp->next;
            if(tmp==NULL)
            {
                cout<<pos<<" Position Not Available This Note!"<<endl;
                return;
            }
        }
        newnode->next=tmp->next;
        tmp->next=newnode;
        cout<<"Your Vallue "<<val<<" Inserted at "<<pos<<"no: Position."<<endl;
    }
}
void delete_node(Node* &head,int pos) // delete position!
{
    if(head==NULL)
    {
        cout<<"Head is Emty This Note!"<<endl;
        return;
    }
    else if(pos==0)
    {
        head=head->next;
        delete head;
    }
    else
    {
        Node* tmp = head;
        for(int i=1;i<=pos-1;i++)
        {
            tmp=tmp->next;
            if(tmp==NULL)
            {
                cout<<pos<<" Position Not Available This Note!"<<endl;
                return;
            }
        }
        if(tmp->next==NULL)
        {
            cout<<pos<<" Position Not Available This Note!"<<endl;
            return;
        }
        Node* deletenode = tmp->next;
        tmp->next=tmp->next->next;
        delete deletenode;
    }
    cout<<pos<<"no: Position Delete!"<<endl;
}

int main()
{
    Node* head = NULL;
    while(true)
    {
        // cout<<"\n-> Option 1: Print Linked List."<<endl; // No eror. || 14 Number line start this funtions.
        // cout<<"-> Option 2: Insert at Head."<<endl; // No eror. || 24 Number line start this funtions.
        // cout<<"-> Option 3: Insert at Tail."<<endl; //  || 31 Number line start this funtions.
        // cout<<"-> Option 4: Insert at Any Position."<<endl; // Error Done || 48 Number line start this funtions.
        // cout<<"-> Option 5: Delete Node in Position."<<endl;
        // cout<<"-> Option 9: Break!"<<endl; // No eror.
        // cout<<"Select Your Option: ";
        int op;
        cin>>op;
        cout<<"You Select: "<<op<<endl;
        if(op==1)
        {
            cout<<"Your Linked List: ";
            print_(head);
        }
        else if(op==2)
        {
            int val;
            cout<<"Enter The Vallue: ";
            cin>>val;
            insert_head(head,val);
        }
        else if(op==3)
        {
            int val;
            cout<<"Enter The Vallue: ";
            cin>>val;
            insert_at_tril(head,val);
        }
        else if(op==4)
        {
            int val,pos;
            cout<<"Enter The Position: ";
            cin>>pos;
            cout<<"Enter The Vallue: ";
            cin>>val;
            insert_any_position(head,val,pos);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter The Position: ";
            cin>>pos;
            delete_node(head,pos);
            // cout<<"This Option is updating! Please Wait Sometimes! Thank You!"<<endl;
        }
        else if(op==9)
        {
            cout<<"Your Program Run END!"<<endl;
            break; 
        }
        else
        {
            cout<<"You're Wrong Option Selected! Follow The Options!"<<endl;
        }
    }
    return 0;
}