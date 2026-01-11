#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 4, 4, 4, 5, 6};
    int k = 4;

    // find the last index of k

    int i = 0, j = nums.size() - 1;
    int mid;

    int lastIndex = nums.size();

    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == k)
        {
            lastIndex = mid;
            i = mid + 1;
        }
        else if (nums[mid] > k)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    if (lastIndex == nums.size())
    {
        cout << -1;
    }
    else
    {
        cout << lastIndex;
    }

    return 0;
}