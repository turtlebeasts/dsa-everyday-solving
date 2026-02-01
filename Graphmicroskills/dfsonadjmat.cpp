#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;
    for (int v = 0; v < adj.size(); v++)
    {
        if (!visited[v] && adj[node][v] == 1)
        {
            dfs(v, adj, visited);
        }
    }
}