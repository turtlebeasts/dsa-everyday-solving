#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 5, 6, 7, 1, 2, 3};
    int i = 0, j = nums.size() - 1, target = 1;

    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (nums[mid] == target)
        {
            cout << mid;
            return 0;
        }

        if (nums[i] <= nums[mid])
        {
            if (nums[i] <= target && target < nums[mid])
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        else if (nums[mid] <= nums[j])
        {
            if (nums[mid] < target && target <= nums[j])
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
    }

    cout << -1;
    return 0;
}