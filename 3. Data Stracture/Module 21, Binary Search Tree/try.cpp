class Solution
{
public:
    TreeNode *insert(TreeNode *root, int val)
    {
        if (!root)
        {
            return new TreeNode(val);
        }

        if (val > root->val)
        {
            root->right = insert(root->right, val);
        }
        else
        {
            root->left = insert(root->left, val);
        }

        return root;
    }

    void addV(TreeNode *root, vector<int> &a, int l, int h)
    {
        if (!root)
            return;

        if (root->val >= l && root->val <= h)
        {
            a.push_back(root->val);
        }

        addV(root->left, a, l, h);
        addV(root->right, a, l, h);
    }

    TreeNode *trimBST(TreeNode *root, int low, int high)
    {
        vector<int> a;
        addV(root, a, low, high);

        TreeNode *trimmedBST = nullptr;
        for (int v : a)
        {
            trimmedBST = insert(trimmedBST, v);
        }

        return trimmedBST;
    }
};
