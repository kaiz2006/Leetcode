class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans(2,-1);

        if(nums.size()==0){
            return ans;
        }

        int st = 0,end=nums.size()-1;
        while(st<=end){
            if(nums[st]==target){
                ans[0]=st;
                break;
            }else{
                st++;
            }
            
        }
        while(end>=0){
            if(nums[end]==target){
                ans[1]=end;
                break;
            }else{
                end--;
            }
        }
        return ans;
    }
};