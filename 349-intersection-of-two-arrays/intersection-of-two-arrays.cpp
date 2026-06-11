class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for (auto &it : nums1) {
            if (mp.find(it) == mp.end()) {
                mp[it] = 1;
            }
        }
        for(auto &it : nums2){
            if(mp.find(it)!=mp.end()){
                mp[it] =2;
            }
        }
        for(auto &it : mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
        

    }
};