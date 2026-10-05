class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int i = 0;i<operations.size();i++){
            string temp = operations[i];
            if(temp[0] == '-' || temp[1] == '-'){
                ans--;
            }else{
                ans++;
            }
        }
        return ans;
    }
};