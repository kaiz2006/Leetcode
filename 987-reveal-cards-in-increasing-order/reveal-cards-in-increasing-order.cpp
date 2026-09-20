class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& nums) {
        int n = nums.size();
        queue<int> q;
        vector<int> ans(n);
        for(int i =0;i<n;i++){
            q.push(i);
        }
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            ans[q.front()] = nums[i];
            q.pop();
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};