#include<bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val; 
    Node* left = NULL;
    Node* right = NULL;
    Node(int val)
    {
        this->val = val;
        left = right = nullptr;
    }
};

Node* input()
{
    Node* root = NULL;
    int v; cin >> v;
    if(v == -1) root = NULL;
    else root = new Node(v);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        Node* left; Node* right;
        int l, r; cin >> l >> r;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
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
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* p = q.front(); q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    cout << endl;
}

void insertBST(Node* &root, int x)
{
    if(!root)
    {
        root = new Node(x);
        return;
    }

    if(x < root->val) insertBST(root->left,x);

    else insertBST(root->right,x);
}

int main()
{
    Node* root = input();
    insertBST(root, 5);
    cout << "after insertion: ";
    levelOrder(root);

    return 0;
}


/*
input: 
20 
10 30 
-1 15 25 35
-1 -1 -1 -1 -1 -1 
*/