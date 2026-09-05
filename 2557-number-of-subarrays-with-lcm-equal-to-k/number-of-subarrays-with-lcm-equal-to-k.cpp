class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            long long currLCM = 1;

            for (int j = i; j < n; j++) {
                currLCM = lcm(currLCM, (long long)nums[j]);

                if (currLCM == k) {
                    ans++;
                }

                if (currLCM > k) {
                    break;
                }
            }
        }

        return ans;
    }
};