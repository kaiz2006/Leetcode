class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }
        ranges::sort(v);
        vector<bool> vis(n, false);
        for(auto [val, idx] : v) {
            if(!vis[idx]) {
                ans += val;
                vis[idx] = true;
                if(idx - 1 >= 0)
                    vis[idx - 1] = true;
                if(idx + 1 < n)
                    vis[idx + 1] = true;
            }
        }
        return ans;
    }
};