class Solution {
public:
    
    bool dfs(TreeNode* root, vector<char> &s, int r) {
        if(!root) return false;
        if( root->val == r) return true;
        s.push_back('L');
        if(dfs(root->left, s, r)) return true;
        s.pop_back();
        s.push_back('R');
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
        vector<char> s, d;
        dfs(n, s, startValue);
        dfs(n, d, destValue);
        string ans = "";
        for(int i = 0;i<s.size(); i++) 
            ans+= 'U';
        for(auto x : d) ans+=x;
        return ans;
     }
};