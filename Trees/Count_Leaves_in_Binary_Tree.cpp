/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        if(!root)return 0;
        if(!root->left and root->right==NULL)return 1;
        return countLeaves(root->right)+countLeaves(root->left);
    }
};
