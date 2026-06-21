class Solution {
public:

    void countingSort(vector<int>& arr) {
    int mx = *max_element(arr.begin(), arr.end());

    vector<int> count(mx + 1, 0);

    for (int x : arr) {
        count[x]++;
    }

   
    int idx = 0;
    for (int i = 0; i <= mx; i++) {
        while (count[i] > 0) {
            arr[idx++] = i;
            count[i]--;
        }
    }
}

    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0;
        countingSort(costs);
        while(ans < costs.size() && costs[ans] <= coins){
            coins = coins - costs[ans];
            ans++;
        }
        return ans;
    }
};