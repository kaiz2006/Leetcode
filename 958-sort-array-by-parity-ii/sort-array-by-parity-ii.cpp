class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i : nums){
            if(i%2 == 0){
                ans[even] = i;
                even+=2;
            }else{
                ans[odd]=i;
                odd+=2;
            }
        }
        return ans;
    }
};