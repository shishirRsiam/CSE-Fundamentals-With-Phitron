#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val; 
    Node*left = NULL;
    Node*right = NULL;
    Node(int val)
    {
        this->val=val;
        left = right = nullptr;
    }
};

Node* input()
{
    Node* root = NULL;
    int v; cin>>v;
    if(v==-1) root=NULL;
    else root = new Node(v);

    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        Node* left; Node* right;
        int l,r; cin>>l>>r;
        if(l==-1) left = NULL;
        else left = new Node(l);
        if(r==-1) right = NULL;
        else right = new Node(r);
        
        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void levelOrder(Node* root)
{
    if(!root) return;
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    cout<<endl;
}

bool BinaryTreeSreach(Node* root,int x)
{
    if(!root) return false;
    if(root->val == x) return true;

    if(x < root->val) 
        return BinaryTreeSreach(root->left,x);
    // else 
    {
        return BinaryTreeSreach(root->right,x);
    }

}

int main()
{
    Node* root = input();
    levelOrder(root);
    if(BinaryTreeSreach(root,500)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

/*
input: 
10
5 15 
2 6 12 16
-1 3 -1 -1 -1 -1 -1 -1
*/