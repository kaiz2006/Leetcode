class Solution {
public:
    string reversePrefix(string word, char ch) {
        set<char> check(word.begin(),word.end());
        if(check.find(ch) == check.end()) return word;
        int i =0;
        string temp;
        string ans;
        while(i<=word.size()){
            if(word[i] != ch){
                temp.push_back(word[i]);
            }else{
                
                temp.push_back(word[i]);
                ans = word.substr(i+1,word.size()-1);
                break;
            }
            i++;
        }
        reverse(temp.begin(),temp.end());
        return temp+ans;
    }
};