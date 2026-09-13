class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> indices;
        
        for (int i = 0; i < nums.size(); ++i) {
            indices[nums[i]].push_back(i);
        }
        
        int ans = 0;
        for (const auto& [val, pos] : indices) {
            if (pos.size() == 3) {
                if (pos[1] - pos[0] == pos[2] - pos[1]) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};