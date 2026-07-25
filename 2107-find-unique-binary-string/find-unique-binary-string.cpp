class Solution {
public:
    void generate(int n, string &curr,unordered_map<string,int> &ans) {
        if (curr.size() == n) {
            ans[curr]++;
            return;
        }

        curr.push_back('0');
        generate(n, curr,ans);
        curr.pop_back();

        curr.push_back('1');
        generate(n, curr,ans);
        curr.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int> ans;
        for(auto &it : nums){
            ans[it]++;
        }
        nums.clear();
        int len = nums[0].size();
        string curr;
        generate(len,curr,ans);
        for(auto &it : ans){
            if(it.second ==1){
                return it.first;
            }
        }
        return curr;

    }
};