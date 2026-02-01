#include <vector>
#include <queue>

void dfs_adjList(int node, std::vector<std::vector<int>> &adj, std::vector<int> &visited)
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
void bfs_adjList(int start, std::vector<std::vector<int>> &adj)
{
    int n = adj.size();
    std::vector<bool> visited(n, false);
    std::queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

void dfs_adjMat(int node, std::vector<std::vector<int>> &adj, std::vector<bool> &visited)
{
    visited[node] = true;
    for (int v = 0; v < adj.size(); v++)
    {
        if (!visited[v] && adj[node][v] == 1)
        {
            dfs_adjMat(v, adj, visited);
        }
    }
}

void bfs_adjMat(int start, std::vector<std::vector<int>> &adj)
{
    int n = adj.size();
    std::vector<bool> visited(n, false);
    std::queue<int> q;

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