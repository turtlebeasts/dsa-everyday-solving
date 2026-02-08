#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &callStack)
{
    visited[node] = true;
    callStack[node] = true;

    for (int neigh : adj[node])
    {
        if (!visited[neigh])
        {
            if (dfs(neigh, adj, visited, callStack))
                return true;
        }
        else if (callStack[neigh])
        {
            return true;
        }
    }

    callStack[node] = false;
    return false;
}

int main()
{
    int n = 4;
    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {2, 3},
        {3, 1} // 👈 directed cycle
    };
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    vector<bool> callStack(n, false);

    int hasCycle = false;

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, adj, visited, callStack))
            {
                hasCycle = true;
                break;
            }
        }
    }

    if (hasCycle)
    {
        cout << "Cycle detected";
    }
    else
    {
        cout << "No cycle detected";
    }

    return 0;
}