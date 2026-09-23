class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int i = 0;
        int j = 0;
        double ans = 0;
        while(i<prices.size() and j<discounts.size()){
            ans += prices[i]*((double)(100-discounts[j])/100);
            i++;
            j++;
        }
        while(i<prices.size()){
            ans += prices[i];
            i++;
        }
        return ans;
    }
};