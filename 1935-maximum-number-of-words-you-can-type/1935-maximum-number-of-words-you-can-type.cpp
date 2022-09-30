class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        int can = 1;set<char> brok;
        for(auto c:broken){
            brok.insert(c);
        }
        int ans =0;
        for(auto x :  text) {
            if(x == ' ') {
                if(can) ans++;
                can = 1;
            }
            if(brok.count(x)) can = 0;
        }
        if(can) ans++;
        return ans;
    }
};