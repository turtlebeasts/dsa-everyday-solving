// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     vector<int> nums = {1, -1, 5, -2, 3};
//     unordered_map<int, int> mp;
//     mp[0] = -1;
//     int k = 3;
//     int sum = 0;
//     int maxLen = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum += nums[i];

//         if (mp.count(sum - k))
//         {
//             maxLen = max(maxLen, i - mp[sum - k]);
//         }

//         if (mp.count(sum))
//         {
//             mp[sum] = i;
//         }
//     }
//     return 0;
// }

/*
    The solution is,
    1. iterate the array
    2. add all the numbers into a variables called sum
    3. check if sum exists in the map, if it doesn't exist,
        - then update the position of sum in the map
    4. check if sum-k (the difference between current sum and target)
    exist in the map,
        - update maxlength to i - mp [sum - k]
            - sum - k is the difference between the sum and target
            - the difference between current and target in the map
            - and it's position in the array
            - i - mp[sum-k] is the number of elements from current to that
            number (difference from the target)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, -1, 5, -2, 3};
    unordered_map<int, int> mp;
    int sum = 0;
    int maxLength = 0;
    int k = 3;
    mp[0] = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (mp.count(sum - k))
        {
            maxLength = max(maxLength, i - mp[sum - k]);
        }

        if (!mp.count(sum))
        {
            mp[sum] = i;
        }
    }

    cout << maxLength;
    return 0;
}