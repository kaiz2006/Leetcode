class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        for(int i =0;i<nums.size();i++){
            x ^=nums[i];
        }
        bool zero_count = true;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                zero_count=false;
                break;
            }
        }
        if(zero_count){
            return 0;
        }
        if(x != 0){
            return nums.size();
        }
        return nums.size()-1;
    }
};