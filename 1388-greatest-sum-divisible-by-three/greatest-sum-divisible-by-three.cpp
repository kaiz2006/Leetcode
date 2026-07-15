class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int ans = 0;

        vector<int> rem;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 3 == 0) {
                ans += nums[i];
            } else {
                rem.push_back(nums[i]);
            }
        }

        int sum = 0;
        int r1min1 = INT_MAX, r1min2 = INT_MAX;
        int r2min1 = INT_MAX, r2min2 = INT_MAX;

        for (int x : rem) {
            sum += x;

            if (x % 3 == 1) {
                if (x < r1min1) {
                    r1min2 = r1min1;
                    r1min1 = x;
                } else if (x < r1min2) {
                    r1min2 = x;
                }
            } else {
                if (x < r2min1) {
                    r2min2 = r2min1;
                    r2min1 = x;
                } else if (x < r2min2) {
                    r2min2 = x;
                }
            }
        }

        if (sum % 3 == 0) {
            ans += sum;
        }
        else if (sum % 3 == 1) {
            int remove1 = r1min1;
            int remove2 = (r2min1 == INT_MAX || r2min2 == INT_MAX)
                            ? INT_MAX
                            : r2min1 + r2min2;

            if (min(remove1, remove2) != INT_MAX)
                ans += sum - min(remove1, remove2);
        }
        else {
            int remove1 = r2min1;
            int remove2 = (r1min1 == INT_MAX || r1min2 == INT_MAX)
                            ? INT_MAX
                            : r1min1 + r1min2;

            if (min(remove1, remove2) != INT_MAX)
                ans += sum - min(remove1, remove2);
        }

        return ans;
        
    }
};