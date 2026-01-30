#include <vector>
#include <queue>

void dfs(int node, std::vector<std::vector<int>> adj, std::vector<int> visited)
{
    visited[node] = 1;
    std::cout << node << " ";

    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, adj, visited);
        }
    }
}

// node (index of adj) , adjacency list, size of adj
void bfs(int node, std::vector<std::vector<int>> adj, int n)
{
    std::vector<int> visited;
    std::queue<int> q;

    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        std::count << node << " ";
        for (int neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
}