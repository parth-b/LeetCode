static const auto io_sync_off = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        vector<int> i(nums.size(), 1),d(nums.size(), 1);
        for(int j = 1; j<nums.size(); j++) {
            if(nums[j] <= nums[j-1]) 
                i[j] = i[j-1]+1;
        }
        for(int j = nums.size()-2; j >=0; j--) {
            if(nums[j] <= nums[j+1]) 
                d[j] = d[j+1] +1;
                
        }
        vector<int> ans;
        
        for(int j = k; j<nums.size()-k; j++) {
            if(i[j-1] >= k and d[j+1] >=k)
                ans.push_back(j);
        }
        return ans;
    }
};