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
int Size_(Node* head)
{
    Node* tmp=head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int Search_(Node* head,int x)
{
    int ans = -1;
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        if(tmp->vall==x)
        {
            ans=cnt;
            break;
        }
        cnt++;
        tmp=tmp->next;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
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
        int x;
        cin>>x;
        cout<<Search_(head,x)<<endl;;
    }
    return 0;
}