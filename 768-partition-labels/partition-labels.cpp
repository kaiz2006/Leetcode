class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> occ(26,0);
        for(int i =0;i<s.size();++i){
            occ[s[i]-'a'] = i;
        }
        int st=0,en=0;
        vector<int> ans;
        for(int i =0;i<s.size();++i){
            st=max(st,occ[s[i] - 'a']);
            if(i == st){
                ans.push_back(i-en+1);
                en=i+1;
            }

        }
        return ans;

    }
};