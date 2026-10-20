class Solution {
public:
    bool row_seen[9][9]={};
    bool col_seen[9][9]={};
    bool box_seen[9][9]={};

    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    continue;
                }
                int box_ind=(i/3)*3+(j/3);
                for(int d=0;d<9;d++){
                    if(row_seen[i][d] || col_seen[j][d] || box_seen[box_ind][d]){
                        continue;
                    }
                    board[i][j]='1'+d;
                    row_seen[i][d]=true;
                    col_seen[j][d]=true;
                    box_seen[box_ind][d]=true;
                    if(solve(board)){
                        return true;
                    }
                    board[i][j]='.';
                    row_seen[i][d]=false;
                    col_seen[j][d]=false;
                    box_seen[box_ind][d]=false;
                }
                return false;
            }
            
        }
        return true;

    }

    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int d=board[i][j]-'1';
                int box_ind=(i/3)*3+(j/3);
                row_seen[i][d]=true;
                col_seen[j][d]=true;
                box_seen[box_ind][d]=true;
            }
        }
        solve(board);
        
    }
};
