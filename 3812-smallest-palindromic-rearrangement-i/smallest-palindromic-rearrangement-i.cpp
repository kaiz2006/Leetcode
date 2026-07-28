class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;
        for (char c : s)
            mp[c]++;

        string first = "";
        string mid = "";

        for (auto& [ch, cnt] : mp) {
            first.append(cnt / 2, ch);

            if (cnt % 2 == 1)
                mid = ch;
        }

        string second = first;
        reverse(second.begin(), second.end());

        return first + mid + second;
    }
};