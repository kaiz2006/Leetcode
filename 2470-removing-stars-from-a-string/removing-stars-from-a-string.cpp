class Solution {
public:
    string removeStars(string s) {
        string ans;

        for (auto &it : s) {
            if (it != '*') {
                ans.push_back(it);
            } else {
                ans.pop_back();
            }
        }

        return ans;
    }
};