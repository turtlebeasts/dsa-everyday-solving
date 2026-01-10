// understood the logic and functioning of two pointers,
// ummm remember that two pointers work only on sorted arrays,
// if the array is not sorted, then you should sort it before performing the two pointers thing
// if it's not sorted, then god bless you;

#include <iostream>
#include <vector>

using namespace std;

int hasSum(vector<int> nums, int k)
{
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        int sum = nums[l] + nums[r];
        if (sum == k)
            return true;
        else if (sum < k)
            l++;
        else
            r--;
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 4, 7, 11};
    int k = 9;
    if (hasSum(nums, k))
    {
        cout << "Has has";
    }
    else
    {
        cout << "Heyall nowww";
    }
    return 0;
}