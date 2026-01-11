#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 4, 4, 4, 5, 6};
    int k = 4;
    // find the first occurence of k

    int i = 0, j = nums.size() - 1;
    int mid;
    int lowestIndex = nums.size();

    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == k)
        {
            lowestIndex = min(lowestIndex, mid);
            j = mid - 1;
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

    if (lowestIndex == nums.size())
    {
        cout << -1;
    }
    else
    {
        cout << lowestIndex;
    }

    return 0;
}