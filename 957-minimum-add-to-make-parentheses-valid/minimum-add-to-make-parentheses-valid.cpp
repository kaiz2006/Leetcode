class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int top = 0;
        for(char c : s){
            if(c == '('){
                count++;
            }else{
                count > 0 ? count-- : top++;
            }
        }
        return top + count;
    }
};