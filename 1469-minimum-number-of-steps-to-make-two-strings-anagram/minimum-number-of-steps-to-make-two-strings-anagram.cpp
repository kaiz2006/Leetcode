class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> map1;

        for (char c : s) {
            map1[c]++;
        }

        for (char c : t) {
            map1[c]--;
        }

        int ans = 0;
        for (auto it : map1) {
            if (it.second < 0) {
                ans += abs(it.second);
            }
        }  

        return ans;  
    }
};