class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int covered = 0;

        for(int i = 0; i < n; i++) {
            int x = intervals[i][0];
            int y = intervals[i][1];

            for(int j = 0; j < n; j++) {
                if(i != j &&
                   intervals[j][0] <= x &&
                   intervals[j][1] >= y) {

                    covered++;
                    break;
                }
            }
        }

        return n - covered;
    }
};
