class Solution {
public:
    
    void dfs(int i, unordered_map<int,vector<int>>& m, int &count, vector<int> &vis) {
        if(!vis[i]) {
            vis[i] = 1;
            count++;
            for(auto x : m[i])
                dfs(x, m, count, vis);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> m; 
        for(int i=0;i<edges.size();i++){
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        long long ans =(long long) n * (n-1)/2;
        vector<int> vis(n, 0);
        
        for(int i = 0; i<n; i++) {
            if(!vis[i]) {
                int count = 0;
                dfs(i,m,count, vis);
                ans -= (long long )count*(count - 1)/2;
            }
        }
        return ans;
    }
};