#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, int destination)
{
    visited[node] = true;
    if (node == destination)
        return true;
    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            if (dfs(neighbour, adj, visited, destination))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 4}};
    int n = 6;
    int source = 0;
    int destination = 4;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for (auto e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    if (dfs(source, adj, visited, destination))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}