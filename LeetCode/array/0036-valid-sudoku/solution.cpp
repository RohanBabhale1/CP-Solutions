class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row_seen[9][9] = {};
        bool col_seen[9][9] = {};
        bool box_seen[9][9] = {};

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char c = board[i][j];
                
                if (c == '.') 
                    continue;

                int d = c - '1';
                int box_id = (i / 3) * 3 + (j / 3);

                if (row_seen[i][d] || col_seen[j][d] || box_seen[box_id][d])
                    return false;

                row_seen[i][d] = col_seen[j][d] = box_seen[box_id][d] = true;
            }
        }
        return true;
    }
};
