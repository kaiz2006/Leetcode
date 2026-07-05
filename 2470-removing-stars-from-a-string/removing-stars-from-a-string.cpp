class Solution {
public:
    string removeStars(string s) {
        
        stack<char> st;
        for(auto &it : s){
            if(it != '*'){
                st.push(it);
            }else{
                if(!(st.empty())){
                    st.pop();
                }else{
                    continue;
                }
            }
        }
        string ans = "";

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;


    }
};