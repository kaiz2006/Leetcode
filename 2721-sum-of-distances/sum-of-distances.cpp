class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
                int n = nums.size();
        unordered_map<int, vector<int>> mp;     
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(n, 0);
        for (auto &[value, indices] : mp) {
            int m = indices.size();          
            vector<long long> prefix(m + 1, 0);
            for (int i = 0; i < m; i++) {
                prefix[i + 1] = prefix[i] + indices[i];
            }
            for (int i = 0; i < m; i++) {
                long long curr = indices[i];

                long long leftCount = i;
                long long leftSum = prefix[i];

                long long leftDistance =
                    curr * leftCount - leftSum;
               
                long long rightCount = m - i - 1;
                long long rightSum = prefix[m] - prefix[i + 1];

                long long rightDistance =
                    rightSum - curr * rightCount;

                ans[curr] = leftDistance + rightDistance;
            }
        }

        return ans;
    }
};