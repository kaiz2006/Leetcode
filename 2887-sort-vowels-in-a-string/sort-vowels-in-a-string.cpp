class Solution {
public:
    string sortVowels(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                    'A', 'E', 'I', 'O', 'U'};
        map<char,int> mp;
        for(int i =0;i<s.size();i++){
            if(vowels.find(s[i]) != vowels.end()){
                mp[s[i]]++;
            }   
        }
        auto it = mp.begin();

        for(int i = 0; i < s.size(); i++){

            if(vowels.find(s[i]) != vowels.end()){
                while(it != mp.end() && it->second == 0){
                    it++;
                }
                s[i] = it->first;
                it->second--;
            }
        }
        return s;
    }
};