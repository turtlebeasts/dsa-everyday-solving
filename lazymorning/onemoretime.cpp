#include <vector>
#include <unordered_map>
#include <iostream>

int main()
{
    std::vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;

    // requirements
    std::unordered_map<int, int> mp;
    int sum = 0;
    int maxLength = 0;

    // initialization
    mp[0] = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (mp.count(sum - k))
        {
            maxLength = std::max(maxLength, i - mp[sum - k]);
        }

        if (!mp.count(sum))
        {
            mp[sum] = i;
        }
    }

    std::cout << maxLength;

    return 0;
}