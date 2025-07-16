/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
     bool isLeaf(Node* node) {
        return (node->left == NULL && node->right == NULL);
    }
   void addLeftBoundary(Node* node, vector<int>& result) {
        Node* cur = node->left;
        while (cur) {
            if (!isLeaf(cur)) {
                result.push_back(cur->data);  // only non-leaf
            }
            if (cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }
    void addLeaves(Node* node, vector<int>& result) {
        if (node == NULL) return;

        if (isLeaf(node)) {
            result.push_back(node->data);
            return;
        }

        addLeaves(node->left, result);   // go left
        addLeaves(node->right, result);  // go right
    }
      void addRightBoundary(Node* node, vector<int>& result) {
        Node* cur = node->right;
        vector<int> temp;

        while (cur) {
            if (!isLeaf(cur)) {
                temp.push_back(cur->data);  // store temporarily
            }

            if (cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }
        for (int i = temp.size() - 1; i >= 0; i--) {
            result.push_back(temp[i]);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int> result;

        if (root == NULL)
            return result;

        // Step 1: Add root if it's not a leaf
        if (!isLeaf(root))
            result.push_back(root->data);

        // Step 2: Add left boundary
        addLeftBoundary(root, result);

        // Step 3: Add all leaves
        addLeaves(root, result);

        // Step 4: Add right boundary
        addRightBoundary(root, result);

        return result;
         
    }
};