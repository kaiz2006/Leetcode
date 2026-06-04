class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int maxi=0;
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxi=max(maxi,count);
            }else if(nums[i]==0){
                maxi=max(maxi,count);
                count=0;
            }
        }

        return maxi;
    }
};