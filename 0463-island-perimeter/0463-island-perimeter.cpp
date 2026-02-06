class Solution {
public:
    int n, m;
    vector<vector<int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
    int paremeter = 0;

    void dfs(int r, int c, vector<vector<int>>& grid){
        if(r<0 || c<0 || r>=n || c>=m){
            paremeter++;
            return;
        }
        if(grid[r][c]==0){
            paremeter++;
            return;
        }
        if(grid[r][c]==-1){
            return;
        }

        grid[r][c]=-1;

        for(auto &d: directions){
            dfs(r+d[0], c+d[1], grid);
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    dfs(i, j, grid);
                    return paremeter;
                }
            }
        }
        return paremeter;
    }
};