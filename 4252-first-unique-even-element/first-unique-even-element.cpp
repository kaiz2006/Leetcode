class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,pair<int,int>> mp;

        for(int i =0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                if (mp.find(nums[i]) == mp.end()) {
                    mp[nums[i]] = {i, 1};  
                } else {
                    mp[nums[i]].second++;  
                }
            }
        }

        int ans = INT_MAX;

        for (auto &it : mp) {
            if (it.second.second == 1) {
                ans = min(ans, it.second.first);
            }
        }
        if(ans == INT_MAX){
            return -1;
        }else{
            return nums[ans];
        }
    }
};