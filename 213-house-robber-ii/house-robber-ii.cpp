class Solution {
public:

    int solve(vector<int>& nums, int start, int end) {
        
        if(start == end) return nums[start];

        int prev2 = nums[start];
        int prev1 = max(nums[start], nums[start + 1]);

        for(int i = start + 2; i <= end; i++){
            int incl = prev2 + nums[i];
            int excl = prev1;
            int ans = max(incl, excl);

            prev2 = prev1;
            prev1 = ans;
        }

        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        
        int a = solve(nums, 0, n - 2);

        
        int b = solve(nums, 1, n - 1);

        return max(a, b);
    }
};