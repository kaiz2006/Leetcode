class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        long long ans = 0;
        int n = heights.size();

        for (int i = 0; i < n; i++) {
            vector<int> temp = heights;

            for (int j = i + 1; j < n; j++)
                temp[j] = min(temp[j], temp[j - 1]);

            for (int j = i - 1; j >= 0; j--)
                temp[j] = min(temp[j], temp[j + 1]);

            long long sum = 0;
            for (int x : temp)
                sum += x;

            ans = max(ans, sum);
        }

        return ans;
    }
};