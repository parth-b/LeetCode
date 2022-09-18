class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cur = 0;
        long long ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 0) cur++;
            else {
                ans += cur*(cur+1)/2;
                cur = 0;
            }
            
        }
        ans += cur*(cur+1)/2;
        return  ans;
    }
};