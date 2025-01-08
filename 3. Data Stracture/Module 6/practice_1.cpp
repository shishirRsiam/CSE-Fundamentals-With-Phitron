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
void Insert(Node* &head,int val)
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
void Print(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        cout<<tmp->vall<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    tmp = head;
    int loop = cnt/2;
    cout<<loop<<endl;;
    for(int i=1;i<cnt;i++)
    {
        if(loop != i)
        {
            tmp=tmp->next;
        }
        else
        {
            if(cnt%2==1)
            {
                cout<<tmp->next->vall;
            }
            else
            {
                cout<<tmp->vall<<" "<<tmp->next->vall;
            }
        }
    }
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val== -1) break;
        Insert(head,val);
    }
    Print(head);
    return 0;
}