#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    unordered_map<int, int> freq;
    vector<int> result;

    for (int i : nums)
    {
        freq[i]++;
    }

    for (auto &i : freq)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    while (k != 0)
    {
        int highest = -99;
        int count = -99;
        for (auto &i : freq)
        {
            if (i.second > count)
            {
                highest = i.first;
                count = i.second;
            }
        }
        k--;
        freq.erase(highest);
        result.push_back(highest);
        cout << highest;
    }

    return 0;
}