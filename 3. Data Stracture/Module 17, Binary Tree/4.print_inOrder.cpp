#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void inOrder(Node*root)
{
    if(root == NULL) return;

    inOrder(root->left);

    cout<<root->val<<" ";
    
    inOrder(root->right);
}

int main()
{

    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    f->right=g;

    inOrder(root);

    return 0;
}

/*
input: 10 20 30 40 50 60 70 80 90 100
output: 40 60 20 90 100 10 30 70 80 50 
*/
