#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1};

    int i = 0, j = nums.size() - 1;
    int mid;

    if (nums.size() == 2)
    {
        if (nums[0] > nums[1])
        {
            mid = 0;
        }
        else
        {
            mid = 1;
        }
        cout << mid;
        return 0;
    }
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[i] < nums[mid])
        {
            i = mid;
        }
        else if (nums[mid] > nums[j])
        {
            j = mid - 1;
        };
    }

    cout << mid;
    return 0;
}