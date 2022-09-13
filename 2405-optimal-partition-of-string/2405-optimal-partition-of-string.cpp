class Solution {
public:
    int partitionString(string s) {
        unordered_set<int> m;
        int ans = 0;
        for(auto x : s) {
            if(m.find(x)!=m.end()) ans++, m.clear();
            m.insert(x);
        }
        return ans+1;
    }
};