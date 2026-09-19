class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = queries.size();
        int m = points.size();
        for(int i = 0; i < n; i++) {
            int count = 0;
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            for(int j = 0; j < m; j++) {
                int px = points[j][0];
                int py = points[j][1];

                if((px - x) * (px - x) + 
                   (py - y) * (py - y) <= r * r) {
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};