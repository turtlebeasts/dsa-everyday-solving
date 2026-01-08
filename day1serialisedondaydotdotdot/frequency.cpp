#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> inpArray = {4, 5, 1, 2, 1, 4, 5};
    unordered_map<int, int> freqMap;
    int maxElement = 0;

    for (int ele : inpArray)
    {
        freqMap[ele]++;
    }

    for (int x : inpArray)
    {
        if (freqMap[x] == 1)
        {
            maxElement = x;
            break;
        }
    }

    cout << maxElement;
    return 0;
}