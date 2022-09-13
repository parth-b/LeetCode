class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> m;
        int ans = 0;
        for(auto x : s) {
            if(m[x]) ans++, m.clear();
            m[x]++;
        }
        return ans+1;
    }
};