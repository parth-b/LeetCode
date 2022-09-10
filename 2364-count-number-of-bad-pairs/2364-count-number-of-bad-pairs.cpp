class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long val = 0;
        unordered_map<int,long long> m;
        for(int i = 0 ; i< n; i++) {
            int c = i - nums[i];
            val+=m[c]++;
        }
        return 1L*n*(n-1)/2 - val;
    }
};
