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


Node* sortedArrayToBST(vector<int>a,int l, int r)
{
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    root->left = sortedArrayToBST(a, l, mid-1);
    root->right = sortedArrayToBST(a, mid+1, r);
    return root;
}

int main()
{
    vector<int>a;
    while(true) {
        int v; cin>>v;
        if(v==-1) break;
        a.push_back(v);
    }

    Node* root = sortedArrayToBST(a,0,a.size()-1);
    levelOrder(root);
    return 0;
}


/*
input: 2 5 8 12 15 18 -1
*/