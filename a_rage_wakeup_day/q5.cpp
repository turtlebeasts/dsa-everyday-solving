#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    int k = 3;
    unordered_map<int, int> seen;
    int current = 0;
    int count = 0;
    seen[0] = 1;

    for (int i : nums)
    {
        current += i;
        if (seen.count(current - k))
        {
            count += seen[current - k];
        }
        seen[current]++;
    }

    cout << count;
    return 0;
}