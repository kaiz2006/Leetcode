class Solution {
public:
    int getsum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }


    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<pair<int, int>, int>> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = {{getsum(nums[i]), nums[i]}, i};
        }
        sort(arr.begin(), arr.end());
        vector<bool> vis(n, false);
        int swaps = 0;
        for (int i = 0; i < n; i++) {
           
            if (vis[i] || arr[i].second == i) {
                continue;
            }

            int sz = 0;
            int curr = i;
            while (!vis[curr]) {
                vis[curr] = true;
                curr = arr[curr].second; 
                sz++;
            }

            if (sz > 1) {
                swaps += (sz - 1);
            }
        }

        return swaps;
    }
};