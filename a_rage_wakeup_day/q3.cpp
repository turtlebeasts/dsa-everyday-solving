#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, 4, 2};
    vector<int> ans = {nums[0]};

    for (int i = 1; i < nums.size(); i++)
    {
        ans.push_back(ans[i - 1] + nums[i]);
    }

    for (int i : ans)
    {
        cout << i << " ";
    }
    // return ans here...
    return 0;
}