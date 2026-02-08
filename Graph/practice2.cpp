#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, int parent = -1)
{
    visited[node] = true;

    for (int neigh : adj[node])
    {
        if (!visited[neigh])
        {
            if (dfs(neigh, adj, visited, node))
                return true;
        }
        else if (neigh != parent)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n = 5;
    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {2, 0}, // 👈 cycle here
        {3, 4}};
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    bool hasCycle = false;

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, adj, visited, -1))
            {
                hasCycle = true;
            }
        }
    }

    if (hasCycle)
    {
        cout << "Cycle found";
    }
    else
    {
        cout << "No cycle found";
    }

    return 0;
}