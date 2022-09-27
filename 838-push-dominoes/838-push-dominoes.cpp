class Solution {
public:
    
//     int fn(vector<int> & dp, string & dom, int cur) {
//         if(cur < 0 or cur >= dom.length()) 
//             return 0;
//         if(dp[cur] != 0) 
//             return dp[cur];
//         else {
//             int d = 0;
//             if(dom[cur] == 'L') d = -1;
//             else if (dom[cur] == 'R') d = 1;
//             int l, r;
//             l = fn(dp,dom,cur-1);
//             r = fn(dp, dom, cur+1);
            
//             int x = l>0 ? l : 0 + d + r<0 ? r : 0;
//             dp[cur ] = x <= -1 ? -1 : x >=1 ? 1 : 0;
//         }
//         return dp[cur];
//     }
    
//     string pushDominoes(string dom) {
//         vector<int> dp (dom.length() + 1, 0);
        
//         string ans = dom;
//         //fn(dp, dom, 0);
//         for(int i = 0; i<dom.length(); i++) {
//             int x = fn(dp,dom,i);
//             ans[i] = x == 1 ? 'R' : x == -1 ? 'L' : '.';
//         }
//         return ans;
//     }
    string pushDominoes(string d) {
        d = 'L' + d + 'R';
        string res = "";
        for (int i = 0, j = 1; j < d.length(); ++j) {
            if (d[j] == '.') continue;
            int middle = j - i - 1;
            if (i > 0)
                res += d[i];
            if (d[i] == d[j])
                res += string(middle, d[i]);
            else if (d[i] == 'L' && d[j] == 'R')
                res += string(middle, '.');
            else
                res += string(middle / 2, 'R') + string(middle % 2, '.') + string(middle / 2, 'L');
            i = j;
        }
        return res;
    }
};