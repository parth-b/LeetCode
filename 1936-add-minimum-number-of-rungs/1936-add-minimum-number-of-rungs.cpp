class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int prev  = 0;
        int ans = 0;
        for(auto x : rungs) {
            ans += (x - prev - 1)/dist;
            prev= x;
        }
        return ans;
    }
};