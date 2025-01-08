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

void Middle_2(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cnt%2==1 ? cout<<"Middle Num: "<<slow->vall<<endl : cout<<"Middle Num: "<<slow->vall<<" "<<slow->next->vall<<endl;
}

void Middle_(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"Middle Num: "<<slow->vall<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        insert_tail(head,tail,vall);
    }
    print_linked_list(head);
    Middle_2(head);
    return 0;
}