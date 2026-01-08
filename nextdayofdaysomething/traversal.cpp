#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = {nums[0]};

    for (int i = 1; i < nums.size(); i++)
    {
        res.push_back(res[i - 1] + nums[i]);
    }

    for (int n : res)
    {
        cout << n << " ";
    }
    return 0;
}