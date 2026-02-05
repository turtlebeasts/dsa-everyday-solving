class Solution {
public:
    vector<vector<int>> directions = {{-1,0}, {1,0}, {0,-1},{0,1}};
    int n, m;
    int oldColor, newColor;

    void dfs(int r, int c, vector<vector<int>>& image){
        if(r<0 || c <0 || r>=n || c >=m) return;
        if(image[r][c]!=oldColor) return;
        image[r][c]=newColor;

        for(auto &d: directions){
            dfs(r+d[0], c+d[1], image);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n = image.size();
        m = image[0].size();
        oldColor = image[sr][sc];
        newColor = color;
        if(oldColor==newColor) return image;
        dfs(sr, sc, image);
        return image;
    }
};