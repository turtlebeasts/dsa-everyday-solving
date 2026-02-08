class Solution {
public:
    int n, m;
    vector<vector<int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};

    int dfs(int r, int c, vector<vector<int>>& grid){
        if(r<0 || c<0 || r>=n || c>=m){
            return 1;
        }
        if(grid[r][c]==0){
            return 1;
        }
        if(grid[r][c]==-1){
            return 0;
        }

        grid[r][c]=-1;

        int paremeter = 0;
        for(auto &d: directions){
            paremeter+=dfs(r+d[0], c+d[1], grid);
        }
        return paremeter;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();

        int paremeter = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    paremeter+=dfs(i, j, grid);
                }
            }
        }
        return paremeter;
    }
};