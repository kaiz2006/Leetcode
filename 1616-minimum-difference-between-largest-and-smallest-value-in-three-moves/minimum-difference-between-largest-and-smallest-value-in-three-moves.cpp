class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <=4){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        for(int i =0,j=nums.size()-4;i<4;i++,j++){
            mini=min(mini,nums[j]-nums[i]);
        }
        return mini;
    }
};