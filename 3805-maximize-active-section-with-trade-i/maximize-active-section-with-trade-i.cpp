class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        int ones = 0, maxsum = 0, prev = -1;

        int i = 0;
        while (i < n) {
            if (s[i] == '1') {
                ones++;
                i++;
            } else {
                int curr = 0;
                while (i < n && s[i] == '0') {
                    curr++;
                    i++;
                }
                if (prev > 0) {
                    maxsum = max(maxsum, prev + curr);
                }
                prev = curr;
            }
        }
        return maxsum + ones;
    }
};