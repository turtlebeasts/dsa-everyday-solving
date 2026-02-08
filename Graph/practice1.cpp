#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[start] = true;
    queue<int> q;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int neigh : adj[node])
        {
            if (!visited[neigh])
            {
                q.push(neigh);
                visited[neigh] = true;
            }
        }
    }
}

int main()
{
    int n = 5;
    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {3, 4}};
    int count = 0;
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(i, adj, visited);
            count++;
        }
    }

    cout << count;
    return 0;
}