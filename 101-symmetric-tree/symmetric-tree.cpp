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
    bool s(TreeNode*x,TreeNode*y)
    {
        if(x==NULL && y==NULL)
        {
            return true;
        }
        if(x==NULL || y==NULL)
        {
            return false;
        }
        if(x->val != y->val)
        {
            return false;
        }
        bool a=s(x->left ,y->right);
        bool b=s(x->right,y->left);
        if(a && b)
        {
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return s(root->left,root->right);
    }
};