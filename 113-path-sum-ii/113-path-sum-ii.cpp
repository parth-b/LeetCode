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
    
    void bt(vector<vector<int>>& ans, TreeNode* root, int t, vector<int> &cur) {
        
        if( !root) return;
        cur.push_back(root->val);
        t-=root->val;
        if(t == 0 and !root->left and !root->right) {
            ans.push_back(cur);
            //return;
        }
        
        
        bt(ans, root->left, t, cur);
        bt(ans, root->right, t, cur);
        
        cur.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> cur = {};
        bt(ans, root, targetSum, cur);
        return ans;
    }
};