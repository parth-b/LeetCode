class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        int can = 1;
        unordered_map<char, int> map;
        for(auto x : broken) map[x]++;
        int ans =0;
        for(auto x :  text) {
            if(x == ' ') {
                if(can) ans++;
                can = 1;
            }
            if(map[x]) can = 0;
        }
        if(can) ans++;
        return ans;
    }
};