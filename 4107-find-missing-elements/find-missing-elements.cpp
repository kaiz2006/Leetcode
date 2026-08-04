class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        map<int,int> map;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i =0;i<nums.size();i++){
            mini = min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        for(int i =mini;i<=maxi;i++){
            map[i]++;
        }
        for(int i =0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto &it : map){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};