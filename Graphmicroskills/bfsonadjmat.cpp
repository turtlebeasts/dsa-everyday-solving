#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int v = 0; v < n; v++)
        {
            if (!visited[v] && adj[node][v] == 1)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}