class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int cnta = count(s.begin(), s.end(), 'a');
        int cntb = count(s.begin(), s.end(), 'b');
        return abs(cnta-cntb);
    }
};