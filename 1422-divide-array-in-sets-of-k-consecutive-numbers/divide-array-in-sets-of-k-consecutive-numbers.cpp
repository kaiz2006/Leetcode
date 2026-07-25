class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize !=0) return false;
        map<int,int> mp;
        for(auto &it : hand){
            mp[it]++;
        }
        
        for(auto &it :mp){
            int start = it.first;
            int freq = it.second;

            if (freq == 0) continue;

            
            for (int i = 0; i < groupSize; i++) {
                if (mp[start + i] < freq)
                    return false;

                mp[start + i] -= freq;
            }
        }
        return true;
    }
};