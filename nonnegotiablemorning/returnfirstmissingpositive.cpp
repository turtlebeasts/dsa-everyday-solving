#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 0};
    unordered_set<int> myset;

    for (int i : nums)
    {
        myset.insert(i);
    }

    for (int i = 1; i <= nums.size(); i++)
    {
        if (!myset.count(i))
        {
            cout << i << " not present\n";
        }
    }
    return 0;
}