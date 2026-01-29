#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &visited)
{
    visited[node] = 1;
    cout << node << " ";
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
    int n = 4;
    vector<vector<int>> adj(n);

    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(3);

    adj[2].push_back(0);
    adj[2].push_back(3);

    adj[3].push_back(1);
    adj[3].push_back(2);

    vector<int> visited(n, 0);

    // call dfs from node 0
    dfs(0, adj, visited);

    return 0;
}
