#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4; // number of nodes
    vector<vector<int>> adj(n);

    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(3);

    adj[2].push_back(0);
    adj[2].push_back(3);

    adj[3].push_back(1);
    adj[3].push_back(2);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
