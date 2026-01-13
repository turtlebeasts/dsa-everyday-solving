#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int i = 0, j = nums.size() - 1;
    int mid;

    while (i < j)
    {
        mid = i + (j - i) / 2;
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
            if (nums[mid] < target && target < nums[j])
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
    }
    if (nums[mid - 1] != target)
        return -1;
    cout << mid - 1;
    return 0;
}