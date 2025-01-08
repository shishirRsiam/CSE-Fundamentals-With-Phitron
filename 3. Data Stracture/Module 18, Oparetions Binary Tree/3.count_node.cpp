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
        // 1st kaaj, ber kora...
        Node* p = q.front(); q.pop();

        // 2nd kaaj, input neowa...
        Node* left; Node* right;
        int l,r; cin>>l>>r;

        // check l or r NULL or NOT...
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        //connect kore deowa...
        p->left = left;
        p->right = right;

        // 3rd kaaj, add children...
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;

}

int count(Node*root)
{
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}

int main()
{
    Node* root = input_tree();
    cout<<"Tree Node Number is: "<<count(root)<<endl;
    return 0;
}
/*
input: 10 20 30 40 90 -1 50 -1 60 -1 100 70 80 -1 -1 -1 -1 -1 -1 -1 -1 
output: Tree Node Number is: 8
*/