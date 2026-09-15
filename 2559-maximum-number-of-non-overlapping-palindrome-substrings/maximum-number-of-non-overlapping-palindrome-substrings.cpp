class Solution {
public:
    int maxPalindromes(string s, int k) {
        int ans = 0;
        int start = 0;
        int n = s.size();

        auto check = [&](int l,int r){
            while(l<r){
                if(s[r] != s[l] ){
                    return false;
                }
                r--;l++;
            }
            return true;
        };
        for(int r =k-1;r<n;r++){
            int l = r-k+1;
            if(l>= start && check(l,r)){
                ans++;
                start=r+1;
                continue;
            }
            l=r-k;
            if(l>= start && check(l,r)){
                ans++;
                start=r+1;
                continue;
            }
        }
        return ans;
    }
};