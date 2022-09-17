class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& coaches) {
        sort(players.begin(), players.end()); 
        sort(coaches.begin(), coaches.end()); 
        int ans = 0; 
        for (int i = 0, j = 0; i < players.size() && j < coaches.size(); ++i, ++j) {
            for (; j < coaches.size() && players[i] > coaches[j]; ++j); 
            if (j < coaches.size()) ++ans; 
        }
        return ans; 
    }
};