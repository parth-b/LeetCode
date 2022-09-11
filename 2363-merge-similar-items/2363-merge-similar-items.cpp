class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        map<int, int> m;
        for(auto x : items2) {
            m[x[0]] = x[1];
            
        }
        for(auto x : items1) {
            if(m[x[0]]) m[x[0]] += x[1];
            else m[x[0]] = x[1];
        }
        for(auto x : m) {
            ans.push_back({x.first, x.second});
        }
        return ans;
    }
};