class Solution {
public:
    bool safe(int row, int col, vector<vector<char>>& board, char val) {

        for(int i = 0; i < 9; i++) {

            if(board[row][i] == val) return false;

            if(board[i][col] == val) return false;

            if(board[3 * (row / 3) + i / 3]
                    [3 * (col / 3) + i % 3] == val)
                return false;
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {

        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {

                if(board[row][col] == '.') {

                    for(char ch = '1'; ch <= '9'; ch++) {

                        if(safe(row, col, board, ch)) {

                            board[row][col] = ch;

                            if(solve(board))
                                return true;

                            board[row][col] = '.';
                        }
                    }

                    return false; 
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};