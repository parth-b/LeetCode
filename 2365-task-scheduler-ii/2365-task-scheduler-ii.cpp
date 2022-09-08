class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int, long long> last_occurence;
        long long time_elapsed = 0;
        for(int i = 0; i< tasks.size(); i++) {
            int cur_task= tasks[i];
            time_elapsed++;
            if(!last_occurence[cur_task])
                last_occurence[cur_task] = time_elapsed;    
            else {
                int time_passed = time_elapsed - last_occurence[cur_task];
                if(time_passed <= space) 
                    time_elapsed+= (space - time_passed + 1);
                last_occurence[cur_task] = time_elapsed;
            }
        }
        return time_elapsed;
    }
};