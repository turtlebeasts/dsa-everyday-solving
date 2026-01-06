#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    unordered_map<int, int> mp = {{0, 1}};
    int k = 3;
    int count = 0;
    int sum = 0;
    for (int nums : arr)
    {
        sum += nums;
        if (mp.count(sum - k))
        {
            count += mp[sum - k];
        }
        mp[sum]++;
    }

    return 0;
}