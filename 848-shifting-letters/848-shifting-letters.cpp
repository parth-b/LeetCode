class Solution {
public:
    string shiftingLetters(string s, vector<int>& sh) {
        int i = 0;
        for(int j = sh.size() -2; j>=0; j--) sh[j] += sh[j+1], sh[j]%=26;
        for(auto x : s) {
            int t = x - 'a';
            int a = sh[i]% 26;
            t = (t+a+26)%26;
            s[i++] = t + 'a'; 
        }
        return s;
    }
};