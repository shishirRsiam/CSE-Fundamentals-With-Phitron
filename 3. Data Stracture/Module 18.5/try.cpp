#include<bits/stdc++.h>
using namespace std;

// Node Class
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


// Input Node 
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


// Is Node Present?
bool isNodePresent(Node* root, int x) 
{
    if(root == NULL) return false;
    if(root->val == x) return true;

    bool left = isNodePresent(root->left,x);
    bool right = isNodePresent(root->right,x);

    return (left || right);

}


// Node Level
int nodeLevel(Node* root, int searchedValue)
{
    queue<pair<Node*,int>> q;
    q.push({root,1});

    while(!q.empty())
    {
        pair<Node*,int> parent = q.front();
        q.pop();
        
        Node* node = parent.first;
        int level = parent.second;
        
        if(node->val == searchedValue) return level;

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
}


// Left View Of a Binary Tree
vector<int> getLeftView(Node* root)
{
    bool f[3005] = {false};
    vector<int>ans;

    queue<pair<Node*,int>> q;
    if(root) q.push({root,1});

    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        q.pop();

        Node* node = p.first;
        int level = p.second;

        if(f[level] == false)
        {
            ans.push_back(node->val);
            f[level] = true;
        }

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});

    }
    return ans;
}


// Diameter Of Binary Tree
int mx = 0;
int mxh(Node* root)
{
    if(root == NULL) return 0;

    int l = mxh(root->left);
    int r = mxh(root->right);

    mx = max(mx,l+r);

    return max(l,r)+1;
}
int diameterOfBinaryTree(Node* root)
{
	mx = 0;
    mxh(root);
    return mx;
}


// Special Binary Tree
bool isSpecialBinaryTree(Node* root)
{
    if(root->left == NULL and root->right==NULL) return true;
    if(root->left == NULL or root->right == NULL) return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);

    if(l == false || r == false ) return false;
    return true;

}


// Reverse Level Order Traversal
vector<int> reverseLevelOrder(Node* root)
{
    vector<int>a;

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        a.push_back(p->val);

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    reverse(a.begin(),a.end());

    return a;
}


int main()
{
    Node* root = input_tree();

    

    return 0;
}