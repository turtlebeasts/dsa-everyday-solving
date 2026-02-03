class Solution
{
public:
    bool dfs(int node, vector<vector<int>> &graph, vector<int> &visited)
    {
        // If node is currently in DFS path → cycle
        if (visited[node] == 1)
            return false;

        // If already fully processed → no need to recheck
        if (visited[node] == 2)
            return true;

        // Mark as visiting
        visited[node] = 1;

        for (int next : graph[node])
        {
            if (!dfs(next, graph, visited))
                return false;
        }

        // Mark as fully processed
        visited[node] = 2;
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {

        vector<vector<int>> graph(numCourses);
        for (auto &p : prerequisites)
        {
            graph[p[1]].push_back(p[0]);
        }

        vector<int> visited(numCourses, 0);

        for (int i = 0; i < numCourses; i++)
        {
            if (visited[i] == 0)
            {
                if (!dfs(i, graph, visited))
                    return false;
            }
        }

        return true;
    }
};
