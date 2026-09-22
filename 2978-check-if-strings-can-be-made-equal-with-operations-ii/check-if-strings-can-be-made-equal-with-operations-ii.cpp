class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,pair<int,int>> mp1;
        for(int i =0;i<s1.size();i++){
            if(i%2 == 0){
                mp1[s1[i]].first++;
            }else{
                mp1[s1[i]].second++;
            }
            
        }
        unordered_map<char,pair<int,int>> mp2;
        for(int i =0;i<s2.size();i++){
            if(i%2 == 0){
                mp2[s2[i]].first++;
            }else{
                mp2[s2[i]].second++;
            }
            
        }

        return mp1==mp2;
    }
};