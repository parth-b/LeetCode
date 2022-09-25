class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int result=0,length=0,m=0;
        for(int ele:nums){
            m=max(m,ele);
        }
        
        for(int ele:nums){
            if(ele==m) length++;
            else length=0;
            result=max(result,length);
        }
        
        return result; 
    }
};