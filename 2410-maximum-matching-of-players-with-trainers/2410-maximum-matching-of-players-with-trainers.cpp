class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(), p.end());
        sort(t.begin(), t.end());
        int ans = 0;
        int i = 0, j = 0;
        while(i < p.size() and j<t.size()) {
            while(j<t.size()){
                if(t[j++] >= p[i]){
                    ans++;
                    break;
                } 
            }
            i++;
        }
        return ans ;
    }
};