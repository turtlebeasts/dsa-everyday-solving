#include <iostream>
#include <vector>
using namespace std;

vector<int> hasDifferenceofK(vector<int> &nums, int k)
{
    int n = nums.size();
    int l = 0, r = 1;

    while (l < n && r < n)
    {
        if (l == r)
        {
            r++;
            continue;
        }

        int diff = nums[r] - nums[l];

        if (diff == k)
            return {l, r};
        else if (diff < k)
            r++;
        else
            l++;
    }

    return {-1, -1};
}

int main()
{
    vector<int> nums = {1, 3, 5, 8, 10};
    int k = 2;
    vector<int> result = hasDifferenceofK(nums, k);
    for (int r : result)
    {
        cout << r << " ";
    }
    return 0;
}