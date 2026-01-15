#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    int i = 0, j = nums.size() - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (nums[mid] == target)
            return true;
        if (nums[i] < nums[mid])
        {
            if (nums[i] < target && target < nums[mid])
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        else
        {
            if (nums[mid] > target && target <= nums[j])
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
    }
    return 0;
}