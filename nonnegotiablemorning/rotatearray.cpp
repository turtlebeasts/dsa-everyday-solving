#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int l = 0, r = nums.size();
    int mid;

    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (nums[mid] > nums[r])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }

    cout << nums[l];
    return 0;
}