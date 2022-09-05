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
    
    TreeNode* buildtree(vector<int> a, int l, int r){
        if(l>r) return nullptr;
        
        TreeNode* root = new TreeNode(a[l]);
        //if(l==r) return root;
        
        int s=l+1;
        while(s<=r && a[s]<a[l]) s++;
        root->left=buildtree(a, l+1, s-1);
        root->right=buildtree(a, s, r);
        
        return root;
         
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       
        int n=preorder.size();
        return buildtree(preorder, 0 ,n-1);
    }
};