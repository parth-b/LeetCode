class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i = 0, j = 1, ans = 1;
        while(j < s.length()) {
            if(s[j] != s[j-1] + 1) i = j;
            
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};