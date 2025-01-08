/* package whatever; // don't place package name! */

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }    
};
void insert_tail(Node*&head,int val)
{
    Node* newnode=new Node(val);
    Node*tmp=head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    else{
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    }

}
int sze(Node*head)
{
    Node*tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

void print_node(Node*head)
{
    Node*tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    tmp=head;

    if(count%2==0)
    {
        for(int i=0;i<(count/2)-1;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
        

    }
    else if(count%2==1)
    {
        for(int j=0;j<(count/2);j++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
        
    }
    // if((sze(head))%2==0)
    // {
    //     for(int i=0;i<((sze(head))/2);i++)
    //     {
    //         tmp=tmp->next;
    //     }
    //     cout<<tmp->val<<" "<<tmp->next->val<<endl;
    //     return;

    // }
    // else if((sze(head))%2==1)
    // {
    //     for(int j=0;j<((sze(head))/2)-1;j++)
    //     {
    //         tmp=tmp->next;
    //     }
    //     cout<<tmp->val<<endl;
    //     return;
    // }
    
}
int main()
{
    Node*head=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==(-1))
        {
            break;
        }
        else
        {
            insert_tail(head,val);
        }
    }
    
    
    print_node(head);
    return 0;
}