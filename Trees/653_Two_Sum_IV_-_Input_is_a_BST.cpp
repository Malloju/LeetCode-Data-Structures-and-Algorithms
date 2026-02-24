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
void inorder(TreeNode* root, vector<int>&vt){
    if(root==NULL)return;
    inorder(root->left,vt);
    vt.push_back(root->val);
    inorder(root->right,vt);
}
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)return false;
        vector<int>vt;
        inorder(root,vt);
        int n=vt.size();
        int start=0;
        int end=n-1;
        int sum=0;
        while(start<end){
            sum=vt[start]+vt[end];
            if(sum==k){
                return true;
            }else if(sum>k){
                end--;
            }else{
                start++;
            }
        }
        return false;
    }
};
