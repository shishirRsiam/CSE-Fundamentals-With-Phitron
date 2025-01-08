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
    else 
    {
        return BinaryTreeSreach(root->right,x);
    }

}

    bool isValidBSTHelper(TreeNode* node, long long lower, long long upper) {
        if (node == nullptr) {
            return true;
        }
        
        if (node->val <= lower || node->val >= upper) {
            return false;
        }
        
        return isValidBSTHelper(node->left, lower, node->val) &&
               isValidBSTHelper(node->right, node->val, upper);
    }

bool isValidBST(Node* root) 
{
    if(!root) return true;
    if(root->left and root->val <= root->left->val) return false;
    if(root->right and root->val >= root->right->val) return false;
    return isValidBST(root->left) and isValidBST(root->right);
}

int main()
{
    Node* root = input();
    levelOrder(root);

    if(isValidBST(root)) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

/*
input 1: valid BST
7
4 8 
3 5 7 9
-1 -1 -1 -1 -1 -1 -1 -1

input 2: not valid BST
7
4 8 
-1 -1 6 9
-1 -1 -1 -1 

input 2: not valid BST
4 
2 8
3 -1 6 -1
-1 -1 -1 -1
*/