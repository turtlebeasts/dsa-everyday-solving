#include <vector>
#include <queue>
using namespace std;

vector<int> topoSort(int n, vector<vector<int>> &adj)
{
    vector<int> indegree(n, 0);

    // Step 1: compute indegree
    for (auto u : adj)
    {
        for (int v : u)
        {
            indegree[v]++;
        }
    }

    // Step 2: push all indegree 0 nodes
    queue<int> q;

    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    // Step 3: BFS
    vector<int> topo;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for (int neigh : adj[node])
        {
            indegree[neigh]--;
            if (indegree[neigh] == 0)
                q.push(neigh);
        }
    }

    // Step 4: cycle check
    if (topo.size() != n)
        return {}; // cycle exists

    return topo;
}
