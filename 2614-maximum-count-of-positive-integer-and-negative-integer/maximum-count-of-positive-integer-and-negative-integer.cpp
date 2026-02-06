class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxpos=0;
        int maxmin=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                maxpos++;
            }else if(nums[i]<0){
                maxmin++;
            }
        }
        return max(maxpos,maxmin);
    }
};