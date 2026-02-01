#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;

    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, adj, visited);
        }
    }
}
