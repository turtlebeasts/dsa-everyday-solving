#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int i = 0, j = nums.size() - 1;
    int mid;

    while (i < j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] > nums[j])
        {
            i = mid + 1;
        }
        else
        {
            j = mid;
        }
    }
    cout << nums[i];
    return 0;
}