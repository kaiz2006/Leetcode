class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            for(int j = 0; i + j < n && j < m; j++) {
                temp.push_back(grid[j][i + j]);
            }
            sort(temp.begin(), temp.end());
            for(int j = 0; i + j < n && j < m; j++) {
                grid[j][i + j] = temp[j];
            }
        }
        for(int j = 1; j < m; j++) {
            vector<int> temp;
            for(int i = 0; j + i < m && i < n; i++) {
                temp.push_back(grid[j + i][i]);
            }
            sort(temp.begin(), temp.end());
            for(int i = 0; j + i < m && i < n; i++) {
                grid[j + i][i] = temp[i];
            }
        }

        return grid;
    }
};