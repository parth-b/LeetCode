class Solution {
public:
    
    bool dfs(TreeNode* root, string &s, int r) {
        if(!root) return false;
        if( root->val == r) return true;
        s+= 'L';
        if(dfs(root->left, s, r)) return true;
        s.pop_back();
        s+='R';
        if(dfs(root->right, s, r)) return true;
         s.pop_back();
        return false;
    }
    
    TreeNode* lca (TreeNode* root, int start, int dest) {
        if(!root) return NULL;
        if(root->val == start or root->val == dest) return root;
        TreeNode* l,*r;
        l = lca(root->left, start, dest);
        r = lca(root->right, start, dest);
        if(l and r) return root;
        return l? l: r; 
    }
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* n = lca(root, startValue, destValue);
        string s = "", d = "";
        dfs(n, s, startValue);
        dfs(n, d, destValue);
        string ans = "";
        for(int i = 0;i<s.length(); i++) 
            ans+= 'U';
        
        return ans+d;
     }
};
