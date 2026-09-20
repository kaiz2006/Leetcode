class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int ans = 0;
        int count = 0;
        int check = nums.size()/3;
        for(int i = nums.size()-2;i>=0;i-=2){
            ans+=nums[i];
            count++;
            if(count == check){
                break;
            }
        }
        return ans;

    }
};


/// 1 2 2 4 7 8
/// 1 2 3 4 5 6 7 8 9

