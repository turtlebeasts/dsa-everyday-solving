#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        int mid = i + (j - i) / 2;
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