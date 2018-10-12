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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return false;
        return recursePath(root, sum, 0);
    }
    
    bool recursePath(TreeNode* root, int sum, int curr){
        curr += root->val;
        if(root -> left == NULL && root -> right == NULL)
            return curr == sum;
        
        bool isLeft = false;
        bool isRight = false;
        
        if(root -> left != NULL)
            isLeft = recursePath(root -> left, sum, curr);
        if(root -> right != NULL)
            isRight = recursePath(root -> right, sum, curr);
        
        return isRight || isLeft;
    }
};