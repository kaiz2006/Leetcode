class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pref(n,0);
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            maxi=max(maxi,nums[i]);
            pref[i] = maxi;
        }
        int ans = INT_MAX;
        int mini = INT_MAX;
        for(int i =n-1;i>=0;i--){
            mini = min(mini,nums[i]);
            if(pref[i] - mini <=k){
                ans=min(ans,i);
            }
        }

        if(ans == INT_MAX){
            return -1;
        }else{
            return ans;
        }
    }
};