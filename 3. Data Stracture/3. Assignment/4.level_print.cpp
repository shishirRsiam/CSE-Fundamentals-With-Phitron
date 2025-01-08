#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void level_print(Node* root)
{
    queue<pair<Node*,int>>q;
    q.push({root,0});

    int x; cin>>x;
    bool flag = true;
    while(!q.empty())
    {
        pair<Node*,int> p = q.front(); q.pop();

        Node* node = p.first;
        int level = p.second;

        if(level == x)
        {
            cout<<node->val<<" ";
            flag = false;
        }

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    if(flag) cout<<"Invalid\n";
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

        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    level_print(root);
}

int main()
{
    input_();
    return 0;
}