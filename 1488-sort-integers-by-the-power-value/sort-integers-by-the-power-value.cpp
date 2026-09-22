class Solution {
public:
    int getKth(int lo, int hi, int k) {
        map<int,int> mp;
        for(int x =lo;x<=hi;x++){
            int power = 0;
            int i = x;
            while(i != 1){
                if(i%2 == 0){
                    i/=2;
                }else{
                    i = (3*i) + 1;
                }
                power++;
            }
            mp[x] = power;
        }
        vector<pair<int,int>> ans;
        for(auto [num, power] : mp){
            ans.push_back({power, num});
        }
        sort(ans.begin(), ans.end());   
        return ans[k-1].second;
        
    }
};