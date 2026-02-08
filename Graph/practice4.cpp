#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n = 6;
    vector<vector<int>> edges = {
        {5, 2},
        {5, 0},
        {4, 0},
        {4, 1},
        {2, 3},
        {3, 1}};

    vector<vector<int>> adj(n);
    vector<int> indegree(n, 0);
    queue<int> q;
    vector<int> result;

    // creating adj list
    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
    }

    // computer indegree
    for (int i = 0; i < n; i++)
    {
        for (int neigh : adj[i])
        {
            indegree[neigh]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neigh : adj[node])
        {
            indegree[neigh]--;
            if (indegree[neigh] == 0)
            {
                q.push(neigh);
            }
        }
    }

    if (result.size() != n)
    {
        cout << "Cycle detected";
    }
    else
    {
        for (int i : result)
        {
            cout << i << " ";
        }
    }

    return 0;
}