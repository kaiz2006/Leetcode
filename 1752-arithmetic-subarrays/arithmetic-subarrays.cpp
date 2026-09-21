class Solution {
public:
    bool check(vector<int> nums){
        bool check = true;
        sort(nums.begin(),nums.end());
        for(int i =1;i<nums.size()-1;i++){
            if(nums[i+1] - nums[i] == nums[i]-nums[i-1]){
                continue;
            }else{
                check=false;
                break;
            }
        }
        return check ;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int m = l.size();
        vector<bool> ans;
        for(int i =0;i<m;i++){
            vector<int> temp;
            for(int st = l[i] ; st<=r[i] ; st++ ){
                temp.push_back(nums[st]);
            }
            bool t = check(temp);
            if(t){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;

    }
};