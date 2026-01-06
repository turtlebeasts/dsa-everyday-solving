#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {8, 8, 7, 7, 7};
    unordered_map<int, int> freq;
    int halfLength = nums.size() / 2;

    for (int i : nums)
    {
        freq[i]++;
    }
    for (auto ele : freq)
    {
        cout << ele.first << " " << ele.second << halfLength << endl;
        if (ele.second > halfLength)
        {
            return ele.first;
            break;
        }
    }

    return 0;
}