class Solution {
public:
    int n, m;
    int count = 0;
    vector<vector<int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
    void dfs(int r, int c, vector<vector<char>>& grid){
        if(r<0 || c < 0 || r >=n || c>=m) return;
        if(grid[r][c]=='0') return;
        grid[r][c]='0';
        for(auto &d: directions){
            dfs(r+d[0], c+d[1], grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};