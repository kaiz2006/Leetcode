class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;

        while(n>0){
            ans.push_back(n%10);
            n/=10;
        }
        int x=ans.size();
        sort(ans.begin(),ans.end());
        return ans[x-1]*ans[x-2];
    }
};