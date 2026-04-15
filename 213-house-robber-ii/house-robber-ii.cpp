class Solution {
public:

    int solve(vector<int> &nums){
    
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==0){
            return 0;
        }
        

        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++){
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

        vector<int> nums1(nums.begin(), nums.end() - 1);
        vector<int> nums2(nums.begin() + 1, nums.end());

        

        int a =  solve(nums1);
        int b= solve(nums2);

        return max(a,b);
    }
};