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

    if(v==-1) root=NULL;
    else root = new Node(v);

    queue<Node*>q;
    if(root) q.push(root);

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
int sum = 0;
void preOrder(Node* root)
{
    if(root == NULL) return;
    if(!root->left and !root->right) sum+=root->val;
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node* root = input_();
    preOrder(root);
    cout<<sum<<endl;
    return 0;
}