class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int m = s1.size();
        vector<int> ans;
        unordered_map<char,int> mp1;

        for( auto &it : s1){
            mp1[it]++;
        }

        for(int i =0;i<=n-m;i++){
            unordered_map<char,int> mp2;
            for(int j =i;j< i+m;j++){
                mp2[s2[j]]++;
            }
            if(mp1 == mp2){
                return true;
            }
        }
        return false;
    

    }
};