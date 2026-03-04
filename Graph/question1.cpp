#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;
    for (int neigh : adj[node])
    {
        if (!visited[neigh])
        {
            dfs(neigh, adj, visited);
        }
    }
}

int main()
{
    int n = 7;
    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {3, 4},
        {5, 6}};

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited);
            result++;
        }
    }

    cout << result;
    return 0;
}