#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int i = 0, j = nums.size() - 1;
    int mid, start = -1, end = -1;

    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == target)
        {
            j = mid - 1;
            start = mid;
        }
        else if (nums[mid] > target)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    i = 0;
    j = nums.size() - 1;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == target)
        {
            i = mid + 1;
            end = mid;
        }
        else if (nums[mid] > target)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    cout << start << " " << end;
    return 0;
}