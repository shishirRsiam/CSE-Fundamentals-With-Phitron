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
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next=a;
    cout<<head->vall<<endl;
    cout<<head->next->vall<<endl;   
    return 0;
}