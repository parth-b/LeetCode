class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rect) {
        unordered_map<double, int> m;
        long long ans = 0;
        for(auto x : rect) {
            double cur = double(x[0])/double(x[1]);
            if(m[cur]) ans+=m[cur];
            m[cur]++;
        }
        return ans;
    }
};