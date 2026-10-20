class Solution {
    void dfs(vector<vector<char>>&g,int i,int j){
        if(i<0||j<0||i>=g.size()||j>=g[0].size()||g[i][j]!='1')return;
        g[i][j]='0';
        dfs(g,i+1,j),dfs(g,i-1,j),dfs(g,i,j+1),dfs(g,i,j-1);
    }
    public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};
