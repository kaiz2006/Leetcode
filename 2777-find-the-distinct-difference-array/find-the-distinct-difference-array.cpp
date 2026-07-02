class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        unordered_set<int> s;

        if(n==0) return ans;

        for(int i =1;i<n;i++){
            s.insert(nums[i]);
        }        

        ans[0] = 1 - s.size();
        s.clear();    

        for(int i =0;i<n;i++){
            s.insert(nums[i]);
        }

        ans[n-1] = s.size(); 

        s.clear();

        for(int i =1;i<n-1;i++){
            unordered_set<int> s1;
            for(int j =0;j<=i;j++){
                s1.insert(nums[j]);
            }
            ans[i] = s1.size();
            s1.clear();
            for(int j=i+1;j<n;j++){
                s1.insert(nums[j]);
            }
            ans[i] -= s1.size();
        }
        

        return ans;

    }
};