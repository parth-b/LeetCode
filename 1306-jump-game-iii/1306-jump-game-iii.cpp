class Solution {
public:
    
    bool dfs(vector<int>& arr, int s, vector<int>& vis) {
        if(s < 0 or s >= arr.size()) return false;
        if(arr[s] == 0) return true;
        if(vis[s]) return false;
        vis[s] = 1;
        return dfs(arr, s-arr[s], vis) or dfs(arr, s+arr[s], vis);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<int> vis(arr.size(), 0);
        return dfs(arr, start, vis);
    }
};