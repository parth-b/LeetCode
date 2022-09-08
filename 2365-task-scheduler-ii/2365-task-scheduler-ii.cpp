class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int, long long> u;
        long long ans = 0;
        for(int i = 0; i< tasks.size(); i++) {
            int t= tasks[i];
            ans++;
            if(!u[t])
                u[t] = ans;    
            else {
                int time_passed = ans-u[t];
                if(time_passed <= space) 
                    ans+= (space - time_passed + 1);
                u[t] = ans;
            }
        }
        return ans;
    }
};