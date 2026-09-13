class Solution {
public:
    int minMoves(int target, int maxo) {
        int ans = 0;

        while (target > 1 && maxo > 0) {
            if (target % 2 == 0) {
                target /= 2;
                maxo--;
                ans++;
            } else {
                target--;
                ans++;
            }
        }
        ans += target - 1;

        return ans;
    }
};