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

Node* input_()
{
    Node* root;
    int v; cin>>v;
    if(v == -1) root = NULL;
    else root = new Node(v);

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        Node* left;
        Node* right;
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
    return root;
}
vector<int>a;

void print_leaf(Node* root)
{
    if(root == NULL) return;
    
    if(root->left == NULL and root->right == NULL)
    {
        // mx = max(mx,root->val);
        a.push_back(root->val);
    }
    print_leaf(root->left);
    print_leaf(root->right);
}

int main()
{
    Node* root = input_();
    print_leaf(root);
    sort(a.begin(),a.end(),greater<int>());
    for(int v:a)
    {
        cout<<v<<" ";
    }
    
    return 0;
}