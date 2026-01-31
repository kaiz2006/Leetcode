class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
      unordered_map<int,int> map;
      for(auto it : nums){
        map[it]++;
      }
      for(auto it : map){
        if(it.second > 2)return false;
      }
      return true;
    }
};