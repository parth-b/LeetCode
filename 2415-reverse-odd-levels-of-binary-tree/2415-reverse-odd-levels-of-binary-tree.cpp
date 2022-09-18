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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int lvl = 0;
        vector<int> v;
        while(!q.empty()) {
            int sz = q.size();
            
            vector<int> l;
            for(int i = 0; i<sz; i++) {
                TreeNode* c = q.front(); q.pop();
                if(lvl%2) c->val = v[sz - i - 1];
                
                if(c->left) q.push(c->left), l.push_back(c->left->val);
                if(c->right) q.push(c->right), l.push_back(c->right->val);
            }
            v=l;
            lvl++;
        }
        return root;
    }
};