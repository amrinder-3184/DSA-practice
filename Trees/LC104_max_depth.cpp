// Leetcode 104

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int leftDepth = 0;
        int rightDepth = 0;
        if(root == NULL){
            return 0;
        }
        leftDepth = maxDepth(root->left);
        rightDepth = maxDepth(root->right);

        return 1+ max(leftDepth, rightDepth);
    }
};
