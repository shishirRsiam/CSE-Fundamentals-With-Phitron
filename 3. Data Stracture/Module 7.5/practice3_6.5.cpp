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
    Node* newnode=new Node(val);
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
void p_list(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    cout<<"Linked List: ";
    while(tmp!=NULL)
    {
        cnt++;
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<"Linked List Count: "<<cnt<<endl;
    int loops = cnt/2;
    tmp=head;
    for(int i=1;i<cnt;i++)
    {
        if(i!=loops) 
        {
            tmp=tmp->next;
        }
        else
        {
            cout<<"Middle Element: ";
            if(cnt%2==1) // cnt jodi odd 
            {
                cout<<tmp->next->vall<<" ";
            }
            else //cnt jodi even
            {
                cout<<tmp->vall<<" "<<tmp->next->vall;
            }
        }
    }
}
int main()
{
    Node* head = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        // cout<<val<<" ";
        insert(head,val);
    }
    p_list(head);
    
    return 0;
}
/*
input_1: 2 4 6 8 10 -1
output_1:
Linked List: 2 4 6 8 10 
Linked List Count: 5
Middle Element: 6 

input_2: 1 2 3 4 5 6 -1
output_2:
Linked List: 1 2 3 4 5 6 
Linked List Count: 6
Middle Element: 3 4
*/