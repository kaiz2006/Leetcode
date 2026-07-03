class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        unordered_map<char,int> mp1;

        for( auto &it : p){
            mp1[it]++;
        }

        for(int i =0;i<=n-m;i++){
            unordered_map<char,int> mp2;
            for(int j =i;j< i+m;j++){
                mp2[s[j]]++;
            }
            if(mp1 == mp2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};