class Solution {
public:
    
    int combinationSum4(vector<int>& nums, int target) {

        vector<unsigned long long> dp(target+1, 0);
        dp[0] = 1;

        for(int i = 1; i <= target; i++){
            for(int num : nums){
                if(i - num >= 0){
                    if(dp[i] > ULLONG_MAX - dp[i - num]) {
                        dp[i] = ULLONG_MAX; 
                    } else {
                        dp[i] += dp[i - num];
                    }
                }
            }
        }
        return dp[target];
    }
};