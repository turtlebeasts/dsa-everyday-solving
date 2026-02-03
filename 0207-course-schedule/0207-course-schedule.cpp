class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& pathVisited){
        visited[node]=true;
        pathVisited[node]=true;
        for(int neighbour: adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour, adj, visited, pathVisited))
                    return true;
            }else if(pathVisited[neighbour]){
                return true;
            }
        }
        pathVisited[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<bool> visited(numCourses, false);
        vector<bool> pathVisited(numCourses, false);

        for(auto &e: prerequisites){
            adj[e[1]].push_back(e[0]);
        }
        
        for(int i = 0; i< numCourses; i++){
            if(!visited[i]){
                if(dfs(i, adj, visited, pathVisited)) return false;
            }
        }
        return true;
    }
};