#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, 6, 8};
    vector<int> prefix = {nums[0]};
    int i = 1;
    int j = 3;

    for (int i = 1; i < nums.size(); i++)
    {
        prefix.push_back(prefix[i - 1] + nums[i]);
    }

    cout << prefix[j] - prefix[i - 1];

    return 0;
}