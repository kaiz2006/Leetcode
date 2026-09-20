class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        stack<int> pos,neg;
        for(auto i : nums){
            if(i < 0){
                neg.push(i);
            }else{
                pos.push(i);
            }
        }
        vector<int> ans;
        while(!pos.empty()){
            ans.push_back(neg.top());
            ans.push_back(pos.top());
            pos.pop(),neg.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        

    }
};