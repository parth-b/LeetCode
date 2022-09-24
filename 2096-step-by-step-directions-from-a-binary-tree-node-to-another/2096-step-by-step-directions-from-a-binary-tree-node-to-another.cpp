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
    
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string s = "", d = "";
        dfs(root, s, startValue);
        dfs(root, d, destValue);
        reverse(s.begin(), s.end());
        reverse(d.begin(), d.end());
        
        while(!s.empty() and !d.empty() and s.back() == d.back()){
            s.pop_back();
            d.pop_back();

        }
        return string(s.size(), 'U') + string(d.rbegin(), d.rend());
     }
};