class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        bool ans =  true;
        for(int i =0;i<s.size()-1;i++){
            if(abs(s[i]-s[i+1]) >2){
                ans=false;
                break;
            }
        }
        return ans;
    }
};