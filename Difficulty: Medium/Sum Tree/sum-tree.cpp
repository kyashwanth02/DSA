/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  int helper(Node*root,bool &sum)
  {
      if(root==NULL)
      {
          return 0;
      }
      if(root->left==NULL && root->right==NULL)
      {
          return root->data;
      }
      int  x=helper(root->left,sum);
      int  y=helper(root->right,sum);
      if(root->data!=x+y)
      {
          sum=false;
      }
      return root->data+x+y;
  }
    bool isSumTree(Node* root) {
        // Your code here
       bool issum=true;
       helper(root,issum);
       return issum;
    }
};