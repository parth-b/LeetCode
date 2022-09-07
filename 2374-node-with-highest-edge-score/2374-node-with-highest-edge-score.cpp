class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<int, long long> u;
        for(int i = 0; i<edges.size(); i++) {
            u[edges[i]] += i;
        }
        int max = 0, ans = -1;
        for(auto x: u) {
            //cout <<x.first <<" "<<x.second<<endl;
            if(x.second > max) {
                max = x.second;
                ans = x.first;
            }else if(x.second == max) ans = min(ans, x.first);
        }
        return ans;
    }
};