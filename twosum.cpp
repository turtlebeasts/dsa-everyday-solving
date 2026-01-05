#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    unordered_map<int, int> diffs;
    int target = 9;

    for (int ele : nums)
    {
        if (diffs.find(target - ele) != diffs.end())
        {
            cout << target - ele << ", " << ele;
            break;
        }
        else
        {
            diffs[ele] = target - ele;
        }
    }

    return 0;
}