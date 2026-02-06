class Solution{
public:

    int countNegatives(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int row = n - 1;   
        int col = 0;       
        int ans = 0;

        while(row >= 0 && col < m) {

            if(matrix[row][col] < 0) {

                ans += (m - col); 
                row--;            

            } else {
                col++;            
            }
        }

        return ans;
    }
};
