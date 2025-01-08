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

void preOrder(Node*root)
{
    if(root == NULL) return;

    cout<<root->val<<" ";

    preOrder(root->left);

    preOrder(root->right);

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

    preOrder(root);

    return 0;
}

/*
input: 10 20 30 40 50 60 70 80 90 100
output: 10 20 40 60 90 100 30 50 70 80 
*/