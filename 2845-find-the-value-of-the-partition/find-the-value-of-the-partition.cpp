class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = INT_MAX;
        int n = nums.size();
        for(int i =0;i<=n-2;i++){
            ans=min(ans,nums[i+1]-nums[i]);
        }
        return ans;
    }
};