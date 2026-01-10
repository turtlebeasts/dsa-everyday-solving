// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> nums = {1, 1, 1, 2, 2, 3};
//     int idx = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (idx < 2 || nums[idx - 2] != nums[i])
//         {
//             nums[idx] = nums[i];
//             idx++;
//         }
//     }
//     for (int i : nums)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int idx = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (idx < 2 || nums[idx - 2] != nums[i])
        {
            nums[idx] = nums[i];
            idx++;
        }
    }

    for (int i = 0; i < idx; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}