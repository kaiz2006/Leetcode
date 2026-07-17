class Solution {
public:
    int digitsum(int n){
        int ans  = 0;
        while(n>0){
            ans += n%10;
            n/=10;
        }
        return ans;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int dig = 0;
        for(auto &it : nums){
            sum +=it ;
            dig += digitsum(it);
        }
        return abs(sum-dig);
    }
};