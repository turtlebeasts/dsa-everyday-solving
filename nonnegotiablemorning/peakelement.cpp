#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2};

    int i = 0, j = nums.size() - 1;
    int mid;

    if (nums.size() <= 2)
    {
        if (nums[i] < nums[j])
            cout << j;
        else
            cout << i;
        return 0;
    }

    while (i < j)
    {
        mid = i + (j - i) / 2;
        if (nums[i] < nums[mid])
        {
            i = mid;
        }
        else if (nums[mid] > nums[j])
        {
            j = mid;
        };
    }

    cout << mid;
    return 0;
}