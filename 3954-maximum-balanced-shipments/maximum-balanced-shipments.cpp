class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int ans = 0;
        int mx = weight[0];

        for (int i = 1; i < weight.size(); i++) {
            if (weight[i] < mx) {
                ans++;
                if (i + 1 < weight.size())
                    mx = weight[i + 1];
                i++;
            } else {
                mx = max(mx, weight[i]);
            }
        }

        return ans;
    }
};