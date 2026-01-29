#include <bits/stdc++.h>
using namespace std;

// DFS function
void dfs(int node, vector<vector<int>> &adj, vector<int> &visited)
{
    visited[node] = 1;
    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, adj, visited);
        }
    }
}

int main()
{
    int n = 4; // number of nodes

    // adjacency list
    vector<vector<int>> adj(n);

    // building the graph (undirected)
    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(3);

    adj[2].push_back(0);
    adj[2].push_back(3);

    adj[3].push_back(1);
    adj[3].push_back(2);

    // visited array
    vector<int> visited(n, 0);

    cout << "DFS traversal starting from node 0: ";
    dfs(0, adj, visited);

    cout << endl;
    return 0;
}
