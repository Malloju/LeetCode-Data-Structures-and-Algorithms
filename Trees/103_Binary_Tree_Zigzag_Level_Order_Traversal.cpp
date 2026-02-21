class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int count = 1;
        while(!q.empty()){
            int siz = q.size();
            vector<int> temp;
            for(int i = 0; i < siz; i++){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
            }
            if(count % 2 == 0) reverse(temp.begin(), temp.end());
            count++;
            ans.push_back(temp);
        }
        return ans;
    }
};
