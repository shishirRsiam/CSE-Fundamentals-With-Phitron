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
int main()
{
    Node* head = new Node(10); 
    Node* a = new Node(20); 
    Node* b = new Node(30); 
    Node* c = new Node(40); 
    Node* d = new Node(50); 
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->vall<<endl;
        tmp=tmp->next;
    }
    tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->vall<<endl;
        tmp=tmp->next;
    }
    return 0;
}