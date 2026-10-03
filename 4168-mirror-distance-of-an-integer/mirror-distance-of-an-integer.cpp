class Solution {
public:
    int reverse(int n) {
        string ans = "";
        while (n > 0) {
            ans.push_back('0' + (n % 10));
            n /= 10;
        }
        return stoi(ans);
    }

    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};