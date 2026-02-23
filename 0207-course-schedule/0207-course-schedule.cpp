class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        queue<int> q;

        for(auto &e: prerequisites){
            adj[e[1]].push_back(e[0]);
            indegree[e[0]]++;
        }

        for(int i=0; i<numCourses; i++){
            if(indegree[i]==0) q.push(i);
        }

        int processed = 0;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            processed++;
            for(int v: adj[node]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        return numCourses==processed;
    }
};