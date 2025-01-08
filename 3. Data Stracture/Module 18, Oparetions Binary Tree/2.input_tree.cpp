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

Node* input_tree()
{
    Node*root;
    int v; cin>>v;
    if(v == -1) root = NULL;
    else root = new Node(v);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // 1st line theke ana...
        Node* p = q.front(); q.pop();

        // 2nd input neowa...
        int l,r;
        cin>>l>>r;
        Node*left;
        Node*right;
        if(l == -1) left = NULL; 
        else left = new Node(l);
        if( r == -1) right = NULL;
        else right = new Node(r);

        p->left=left;
        p->right=right;

        // 3rd children ghuloke add kora...
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void levelOrder(Node*root)
{
    if(root == NULL)
    {
        cout<<"Tree is NULL.\n";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1st kaaj, line theke ana...
        Node* p = q.front();
        q.pop();

        // 2nd kaaj, ja ja kaj ache segula kora...
        cout<<p->val<<" ";

        // 3rd kaaj, tar children guloke line e diye deowa...
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

int main()
{
    Node* root = input_tree();
    levelOrder(root);
    return 0;
}

/*
input: 10 20 30 40 90 -1 50 -1 60 -1 100 70 80 -1 -1 -1 -1 -1 -1 -1 -1 
output: 10 20 30 40 90 50 60 100 70 80 
*/