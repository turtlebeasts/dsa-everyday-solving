#include <vector>
using namespace std;
void dfs(int node, vector<vector<int>> &matrix, vector<bool> &visited)
{
    visited[node] = true;
    int n = matrix.size();
    for (int v = 0; v < n; v++)
    {
        if (matrix[node][v] == 1 && !visited[v])
        {
            dfs(v, matrix, visited);
        }
    }
}