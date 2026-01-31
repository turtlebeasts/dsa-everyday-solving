#include <iostream>
#include <vector>
using namespace std;

void dfs_traverse(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;
    cout << node << " ";
    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs_traverse(neighbour, adj, visited);
        }
    }
}

int main()
{
    // creating adjacency list from edge list
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}};
    int n = 3;
    vector<vector<int>> adj(n);

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    // create visited array & dfs traversing
    vector<bool> visited(n, false);
    dfs_traverse(0, adj, visited);
    return 0;
}