#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, 5, 2, 6};
    vector<int> res;

    int max = nums[0];
    for (int i : nums)
    {
        if (i > max)
        {
            max = i;
        }
        res.push_back(max);
    }

    for (int i : res)
    {
        cout << i << " ";
    }
    return 0;
}