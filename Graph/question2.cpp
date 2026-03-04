#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n = 6;
    int src = 0;
    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {1, 3},
        {3, 4},
        {2, 5}};

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    vector<int> result;
    queue<int> q;

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
    }

    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        result.push_back(node);

        for (int neigh : adj[node])
        {
            if (!visited[neigh])
            {
                q.push(neigh);
                visited[neigh] = true;
            }
        }
    }

    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}