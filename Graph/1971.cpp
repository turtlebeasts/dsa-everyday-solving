#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int destination,
         vector<vector<int>> &adj,
         vector<int> &visited)
{
    if (node == destination)
        return true;

    visited[node] = 1;

    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            if (dfs(neighbour, destination, adj, visited))
                return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}};
    int source = 0;
    int destination = 2;

    int n = 3; // number of nodes
    vector<vector<int>> adj(n);
    vector<int> visited(n, 0);

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    if (dfs(source, destination, adj, visited))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}
