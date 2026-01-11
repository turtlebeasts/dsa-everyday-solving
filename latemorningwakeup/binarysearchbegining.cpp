#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    bool found = false;
    int target = 7;
    int i = 0, j = nums.size() - 1;
    int mid;

    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == target)
        {
            cout << mid;
            found = true;
            break;
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

    if (!found)
    {
        cout << -1;
    }
    return 0;
}