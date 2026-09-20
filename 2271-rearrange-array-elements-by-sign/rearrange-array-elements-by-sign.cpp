class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0;
        int neg = 1 ;
        int n = nums.size();
        vector<int> ans(n,0);
        for(auto i : nums){
            if(i > 0){
                ans[pos] = i;
                pos+=2;
            }else{
                ans[neg]=i;
                neg+=2;
            }
        }
        return ans;
    }
};