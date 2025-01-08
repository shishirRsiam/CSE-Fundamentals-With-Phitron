#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node*left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void reverse_(Node* root)
{
    queue<Node*>q;
    if(root) q.push(root);
    vector<int>v;

    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        v.push_back(p->val);
        // cout<<p->val<<" ";

        if(p->right) q.push(p->right);
        if(p->left) q.push(p->left);
    }
    
    reverse(v.begin(),v.end());
    for(int a:v)
    {
        cout<<a<<" ";
    }
}

void input_()
{
    Node* root;
    int v; cin>>v;
    if(v == -1) root = NULL;
    else root = new Node(v);

    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        Node* left; Node* right;
        int l,r; cin>>l>>r;

        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left=left;
        p->right=right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    reverse_(root);
}

int main()
{
    input_();
    return 0;
}