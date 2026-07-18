class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> mp;
        unordered_map<int, int> count;

        for (int x : nums) {
            mp[x]++;
        }

        for (auto &it : mp) {
            count[it.second]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (count[mp[nums[i]]] == 1) {
                return nums[i];
            }
        }

        return -1;
    }
};