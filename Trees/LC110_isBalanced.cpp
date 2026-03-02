// LeetCode 110 isBalanced

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL)return 0;

        int leftht = height(root->left);
        if(leftht == -1) return -1;

        int rightht = height(root->right);
        if (rightht == -1) return -1;
        
        if(abs(leftht - rightht) > 1)
        return -1;

        return 1 + max(leftht, rightht);
    }

    bool isBalanced(TreeNode* root) {
       return height(root) != -1;
    }
};
