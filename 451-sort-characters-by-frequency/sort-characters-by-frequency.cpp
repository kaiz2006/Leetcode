class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map1;
        string a;
        for(auto it : s){
            map1[it]++;
        }
        vector<pair<char,int>> nums(map1.begin(),map1.end());
        sort(nums.begin(), nums.end(), [](auto &p1, auto &p2){
            return p1.second > p2.second;
        });
        for(int i = 0; i < nums.size(); i++){
            a.append(nums[i].second, nums[i].first);
        }
        return a;
        
    }
};