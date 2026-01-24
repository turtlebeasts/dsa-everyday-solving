#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    unordered_map<int, int> seen;
    int k = 3;
    int count = 0;
    int prefixSum = 0;
    seen[0] = 1;

    for (int i : nums)
    {
        prefixSum += i;
        if (seen.count(prefixSum - k))
        {
            count += seen[prefixSum - k];
        }
        seen[prefixSum]++;
    }

    cout << count;
    return 0;
}