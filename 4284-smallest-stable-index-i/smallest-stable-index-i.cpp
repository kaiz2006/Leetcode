class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int index = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int maxi = *max_element(nums.begin(),nums.begin()+i);
            int mini = *min_element(nums.begin()+i,nums.end());
            int score = maxi-mini;
            if(score<=k){
                index = min(index,i);
            }
        }
        if(index == INT_MAX){
            return -1;
        }else{
            return index;
        }
    }
};