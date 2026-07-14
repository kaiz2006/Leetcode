class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int temp = INT_MIN;
        for(int i =0;i<nums.size();i++){
            string s = to_string(nums[i]);
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for(int j=0;j<s.size();j++){
                mini=min(mini,(s[j]-'0'));
                maxi=max(maxi,(s[j]-'0'));
            }
            temp=max(temp,maxi-mini);

        }
        int ans = 0;
        for(int i =0;i<nums.size();i++){
            string s = to_string(nums[i]);
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for(int j=0;j<s.size();j++){
                mini=min(mini,(s[j]-'0'));
                maxi=max(maxi,(s[j]-'0'));
            }
            if(maxi-mini == temp){
                ans+=nums[i];
            }
        }
        return ans;
    }
};