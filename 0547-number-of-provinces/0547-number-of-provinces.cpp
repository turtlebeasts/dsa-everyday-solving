class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& visited){
        visited[node]=true;
        for(int v=0;v<isConnected.size();v++){
            if(!visited[v] && isConnected[node][v]==1){
                dfs(v, isConnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int province = 0;
        vector<bool> visited(isConnected.size(), false);
        for(int i=0;i<isConnected.size(); i++){
            if(!visited[i]){
                dfs(i, isConnected, visited);
                province++;
            }
        }
        return province;
    }
};