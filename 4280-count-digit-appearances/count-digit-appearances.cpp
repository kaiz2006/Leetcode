class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0,n=nums.size();
        char check = '0' + digit;
        for(int i =0;i<n;i++){
            string temp = to_string(nums[i]);
            for(int j=0;j<temp.size();j++){   
                if(temp[j] == check){
                    ans++;
                }
            }
        }
        return ans;
    }
};