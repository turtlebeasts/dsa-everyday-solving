#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {2, 2}, // 👈 self-loop
        {3, 4}};

    for (int i = 0; i < n; i++)
    {
        if (edges[i][0] == edges[i][1])
        {
            cout << "Self loop from : " << edges[i][0] << " - " << edges[i][1];
            return 0;
        }
    }

    cout << "No loops";
    return 0;
}