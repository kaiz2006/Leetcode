class Solution {
public:
    static const int MOD = 1e9 + 7;

    int sumDistance(vector<int>& nums, string s, int d) {
        int n = nums.size();

        vector<long long> pos(n);

        for (int i = 0; i < n; i++) {
            pos[i] = nums[i];
            if (s[i] == 'R')
                pos[i] += d;
            else
                pos[i] -= d;
        }

        sort(pos.begin(), pos.end());

        long long ans = 0, prefix = 0;

        for (int i = 0; i < n; i++) {
            ans = (ans + (pos[i] * i - prefix) % MOD) % MOD;
            prefix += pos[i];
        }

        return (ans + MOD) % MOD;
    }
};