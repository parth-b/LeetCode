class Solution {
public:
    
    void dfs(int node, vector<int> &vis, unordered_map<int, int> &m, int i,vector<int>& edges) {
        if(node != -1 and !vis[node]) {
            vis[node] = 1;
            m[node] = i;
            dfs(edges[node],vis, m, i+1, edges);
        }
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        // calculate the nodes reachable from node1 and node2
        // save it in a map with corresponding distances.
        // for every node in one map check in another map and keep minimizing the max dist of the two. return ans
        int n = edges.size();
        vector<int> vis(n,0);
        unordered_map<int,int> map1, map2;
        dfs(node1, vis, map1, 0, edges);
        vector<int> v(n,0);
        dfs(node2, v, map2, 0, edges);
        
        int mi = INT_MAX, ans = -1;
        for(auto& ent : map1) {
            if(map2.find(ent.first)!=map2.end()) {
                int dist = max(map2[ent.first], ent.second);
                if(dist < mi) {
                    mi = dist;
                    ans = ent.first;
                }else if(dist == mi) {
                    ans = min(ans, ent.first);
                }
            }
        }
        return ans;
    }
};