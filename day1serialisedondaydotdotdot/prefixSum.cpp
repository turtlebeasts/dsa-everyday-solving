#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> expenses = {100, 200, 50, 300, 150};
    int total = 0;
    for (int i = 1; i < 4; i++)
    {
        total += expenses[i];
    }

    cout << total;
    return 0;
}