class Solution {
public:
    int sum(int x){
        int ans = 0;
        while(x>0){
            ans+= x%10;
            x/=10;
        }
        return ans; 
    }
    int smallestIndex(vector<int>& nums) {
        
        int result = -1;
        for(int i =0;i<nums.size();i++){
            if(sum(nums[i]) == i){
                result  = i;
                break;
            }
        }
        return result;
    }
};