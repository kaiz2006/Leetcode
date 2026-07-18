class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN , mini = INT_MAX;
        for(int i  =0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }

        for(int i  = mini;i>=1;i--){
            if(maxi%i == 0 && mini%i == 0){
                return i;
            }
        }
        return  0;
    }
};