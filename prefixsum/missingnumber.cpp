#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    sort(nums.begin(), nums.end());

    int exiding = nums[0];

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] == nums.size())
        {
            exiding = nums[i + 1];
        }
        if (nums[i + 1] - nums[i] != 1)
        {
            cout << nums[i] + 1;
            break;
        }
    }

    if (exiding != nums.size())
    {
        cout << "exiding" << exiding << nums.size() << " missing";
    }
    return 0;
}