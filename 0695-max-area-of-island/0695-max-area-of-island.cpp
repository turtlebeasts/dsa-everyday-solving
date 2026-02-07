class Solution {
public:
    int n, m;
    vector<vector<int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};
    int dfs(int r, int c, vector<vector<int>>& grid){
        if(r<0 || c<0 || r>=n || c>=m) return 0;
        if(grid[r][c]==0) return 0;

        grid[r][c]=0;
        int area = 1;
        for(auto &d: directions){
            area+=dfs(r+d[0], c+d[1], grid);
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        n = grid.size();
        m = grid[0].size();
        int maximum = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    maximum = max(maximum, dfs(i,j,grid));
                }
            }
        }
        return maximum;
    }
};