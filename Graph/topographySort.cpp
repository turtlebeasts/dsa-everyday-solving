// topological sort using dfs
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st)
{
    visited[node] = true;

    for (int neigh : adj[node])
    {
        if (!visited[neigh])
        {
            dfs(neigh, adj, visited, st);
        }
    }

    st.push(node);
}

vector<int> topoSort(int n, vector<vector<int>> &adj)
{
    vector<bool> visited(n, false);
    stack<int> st;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited, st);
        }
    }

    while (!st.empty())
    {
        result.push_back(st.top());
        st.pop();
    }
    return result;
}