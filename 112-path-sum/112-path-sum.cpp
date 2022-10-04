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
    
    bool dfs(TreeNode* root, int cur, int t) {
        if(!root) return false;
        if(!root->left and !root->right)
            return cur + root->val == t;
        return dfs(root->left, cur+root->val, t) or dfs(root->right, cur+root->val, t);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return dfs(root, 0, targetSum);
    }
};