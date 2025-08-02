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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(!root)return result;
        queue<TreeNode*>q;
        q.push(root);
        bool left=true;
        while(!q.empty())
        {
            int l=q.size();
            vector<int>current;
            for(int i=0;i<l;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                if(left)
                {
                    current.push_back(node->val);
                }
                else
                {
                    current.insert(current.begin(),node->val);
                }
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            
            }
            result.push_back(current);
            left=!left;
        }
        return result;
    }
};