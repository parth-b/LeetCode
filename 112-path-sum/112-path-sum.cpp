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
    
 
    bool hasPathSum(TreeNode* root, int t, int cur = 0) {
       
        if(!root) return false;
        if(!root->left and !root->right)
            return cur + root->val == t;
        return hasPathSum(root->left, t,cur+root->val) or hasPathSum(root->right, t,cur+root->val);
    }
    
};