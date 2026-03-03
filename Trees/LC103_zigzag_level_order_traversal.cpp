// LC103 Zigzag Level Order Traversal

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};

        vector<vector<int>> ans;

        queue<TreeNode*> q;

        q.push(root);
        bool flag = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> level;

            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(!flag) {
                 reverse(level.begin(), level.end());
            }
            ans.push_back(level);
            flag = (!flag);
        }
        return ans;
    }
};
