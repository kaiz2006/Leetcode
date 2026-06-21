class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0;
        sort(costs.begin(),costs.end());
        while(ans < costs.size() && costs[ans] <= coins){
            coins = coins - costs[ans];
            ans++;
        }
        return ans;
    }
};