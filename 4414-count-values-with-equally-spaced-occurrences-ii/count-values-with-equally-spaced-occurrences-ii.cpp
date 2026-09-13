class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> indices;
        
        for (int i = 0; i < nums.size(); ++i) {
            indices[nums[i]].push_back(i);
        }
        
        int ans = 0;
        for (const auto& [val, pos] : indices) {
            if (pos.size() >= 3) {
                int x = pos[1]-pos[0];
                bool check = true;
                for(int i=2;i<pos.size();i++){
                    if(pos[i] - pos[i-1] == x){
                        continue;
                    }else{
                        check=false;
                        break;
                    }
                }
                if(check){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};