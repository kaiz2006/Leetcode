class Solution {
public:

    bool conf(vector<int> nums, int k){
        return nums[nums.size() - 1] - nums[0] <= k;
    }

    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> ans;
        bool global = true;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=3){
            vector<int> temp;
            for(int j = i;j<i+3;j++){
                temp.push_back(nums[j]);
            }
            bool check = conf(temp,k);
            if(!check){
                global = false;
            }
            ans.push_back(temp);
        }
        if(!global) return {};
        return ans;
        
    }
};