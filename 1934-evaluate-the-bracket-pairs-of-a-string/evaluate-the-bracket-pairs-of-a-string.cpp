class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (auto& kd : knowledge) {
            mp[kd[0]] = kd[1];
        }
        bool add = false;
        string key, res;
        for (char c : s) {
            if (c == '(') {
                add = true;
            } else if (c == ')') {
                if (mp.count(key) > 0) {
                    res += mp[key];
                } else {
                    res.push_back('?');
                }
                add = false;
                key.clear();
            } else if (add) {
                key.push_back(c);
            } else {
                res.push_back(c);
            }
        }
        return res;
    }
};