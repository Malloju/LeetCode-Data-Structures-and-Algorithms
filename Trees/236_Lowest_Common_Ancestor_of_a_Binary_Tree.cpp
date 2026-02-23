/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // FIX: Base case added
        if (root == NULL) return NULL;

        if (root == p || root == q) 
            return root;
        TreeNode* ls = lowestCommonAncestor(root->left, p, q);
        TreeNode* rs = lowestCommonAncestor(root->right, p, q);
        if (ls && rs) 
            return root;

        if (ls) 
            return ls;

        return rs;
    }
};
