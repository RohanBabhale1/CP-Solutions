class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int i=0,j=0;
        while(1){
            int x=i,y=j;
            char ch=grid[x][y];
            if(ch=='R'){
                y++;
            }else if(ch=='D'){
                x++;
            }else if(ch=='L'){
                y--;
            }else{
                x--;
            }
            if(x<0||y<0||x>=n||y>=m||grid[x][y]==0){
                return {i,j};
            }
            
            grid[i][j]=0;
            i=x;
            j=y;
            
        }
    }
};
