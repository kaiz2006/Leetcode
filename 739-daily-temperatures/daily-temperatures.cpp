class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        stack<int> s;
        for(int i =0;i<n;i++){
            while(!s.empty() && nums[s.top()] < nums[i]){
                ans[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }   
        return ans;
    }
};