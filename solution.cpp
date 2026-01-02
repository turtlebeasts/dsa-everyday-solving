#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> arrays = {1, 3, 2, 1, 4, 1, 3, 3, 3};
    map<int, int> counts;
    int max = 0;
    int maxCount = 0;

    for (int elements : arrays)
    {
        counts[elements]++;
    }

    for (auto &elements : counts)
    {
        if (elements.second > maxCount)
        {
            max = elements.first;
            maxCount = elements.second;
        }
    }

    cout << max;

    return 0;
}