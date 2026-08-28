class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban;

        for (string word : banned) {
            ban.insert(word);
        }

        unordered_map<string, int> mp;

        string word = "";

        for (char c : paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } 
            else {
                if (!word.empty() && ban.find(word) == ban.end()) {
                    mp[word]++;
                }
                word = "";
            }
        }

        
        if (!word.empty() && ban.find(word) == ban.end()) {
            mp[word]++;
        }

        string ans;
        int count = 0;

        for (auto &it : mp) {
            if (it.second > count) {
                count = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};