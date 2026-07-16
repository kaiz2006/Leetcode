class Solution {
public:
    using ll = long long;

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<ll> a(n);

        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            a[i] = gcd((ll)mx, (ll)nums[i]);
        }

        sort(a.begin(), a.end());

        ll ans = 0;
        int i = 0, j = n - 1;

        while (i < j) {
            ans += gcd(a[i], a[j]);
            i++;
            j--;
        }

        return ans;
    }
};