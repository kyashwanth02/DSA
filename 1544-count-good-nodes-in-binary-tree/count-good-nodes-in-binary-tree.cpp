/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode*node,int maxi)
    {
        if(node==nullptr)return 0;
        int c=0;
        if(node->val>=maxi)
        {
            c=1;
        }
        int n=max(node->val,maxi);
        c+=dfs(node->left,n);
        c+=dfs(node->right,n);
        return c;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,INT_MIN);
    }
};