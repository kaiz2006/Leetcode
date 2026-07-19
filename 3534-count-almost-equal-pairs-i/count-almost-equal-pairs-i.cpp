class Solution {
public:
    bool check(int a, int b) {
        string s = to_string(a);
        string t = to_string(b);

        int len = max(s.size(), t.size());

        while (s.size() < len) s = "0" + s;
        while (t.size() < len) t = "0" + t;

        vector<int> diff;

        for (int i = 0; i < len; i++) {
            if (s[i] != t[i])
                diff.push_back(i);
        }

        if (diff.size() == 0)
            return true;

        if (diff.size() != 2)
            return false;

        return s[diff[0]] == t[diff[1]] &&
               s[diff[1]] == t[diff[0]];
    }

    int countPairs(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (check(nums[i], nums[j]))
                    ans++;
            }
        }

        return ans;
    }
};