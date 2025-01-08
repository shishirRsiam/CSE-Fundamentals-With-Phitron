#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public: 
    int val; Node* left; Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isPerfect(Node* root)
{
    if(root == NULL) return true;

    if(root->left == NULL and root->right == NULL) return true;
    if(root->left == NULL or root->right == NULL) return false;

    bool l = isPerfect(root->left);
    bool r = isPerfect(root->right);

    return (l and r);
}

bool input_()
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

        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return isPerfect(root);
}

int main()
{
    if(input_()) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}