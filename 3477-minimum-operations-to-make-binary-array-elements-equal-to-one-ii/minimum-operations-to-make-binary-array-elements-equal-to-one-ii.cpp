class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int flip = 0;

        for(int i = 0; i < nums.size(); i++) {
            int current = nums[i];

            if(flip % 2 == 1) {
                current = 1 - current;
            }

            if(current == 0) {
                ans++;
                flip++;
            }
        }

        return ans;
    }
};