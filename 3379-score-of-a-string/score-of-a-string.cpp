class Solution {
public:
    int scoreOfString(string s) {
        int result=0;
        for(int i =0;i<s.size()-1;i++){
            int a = s[i] - '0';
            int b = s[i+1] - '0';
            result += abs(a-b);
        }
        return result;
    }
};