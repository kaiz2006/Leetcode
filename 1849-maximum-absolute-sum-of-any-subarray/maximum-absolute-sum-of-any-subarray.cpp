class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0,
         minSum = 0,
         currMax = 0,
         currMin = 0;

        for(int x : nums) {
            currMax = max(x, currMax + x);
            currMin = min(x, currMin + x);

            maxSum = max(maxSum, currMax);
            minSum = min(minSum, currMin);
        }

        return max(maxSum, abs(minSum));
    }
};