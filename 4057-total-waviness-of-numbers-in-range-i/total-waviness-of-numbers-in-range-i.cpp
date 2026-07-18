class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i =num1;i<=num2;i++){
            string s = to_string(i);
            int n = s.size();
            for(int j = 1;j<n-1;j++){
                if((s[j-1]-'0' < s[j]-'0') && (s[j+1]-'0' <s[j]-'0')){
                    ans++;
                }
                if((s[j-1]-'0' > s[j]-'0') && (s[j+1]-'0' >s[j]-'0')){
                    ans++;
                }
            }
        }


        return ans;
    }
};